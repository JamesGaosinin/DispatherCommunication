/****************************************************************************
** Meta object code from reading C++ file 'NetClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../source/NetClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CNetClient_t {
    QByteArrayData data[14];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CNetClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CNetClient_t qt_meta_stringdata_CNetClient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CNetClient"
QT_MOC_LITERAL(1, 11, 12), // "Sig_SendData"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "const char*"
QT_MOC_LITERAL(4, 37, 6), // "buffer"
QT_MOC_LITERAL(5, 44, 4), // "nLen"
QT_MOC_LITERAL(6, 49, 17), // "Slot_Disconnected"
QT_MOC_LITERAL(7, 67, 14), // "Slot_Connected"
QT_MOC_LITERAL(8, 82, 12), // "Slot_Working"
QT_MOC_LITERAL(9, 95, 20), // "Slot_PendingDataGram"
QT_MOC_LITERAL(10, 116, 14), // "SLot_WriteData"
QT_MOC_LITERAL(11, 131, 10), // "Slot_Error"
QT_MOC_LITERAL(12, 142, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(13, 171, 11) // "socketError"

    },
    "CNetClient\0Sig_SendData\0\0const char*\0"
    "buffer\0nLen\0Slot_Disconnected\0"
    "Slot_Connected\0Slot_Working\0"
    "Slot_PendingDataGram\0SLot_WriteData\0"
    "Slot_Error\0QAbstractSocket::SocketError\0"
    "socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CNetClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,
      10,    2,   58,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void CNetClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CNetClient *_t = static_cast<CNetClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sig_SendData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->Slot_Disconnected(); break;
        case 2: _t->Slot_Connected(); break;
        case 3: _t->Slot_Working(); break;
        case 4: _t->Slot_PendingDataGram(); break;
        case 5: _t->SLot_WriteData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->Slot_Error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CNetClient::*_t)(const char * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNetClient::Sig_SendData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CNetClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CNetClient.data,
      qt_meta_data_CNetClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CNetClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CNetClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CNetClient.stringdata0))
        return static_cast<void*>(const_cast< CNetClient*>(this));
    return QObject::qt_metacast(_clname);
}

int CNetClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CNetClient::Sig_SendData(const char * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
