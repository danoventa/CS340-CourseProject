/****************************************************************************
** Meta object code from reading C++ file 'worldmap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PirateAdventure/worldmap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'worldmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_worldmap_t {
    QByteArrayData data[9];
    char stringdata[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_worldmap_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_worldmap_t qt_meta_stringdata_worldmap = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 21),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 13),
QT_MOC_LITERAL(4, 46, 5),
QT_MOC_LITERAL(5, 52, 7),
QT_MOC_LITERAL(6, 60, 10),
QT_MOC_LITERAL(7, 71, 10),
QT_MOC_LITERAL(8, 82, 9)
    },
    "worldmap\0on_pushButton_clicked\0\0"
    "makeBeginning\0unPen\0unBrush\0makeMiddle\0"
    "makeEnding\0makeStore\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_worldmap[] = {

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
       1,    0,   39,    2, 0x08,
       3,    2,   40,    2, 0x08,
       6,    2,   45,    2, 0x08,
       7,    2,   50,    2, 0x08,
       8,    2,   55,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPen, QMetaType::QBrush,    4,    5,
    QMetaType::Void, QMetaType::QPen, QMetaType::QBrush,    4,    5,
    QMetaType::Void, QMetaType::QPen, QMetaType::QBrush,    4,    5,
    QMetaType::Void, QMetaType::QPen, QMetaType::QBrush,    4,    5,

       0        // eod
};

void worldmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        worldmap *_t = static_cast<worldmap *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->makeBeginning((*reinterpret_cast< QPen(*)>(_a[1])),(*reinterpret_cast< QBrush(*)>(_a[2]))); break;
        case 2: _t->makeMiddle((*reinterpret_cast< QPen(*)>(_a[1])),(*reinterpret_cast< QBrush(*)>(_a[2]))); break;
        case 3: _t->makeEnding((*reinterpret_cast< QPen(*)>(_a[1])),(*reinterpret_cast< QBrush(*)>(_a[2]))); break;
        case 4: _t->makeStore((*reinterpret_cast< QPen(*)>(_a[1])),(*reinterpret_cast< QBrush(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject worldmap::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_worldmap.data,
      qt_meta_data_worldmap,  qt_static_metacall, 0, 0}
};


const QMetaObject *worldmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *worldmap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_worldmap.stringdata))
        return static_cast<void*>(const_cast< worldmap*>(this));
    return QDialog::qt_metacast(_clname);
}

int worldmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
