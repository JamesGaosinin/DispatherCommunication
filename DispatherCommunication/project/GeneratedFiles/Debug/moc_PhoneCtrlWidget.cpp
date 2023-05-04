/****************************************************************************
** Meta object code from reading C++ file 'PhoneCtrlWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../source/PhoneCtrlWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PhoneCtrlWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CPhoneCtrlWidget_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPhoneCtrlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPhoneCtrlWidget_t qt_meta_stringdata_CPhoneCtrlWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CPhoneCtrlWidget"
QT_MOC_LITERAL(1, 17, 17), // "Slot_ChangedState"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "E_Phone_Manager_State"
QT_MOC_LITERAL(4, 58, 6), // "eState"
QT_MOC_LITERAL(5, 65, 6), // "strMsg"
QT_MOC_LITERAL(6, 72, 15), // "Slot_BtnClicked"
QT_MOC_LITERAL(7, 88, 11), // "Slot_Record"
QT_MOC_LITERAL(8, 100, 14) // "Slot_PhoneBook"

    },
    "CPhoneCtrlWidget\0Slot_ChangedState\0\0"
    "E_Phone_Manager_State\0eState\0strMsg\0"
    "Slot_BtnClicked\0Slot_Record\0Slot_PhoneBook"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPhoneCtrlWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       1,    1,   44,    2, 0x28 /* Private | MethodCloned */,
       6,    0,   47,    2, 0x08 /* Private */,
       7,    0,   48,    2, 0x08 /* Private */,
       8,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CPhoneCtrlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CPhoneCtrlWidget *_t = static_cast<CPhoneCtrlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Slot_ChangedState((*reinterpret_cast< E_Phone_Manager_State(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->Slot_ChangedState((*reinterpret_cast< E_Phone_Manager_State(*)>(_a[1]))); break;
        case 2: _t->Slot_BtnClicked(); break;
        case 3: _t->Slot_Record(); break;
        case 4: _t->Slot_PhoneBook(); break;
        default: ;
        }
    }
}

const QMetaObject CPhoneCtrlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CPhoneCtrlWidget.data,
      qt_meta_data_CPhoneCtrlWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CPhoneCtrlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPhoneCtrlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CPhoneCtrlWidget.stringdata0))
        return static_cast<void*>(const_cast< CPhoneCtrlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CPhoneCtrlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
