# Sistema de Reservas - Rede de Hotéis Paradise

![Linguagem](https://img.shields.io/badge/Linguagem-C%2B%2B-blue.svg)
![Framework](https://img.shields.io/badge/Framework-Qt%206-brightgreen.svg)
![Build](https://img.shields.io/badge/Build-CMake-orange.svg)

## 📖 Sobre o Projeto

Este é um sistema de desktop para gerenciamento de reservas de uma rede de hotéis fictícia, a "Rede Paradise". O projeto foi desenvolvido como uma aplicação prática para a disciplina de Programação Orientada a Objetos, utilizando a linguagem C++ e o framework Qt para a construção da interface gráfica.

O objetivo principal da aplicação é auxiliar os atendentes da rede de hotéis no processo de consulta de disponibilidade, criação e listagem de reservas, aplicando diferentes políticas de desconto de forma flexível e garantindo a persistência dos dados entre as sessões.

---

## ✨ Funcionalidades Principais

* **Autenticação de Atendentes:** Sistema de login seguro para acesso exclusivo de funcionários cadastrados.
* **Consulta de Disponibilidade:** Permite verificar se um tipo de quarto está disponível em uma localidade e período específicos.
* **Realização de Reservas:** Formulário completo para criar uma nova reserva, capturando dados do cliente, datas, tipo de quarto e política de desconto aplicável.
* **Cálculo Dinâmico de Custos:** O sistema calcula o valor total da hospedagem, o valor do desconto (se houver) e o valor da entrada para confirmação da reserva.
* **Listagem de Reservas:** Uma tela que exibe todas as reservas já realizadas, ordenadas por data de check-in, funcionando como um painel de controle central.
* **Persistência de Dados:** Todas as reservas são salvas em um arquivo `.csv`, que é lido na inicialização do programa, garantindo que os dados não sejam perdidos ao fechar a aplicação.

---

## 🎨 Telas do Sistema

O sistema é composto por um fluxo de telas intuitivo para facilitar o trabalho do atendente.

| Tela de Login | 

<img width="748" height="396" alt="image" src="https://github.com/user-attachments/assets/906b8fc2-5381-4367-9a75-adf39815ed19" />

| Tela Principal |
<img width="810" height="373" alt="image" src="https://github.com/user-attachments/assets/8e1f70e1-4769-47f7-bc50-5def88e64503" />

| Realizar Reserva |

<img width="643" height="395" alt="image" src="https://github.com/user-attachments/assets/6120e2a5-09cc-464d-8e30-9278bfc876eb" />

| Consultar Disponibilidade |
<img width="800" height="374" alt="image" src="https://github.com/user-attachments/assets/11ce6577-3307-4d20-95a6-6e62ecb7ff40" />

| Listar Todas as Reservas |

<img width="757" height="384" alt="image" src="https://github.com/user-attachments/assets/8e0de016-4ada-4b6b-a143-2ecd5bee03b9" />


---

## 🛠️ Tecnologias e Padrões de Projeto

Este projeto foi uma oportunidade para aplicar conceitos importantes de engenharia de software e programação orientada a objetos.

### Tecnologias Utilizadas
* **C++:** Linguagem principal do projeto, com foco em orientação a objetos.
* **Qt Framework (versão 6):** Utilizado para a criação de toda a interface gráfica (GUI), gerenciamento de eventos e funcionalidades auxiliares (`QString`, `QDate`, `QFile`, etc.).
* **Qt Creator:** IDE utilizada para o desenvolvimento e gerenciamento do projeto.
* **CMake:** Sistema de build para compilação e linkedição do projeto.

### Padrões de Projeto (Design Patterns)
A arquitetura do sistema foi planejada com base em dois padrões de projeto fundamentais para garantir a manutenibilidade e a flexibilidade do código:

1.  **Singleton:** Este padrão foi aplicado na classe `GerenciadorDeReservas`. Ele garante que exista uma **única instância centralizada** responsável por controlar todos os dados da aplicação (a lista de reservas, os tipos de quartos, etc.). Isso assegura a consistência e a integridade dos dados em todas as telas do sistema, evitando conflitos e duplicação de informações.

2.  **Strategy:** Utilizado para implementar as diversas políticas de desconto. A interface `IEstrategiaDesconto` define um contrato comum para o cálculo de descontos, e classes concretas (`DescontoVIP`, `DescontoBaixaTemporada`, `SemDesconto`, etc.) implementam as diferentes regras de negócio. Este padrão permite que novas políticas de desconto sejam adicionadas ou alteradas com o mínimo de impacto no código principal, tornando o sistema flexível e de fácil manutenção.

---

## 🚀 Como Executar o Projeto

Para compilar e executar este projeto, você precisará ter o Qt (versão 6 ou superior) e um compilador C++ (MSVC, MinGW ou GCC) instalados em sua máquina.

1.  Clone o repositório:
    ```bash
    git clone [https://github.com/seu-usuario/seu-repositorio.git](https://github.com/seu-usuario/seu-repositorio.git)
    ```
2.  Abra o arquivo `CMakeLists.txt` com o Qt Creator.
3.  Configure o projeto selecionando um Kit de compilação compatível.
4.  Compile (`Build -> Build Project`) e execute (`Run`).

---

## ✒️ Autor

Projeto desenvolvido por **Ian Bacchi Nascimento**.

[Seu LinkedIn](https://www.linkedin.com/in/ian-bacchi-nascimento-466327222?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app) | [Seu Email](ianbacchi@gmail.com)

-
