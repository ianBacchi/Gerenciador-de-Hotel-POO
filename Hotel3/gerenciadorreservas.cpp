    #include "gerenciadorreservas.h"
    #include <QFile>
    #include<QTextStream>
    #include <algorithm>

    GerenciadorDeReservas* GerenciadorDeReservas::m_instance = nullptr;

    GerenciadorDeReservas* GerenciadorDeReservas::getInstance() {
        if (m_instance == nullptr) {
            m_instance = new GerenciadorDeReservas();
        }
        return m_instance;
    }

    GerenciadorDeReservas::GerenciadorDeReservas() {
        // Carregar atendentes
        m_atendentes.append(Atendente("atendente1", "senha1"));
        m_atendentes.append(Atendente(" 1", "1"));
        m_atendentes.append(Atendente("atendente2", "senha2"));
        m_atendentes.append(Atendente("atendente3", "senha3"));
        m_atendentes.append(Atendente("atendente4", "senha4"));
        m_atendentes.append(Atendente("test", "teste"));

        // Carregar os tipos de quarto
        m_quartos.append(Quarto("Solteiro", "Ideal para viajantes individuais", 200.00));
        m_quartos.append(Quarto("Duplo", "Duas camas separadas, para amigos ou colegas", 300.00));
        m_quartos.append(Quarto("Casal", "Uma cama de casal, ideal para casais", 350.00));
        m_quartos.append(Quarto("Triplo", "Três camas (uma de casal + uma de solteiro ou três solteiras)", 450.00));
        m_quartos.append(Quarto("Quádruplo", "Quatro camas (duas de casal ou quatro solteiras)", 550.00));

        carregarReservasDoArquivo("reservas.csv");
    }

    bool GerenciadorDeReservas::autenticarAtendente(const QString &usuario, const QString &senha) {
        for (const Atendente &atendente : m_atendentes) {
            if (atendente.usuario() == usuario && atendente.senha() == senha) {
                return true;
            }
        }
        return false;
    }

    const QVector<Quarto>& GerenciadorDeReservas::getTiposDeQuartos() const { return m_quartos; }

    // <<----------------- IMPLEMENTAÇÃO DOS NOVOS MÉTODOS ----------------->>

    QStringList GerenciadorDeReservas::getLocalidades() const
    {
        // Retorna a lista fixa de localidades
        return {"Jericoacoara", "Canoa Quebrada", "Cumbuco"};
    }

    void GerenciadorDeReservas::adicionarReserva(const Reserva &reserva)
    {
        m_reservas.append(reserva);
    }

    bool GerenciadorDeReservas::verificarDisponibilidade(const QString &localidade, const QString &tipoQuarto, const QDate &checkIn, int numDiarias)
    {
        qDebug() << "\n--- NOVA VERIFICACAO ---";
        qDebug() << "Procurando por:" << localidade << tipoQuarto;
        qDebug() << "Nova Data Check-in:" << checkIn.toString("dd/MM/yyyy");

        QDate checkOut = checkIn.addDays(numDiarias);
        qDebug() << "Nova Data Check-out:" << checkOut.toString("dd/MM/yyyy");

        for (const Reserva &reservaExistente : m_reservas) {
            qDebug() << "  -> Comparando com reserva existente:" << reservaExistente.localidade() << reservaExistente.tipoQuarto();
            qDebug() << "     Check-in existente:" << reservaExistente.checkIn().toString("dd/MM/yyyy");
            // Assumindo que sua classe Reserva tem um método checkOut()
            qDebug() << "     Check-out existente:" << reservaExistente.checkOut().toString("dd/MM/yyyy");

            // Checa se o quarto e local são os mesmos
            if (reservaExistente.localidade() == localidade &&
                reservaExistente.tipoQuarto() == tipoQuarto)
            {
                qDebug() << "     [INFO] Quarto e Localidade CORRESPONDEM. Verificando datas...";

                // Checa sobreposição de datas
                bool comecaAntesDoFim = checkIn < reservaExistente.checkOut();
                bool terminaDepoisDoInicio = checkOut > reservaExistente.checkIn();

                qDebug() << "     [CHECK] Nova reserva começa antes do fim da existente?" << comecaAntesDoFim;
                qDebug() << "     [CHECK] Nova reserva termina depois do início da existente?" << terminaDepoisDoInicio;

                if (comecaAntesDoFim && terminaDepoisDoInicio) {
                    qDebug() << "     [RESULTADO] CONFLITO DE DATAS ENCONTRADO! Retornando false.";
                    return false; // Conflito! Quarto indisponível.
                } else {
                    qDebug() << "     [INFO] Datas não conflitantes. Continuando a busca...";
                }
            } else {
                qDebug() << "     [INFO] Quarto ou Localidade diferente. Ignorando esta reserva.";
            }
        }


        return true; // Sem conflitos, o quarto está disponível.
    }

    const QList<Reserva>& GerenciadorDeReservas::getTodasAsReservas() const
    {
        return m_reservas; // Simplesmente retorna a lista de reservas que já está na memória.
    }

    void GerenciadorDeReservas::carregarReservasDoArquivo(const QString &caminhoArquivo)
    {
        QFile file(caminhoArquivo);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            // Arquivo não existe ainda (primeira execução), o que é normal.
            return;
        }

        QTextStream in(&file);

        // Pula a linha do cabeçalho
        if (!in.atEnd()) {
            in.readLine();
        }

        while (!in.atEnd()) {
            QString linha = in.readLine();
            QStringList campos = linha.split(';'); // Usamos ';' pois foi como você salvou

            // O seu arquivo tem 11 colunas. Verificamos se a linha está correta.
            if (campos.size() == 12) {
                // Recriamos o objeto Reserva com os dados da linha
                // A ORDEM DOS CAMPOS É CRUCIAL! Deve ser a mesma da função de salvar.
                QDate checkIn = QDate::fromString(campos[0].trimmed(), "dd/MM/yyyy");
                QDate checkOut = QDate::fromString(campos[1].trimmed(), "dd/MM/yyyy");
                QString nomeCliente = campos[2].trimmed();
                QString cpfCliente = campos[3].trimmed();
                QString localidade = campos[4].trimmed();
                QString tipoQuarto = campos[5].trimmed();
                int diarias = campos[6].trimmed().toInt();
                QString desconto = campos[7].trimmed();
                double valorTotal = campos[8].trimmed().toDouble();
                // O valor da entrada não precisa ser lido, pois pode ser recalculado
                QString status = campos[9].trimmed();
                QString atendente = campos[10].trimmed();

                // Crie a reserva. Ajuste o construtor conforme a sua classe Reserva.
                // Vou assumir um construtor que use os dados principais.
                Reserva reservaCarregada(checkIn, checkOut, diarias, localidade, tipoQuarto, nomeCliente, cpfCliente,
                                         atendente, desconto, valorTotal, status);

                // Adiciona a reserva lida do arquivo para a nossa lista em memória
                m_reservas.append(reservaCarregada);
            }
        }

        file.close();
    }

    bool GerenciadorDeReservas::salvarReservasEmArquivo(const QString &caminhoArquivo)
    {
        QFile file(caminhoArquivo);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            // Não foi possível abrir o arquivo para escrita
            return false;
        }

        // Ordenar as reservas pela data de check-in, conforme o requisito
        std::sort(m_reservas.begin(), m_reservas.end(), [](const Reserva &a, const Reserva &b) {
            return a.checkIn() < b.checkIn();
        });

        QTextStream out(&file);

        // Cabeçalho do CSV
        out << "CheckIn;CheckOut;Cliente;CPF;Localidade;TipoQuarto;Diarias;Desconto;Total;Entrada;Status;Atendente\n";

        for (const Reserva &reserva : m_reservas) {
            out << reserva.checkIn().toString("dd/MM/yyyy") << ";"
                <<reserva.checkOut().toString("dd/MM/yyyy") << ";"
                << reserva.nomeCliente() << ";"
                << reserva.cpfCliente() << ";"
                << reserva.localidade() << ";"
                << reserva.tipoQuarto() << ";"
                << reserva.diarias() << ";"
                << reserva.descontoAplicado() << ";"
                << QString::number(reserva.valorTotal(), 'f', 2) << ";"
                << QString::number(reserva.valorEntrada(), 'f', 2) << ";"
                << reserva.status() << ";"
                << reserva.atendente() << "\n";
        }

        file.close();
        return true;
    }
