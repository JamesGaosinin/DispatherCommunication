/****************************************************************************
** Meta object code from reading C++ file 'PhoneFunctionManagement.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../source/PhoneFunctionManagement.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PhoneFunctionManagement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CPhoneFunctionManagement_t {
    QByteArrayData data[11];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CPhoneFunctionManagement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CPhoneFunctionManagement_t qt_meta_stringdata_CPhoneFunctionManagement = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CPhoneFunctionManagement"
QT_MOC_LITERAL(1, 25, 19), // "Sig_ChangeBtnStatus"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "E_Phone_Status"
QT_MOC_LITERAL(4, 61, 7), // "eStatus"
QT_MOC_LITERAL(5, 69, 11), // "strPhoneNum"
QT_MOC_LITERAL(6, 81, 19), // "Sig_ChangeCtrlState"
QT_MOC_LITERAL(7, 101, 21), // "E_Phone_Manager_State"
QT_MOC_LITERAL(8, 123, 6), // "eState"
QT_MOC_LITERAL(9, 130, 6), // "strMsg"
QT_MOC_LITERAL(10, 137, 15) // "Sig_HangupPhone"

    },
    "CPhoneFunctionManagement\0Sig_ChangeBtnStatus\0"
    "\0E_Phone_Status\0eStatus\0strPhoneNum\0"
    "Sig_ChangeCtrlState\0E_Phone_Manager_State\0"
    "eState\0strMsg\0Sig_HangupPhone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CPhoneFunctionManagement[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    2,   34,    2, 0x06 /* Public */,
      10,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void CPhoneFunctionManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CPhoneFunctionManagement *_t = static_cast<CPhoneFunctionManagement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sig_ChangeBtnStatus((*reinterpret_cast< E_Phone_Status(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->Sig_ChangeCtrlState((*reinterpret_cast< E_Phone_Manager_State(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->Sig_HangupPhone((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CPhoneFunctionManagement::*_t)(E_Phone_Status , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CPhoneFunctionManagement::Sig_ChangeBtnStatus)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CPhoneFunctionManagement::*_t)(E_Phone_Manager_State , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CPhoneFunctionManagement::Sig_ChangeCtrlState)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CPhoneFunctionManagement::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CPhoneFunctionManagement::Sig_HangupPhone)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject CPhoneFunctionManagement::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CPhoneFunctionManagement.data,
      qt_meta_data_CPhoneFunctionManagement,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CPhoneFunctionManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CPhoneFunctionManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CPhoneFunctionManagement.stringdata0))
        return static_cast<void*>(const_cast< CPhoneFunctionManagement*>(this));
    return QObject::qt_metacast(_clname);
}

int CPhoneFunctionManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CPhoneFunctionManagement::Sig_ChangeBtnStatus(E_Phone_Status _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CPhoneFunctionManagement::Sig_ChangeCtrlState(E_Phone_Manager_State _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CPhoneFunctionManagement::Sig_HangupPhone(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
