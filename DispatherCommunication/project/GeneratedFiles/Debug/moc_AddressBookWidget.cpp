/****************************************************************************
** Meta object code from reading C++ file 'AddressBookWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../source/AddressBookWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddressBookWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CAddressBookWidget_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CAddressBookWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CAddressBookWidget_t qt_meta_stringdata_CAddressBookWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CAddressBookWidget"
QT_MOC_LITERAL(1, 19, 18), // "Slot_SetPhoneState"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "E_Phone_Status"
QT_MOC_LITERAL(4, 54, 7), // "eStatus"
QT_MOC_LITERAL(5, 62, 11), // "strPhoneNum"
QT_MOC_LITERAL(6, 74, 15) // "Slot_BtnClicked"

    },
    "CAddressBookWidget\0Slot_SetPhoneState\0"
    "\0E_Phone_Status\0eStatus\0strPhoneNum\0"
    "Slot_BtnClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CAddressBookWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       6,    0,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void,

       0        // eod
};

void CAddressBookWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CAddressBookWidget *_t = static_cast<CAddressBookWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Slot_SetPhoneState((*reinterpret_cast< E_Phone_Status(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->Slot_BtnClicked(); break;
        default: ;
        }
    }
}

const QMetaObject CAddressBookWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CAddressBookWidget.data,
      qt_meta_data_CAddressBookWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CAddressBookWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CAddressBookWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CAddressBookWidget.stringdata0))
        return static_cast<void*>(const_cast< CAddressBookWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CAddressBookWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
