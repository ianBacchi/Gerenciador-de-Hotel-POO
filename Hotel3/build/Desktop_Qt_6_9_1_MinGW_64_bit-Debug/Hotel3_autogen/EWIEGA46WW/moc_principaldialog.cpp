/****************************************************************************
** Meta object code from reading C++ file 'principaldialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../principaldialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'principaldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN15PrincipalDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto PrincipalDialog::qt_create_metaobjectdata<qt_meta_tag_ZN15PrincipalDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PrincipalDialog",
        "solicitarTelaReserva",
        "",
        "solicitarTelaConsulta",
        "solicitarTelaLista",
        "solicitarTelaSaida",
        "on_pushButtonRealizar_clicked",
        "on_pushButtonConsultar_clicked",
        "on_pushButtonListar_clicked",
        "on_pushButtonSair_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'solicitarTelaReserva'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'solicitarTelaConsulta'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'solicitarTelaLista'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'solicitarTelaSaida'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_pushButtonRealizar_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonConsultar_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonListar_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSair_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PrincipalDialog, qt_meta_tag_ZN15PrincipalDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PrincipalDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PrincipalDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PrincipalDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15PrincipalDialogE_t>.metaTypes,
    nullptr
} };

void PrincipalDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PrincipalDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->solicitarTelaReserva(); break;
        case 1: _t->solicitarTelaConsulta(); break;
        case 2: _t->solicitarTelaLista(); break;
        case 3: _t->solicitarTelaSaida(); break;
        case 4: _t->on_pushButtonRealizar_clicked(); break;
        case 5: _t->on_pushButtonConsultar_clicked(); break;
        case 6: _t->on_pushButtonListar_clicked(); break;
        case 7: _t->on_pushButtonSair_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PrincipalDialog::*)()>(_a, &PrincipalDialog::solicitarTelaReserva, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrincipalDialog::*)()>(_a, &PrincipalDialog::solicitarTelaConsulta, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrincipalDialog::*)()>(_a, &PrincipalDialog::solicitarTelaLista, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PrincipalDialog::*)()>(_a, &PrincipalDialog::solicitarTelaSaida, 3))
            return;
    }
}

const QMetaObject *PrincipalDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrincipalDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PrincipalDialogE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PrincipalDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PrincipalDialog::solicitarTelaReserva()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PrincipalDialog::solicitarTelaConsulta()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PrincipalDialog::solicitarTelaLista()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PrincipalDialog::solicitarTelaSaida()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
