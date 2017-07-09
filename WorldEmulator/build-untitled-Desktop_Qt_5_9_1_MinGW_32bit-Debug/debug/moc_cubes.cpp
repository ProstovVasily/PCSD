/****************************************************************************
** Meta object code from reading C++ file 'cubes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../untitled/cubes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cubes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cube_t {
    QByteArrayData data[1];
    char stringdata0[5];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cube_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cube_t qt_meta_stringdata_Cube = {
    {
QT_MOC_LITERAL(0, 0, 4) // "Cube"

    },
    "Cube"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cube[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Cube::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Cube::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cube.data,
      qt_meta_data_Cube,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cube::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cube::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cube.stringdata0))
        return static_cast<void*>(const_cast< Cube*>(this));
    return QObject::qt_metacast(_clname);
}

int Cube::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Drone_t {
    QByteArrayData data[5];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Drone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Drone_t qt_meta_stringdata_Drone = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Drone"
QT_MOC_LITERAL(1, 6, 9), // "Connected"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 12), // "Disconnected"
QT_MOC_LITERAL(4, 30, 7) // "ReadCmd"

    },
    "Drone\0Connected\0\0Disconnected\0ReadCmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Drone[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Drone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Drone *_t = static_cast<Drone *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Connected(); break;
        case 1: _t->Disconnected(); break;
        case 2: _t->ReadCmd(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Drone::staticMetaObject = {
    { &Cube::staticMetaObject, qt_meta_stringdata_Drone.data,
      qt_meta_data_Drone,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Drone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Drone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Drone.stringdata0))
        return static_cast<void*>(const_cast< Drone*>(this));
    return Cube::qt_metacast(_clname);
}

int Drone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Cube::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
