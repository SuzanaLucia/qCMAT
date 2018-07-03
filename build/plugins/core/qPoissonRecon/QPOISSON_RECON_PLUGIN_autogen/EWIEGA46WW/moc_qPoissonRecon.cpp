/****************************************************************************
** Meta object code from reading C++ file 'qPoissonRecon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/core/qPoissonRecon/qPoissonRecon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qPoissonRecon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qPoissonRecon_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qPoissonRecon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qPoissonRecon_t qt_meta_stringdata_qPoissonRecon = {
    {
QT_MOC_LITERAL(0, 0, 13), // "qPoissonRecon"
QT_MOC_LITERAL(1, 14, 8), // "doAction"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "qPoissonRecon\0doAction\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qPoissonRecon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void qPoissonRecon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qPoissonRecon *_t = static_cast<qPoissonRecon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qPoissonRecon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qPoissonRecon.data,
      qt_meta_data_qPoissonRecon,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qPoissonRecon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qPoissonRecon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qPoissonRecon.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccStdPluginInterface"))
        return static_cast< ccStdPluginInterface*>(this);
    if (!strcmp(_clname, "edf.rd.CloudCompare.ccStdPluginInterface/1.4"))
        return static_cast< ccStdPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int qPoissonRecon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x10, 0x04, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xfc, 0x03, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '(',  0x00, 'c',  'c',  'c',  'o',  'r',  'p', 
    '.',  'c',  'l',  'o',  'u',  'd',  'c',  'o', 
    'm',  'p',  'a',  'r',  'e',  '.',  'p',  'l', 
    'u',  'g',  'i',  'n',  '.',  'q',  'P',  'o', 
    'i',  's',  's',  'o',  'n',  'R',  'e',  'c', 
    'o',  'n',  0x00, 0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0d, 0x00, 'q',  'P', 
    'o',  'i',  's',  's',  'o',  'n',  'R',  'e', 
    'c',  'o',  'n',  0x00, ':',  '@',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x12, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    'l',  0x03, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    'L',  0x03, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'y',  'p',  'e',  0x00, 0x00,
    0x08, 0x00, 'S',  't',  'a',  'n',  'd',  'a', 
    'r',  'd',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x04, 0x00, 'c',  'o',  'r',  'e',  0x00, 0x00,
    0x9b, 0x07, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x0c, 0x00, 'P',  'o', 
    'i',  's',  's',  'o',  'n',  'R',  'e',  'c', 
    'o',  'n',  0x00, 0x00, 0x1b, 0x0b, 0x00, 0x00,
    0x04, 0x00, 'i',  'c',  'o',  'n',  0x00, 0x00,
    '+',  0x00, ':',  '/',  'C',  'C',  '/',  'p', 
    'l',  'u',  'g',  'i',  'n',  '/',  'q',  'P', 
    'o',  'i',  's',  's',  'o',  'n',  'R',  'e', 
    'c',  'o',  'n',  '/',  'q',  'P',  'o',  'i', 
    's',  's',  'o',  'n',  'R',  'e',  'c',  'o', 
    'n',  '.',  'p',  'n',  'g',  0x00, 0x00, 0x00,
    0x9b, 0x13, 0x00, 0x00, 0x0b, 0x00, 'd',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x1f, 0x00, 'P',  'o', 
    'i',  's',  's',  'o',  'n',  ' ',  'S',  'u', 
    'r',  'f',  'a',  'c',  'e',  ' ',  'R',  'e', 
    'c',  'o',  'n',  's',  't',  'r',  'u',  'c', 
    't',  'i',  'o',  'n',  '.',  0x00, 0x00, 0x00,
    0x14, 0x1a, 0x00, 0x00, 0x07, 0x00, 'a',  'u', 
    't',  'h',  'o',  'r',  's',  0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, '\'', 0x00, 'M',  'i', 
    's',  'h',  'a',  ' ',  'K',  'a',  'z',  'h', 
    'd',  'a',  'n',  ',',  ' ',  'J',  'o',  'h', 
    'n',  's',  ' ',  'H',  'o',  'p',  'k',  'i', 
    'n',  's',  ' ',  'U',  'n',  'i',  'v',  'e', 
    'r',  's',  'i',  't',  'y',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '\\', 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x18, 0x00, 'D',  'a', 
    'n',  'i',  'e',  'l',  ' ',  'G',  'i',  'r', 
    'a',  'r',  'd',  'e',  'a',  'u',  '-',  'M', 
    'o',  'n',  't',  'a',  'u',  't',  0x00, 0x00,
    0x1b, 0x08, 0x00, 0x00, 0x05, 0x00, 'e',  'm', 
    'a',  'i',  'l',  0x00, 0x1a, 0x00, 'd',  'a', 
    'n',  'i',  'e',  'l',  '.',  'g',  'i',  'r', 
    'a',  'r',  'd',  'e',  'a',  'u',  '@',  'g', 
    'm',  'a',  'i',  'l',  '.',  'c',  'o',  'm', 
    '4',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0x85, 0x0a, 0x00, 0x00,
    0x94, '4',  0x00, 0x00, 0x0b, 0x00, 'm',  'a', 
    'i',  'n',  't',  'a',  'i',  'n',  'e',  'r', 
    's',  0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 'p',  0x00, 0x00, 0x00,
    'd',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x18, 0x00, 'D',  'a',  'n',  'i',  'e',  'l', 
    ' ',  'G',  'i',  'r',  'a',  'r',  'd',  'e', 
    'a',  'u',  '-',  'M',  'o',  'n',  't',  'a', 
    'u',  't',  0x00, 0x00, 0x1b, 0x08, 0x00, 0x00,
    0x05, 0x00, 'e',  'm',  'a',  'i',  'l',  0x00,
    0x1a, 0x00, 'd',  'a',  'n',  'i',  'e',  'l', 
    '.',  'g',  'i',  'r',  'a',  'r',  'd',  'e', 
    'a',  'u',  '@',  'g',  'm',  'a',  'i',  'l', 
    '.',  'c',  'o',  'm',  '4',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x14, 'E',  0x00, 0x00, 0x0a, 0x00, 'r',  'e', 
    'f',  'e',  'r',  'e',  'n',  'c',  'e',  's', 
    '$',  0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x1c, 0x01, 0x00, 0x00, 't',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'e', 
    'x',  't',  0x00, 0x00, 0x14, 0x00, 'P',  'o', 
    'i',  's',  's',  'o',  'n',  'R',  'e',  'c', 
    'o',  'n',  ' ',  'l',  'i',  'b',  'r',  'a', 
    'r',  'y',  0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x03, 0x00, 'u',  'r',  'l',  0x00, 0x00, 0x00,
    '.',  0x00, 'h',  't',  't',  'p',  ':',  '/', 
    '/',  'w',  'w',  'w',  '.',  'c',  's',  '.', 
    'j',  'h',  'u',  '.',  'e',  'd',  'u',  '/', 
    '~',  'm',  'i',  's',  'h',  'a',  '/',  'C', 
    'o',  'd',  'e',  '/',  'P',  'o',  'i',  's', 
    's',  'o',  'n',  'R',  'e',  'c',  'o',  'n', 
    0x0c, 0x00, 0x00, 0x00, '0',  0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    0x0d, 0x00, 'D',  'o',  'c',  'u',  'm',  'e', 
    'n',  't',  'a',  't',  'i',  'o',  'n',  0x00,
    0x9b, 0x06, 0x00, 0x00, 0x03, 0x00, 'u',  'r', 
    'l',  0x00, 0x00, 0x00, '\\', 0x00, 'h',  't', 
    't',  'p',  ':',  '/',  '/',  'w',  'w',  'w', 
    '.',  'c',  'l',  'o',  'u',  'd',  'c',  'o', 
    'm',  'p',  'a',  'r',  'e',  '.',  'o',  'r', 
    'g',  '/',  'd',  'o',  'c',  '/',  'w',  'i', 
    'k',  'i',  '/',  'i',  'n',  'd',  'e',  'x', 
    '.',  'p',  'h',  'p',  '?',  't',  'i',  't', 
    'l',  'e',  '=',  'P',  'o',  'i',  's',  's', 
    'o',  'n',  '_',  'S',  'u',  'r',  'f',  'a', 
    'c',  'e',  '_',  'R',  'e',  'c',  'o',  'n', 
    's',  't',  'r',  'u',  'c',  't',  'i',  'o', 
    'n',  '_',  '(',  'p',  'l',  'u',  'g',  'i', 
    'n',  ')',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x05, 0x10, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    'L',  0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    't',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x10, 0x04, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xfc, 0x03, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '(',  0x00, 'c',  'c',  'c',  'o',  'r',  'p', 
    '.',  'c',  'l',  'o',  'u',  'd',  'c',  'o', 
    'm',  'p',  'a',  'r',  'e',  '.',  'p',  'l', 
    'u',  'g',  'i',  'n',  '.',  'q',  'P',  'o', 
    'i',  's',  's',  'o',  'n',  'R',  'e',  'c', 
    'o',  'n',  0x00, 0x00, 0x95, 0x0a, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 'l',  0x03, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 'L',  0x03, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'y', 
    'p',  'e',  0x00, 0x00, 0x08, 0x00, 'S',  't', 
    'a',  'n',  'd',  'a',  'r',  'd',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x04, 0x00, 'c',  'o', 
    'r',  'e',  0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x0c, 0x00, 'P',  'o',  'i',  's',  's',  'o', 
    'n',  'R',  'e',  'c',  'o',  'n',  0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x04, 0x00, 'i',  'c', 
    'o',  'n',  0x00, 0x00, '+',  0x00, ':',  '/', 
    'C',  'C',  '/',  'p',  'l',  'u',  'g',  'i', 
    'n',  '/',  'q',  'P',  'o',  'i',  's',  's', 
    'o',  'n',  'R',  'e',  'c',  'o',  'n',  '/', 
    'q',  'P',  'o',  'i',  's',  's',  'o',  'n', 
    'R',  'e',  'c',  'o',  'n',  '.',  'p',  'n', 
    'g',  0x00, 0x00, 0x00, 0x9b, 0x13, 0x00, 0x00,
    0x0b, 0x00, 'd',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x1f, 0x00, 'P',  'o',  'i',  's',  's',  'o', 
    'n',  ' ',  'S',  'u',  'r',  'f',  'a',  'c', 
    'e',  ' ',  'R',  'e',  'c',  'o',  'n',  's', 
    't',  'r',  'u',  'c',  't',  'i',  'o',  'n', 
    '.',  0x00, 0x00, 0x00, 0x14, 0x1a, 0x00, 0x00,
    0x07, 0x00, 'a',  'u',  't',  'h',  'o',  'r', 
    's',  0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    '\'', 0x00, 'M',  'i',  's',  'h',  'a',  ' ', 
    'K',  'a',  'z',  'h',  'd',  'a',  'n',  ',', 
    ' ',  'J',  'o',  'h',  'n',  's',  ' ',  'H', 
    'o',  'p',  'k',  'i',  'n',  's',  ' ',  'U', 
    'n',  'i',  'v',  'e',  'r',  's',  'i',  't', 
    'y',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'd',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x18, 0x00, 'D',  'a',  'n',  'i',  'e',  'l', 
    ' ',  'G',  'i',  'r',  'a',  'r',  'd',  'e', 
    'a',  'u',  '-',  'M',  'o',  'n',  't',  'a', 
    'u',  't',  0x00, 0x00, 0x1b, 0x08, 0x00, 0x00,
    0x05, 0x00, 'e',  'm',  'a',  'i',  'l',  0x00,
    0x1a, 0x00, 'd',  'a',  'n',  'i',  'e',  'l', 
    '.',  'g',  'i',  'r',  'a',  'r',  'd',  'e', 
    'a',  'u',  '@',  'g',  'm',  'a',  'i',  'l', 
    '.',  'c',  'o',  'm',  '4',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x85, 0x0a, 0x00, 0x00, 0x94, '4',  0x00, 0x00,
    0x0b, 0x00, 'm',  'a',  'i',  'n',  't',  'a', 
    'i',  'n',  'e',  'r',  's',  0x00, 0x00, 0x00,
    't',  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '\\', 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x18, 0x00, 'D',  'a', 
    'n',  'i',  'e',  'l',  ' ',  'G',  'i',  'r', 
    'a',  'r',  'd',  'e',  'a',  'u',  '-',  'M', 
    'o',  'n',  't',  'a',  'u',  't',  0x00, 0x00,
    0x1b, 0x08, 0x00, 0x00, 0x05, 0x00, 'e',  'm', 
    'a',  'i',  'l',  0x00, 0x1a, 0x00, 'd',  'a', 
    'n',  'i',  'e',  'l',  '.',  'g',  'i',  'r', 
    'a',  'r',  'd',  'e',  'a',  'u',  '@',  'g', 
    'm',  'a',  'i',  'l',  '.',  'c',  'o',  'm', 
    '4',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0x14, 'E',  0x00, 0x00,
    0x0a, 0x00, 'r',  'e',  'f',  'e',  'r',  'e', 
    'n',  'c',  'e',  's',  '$',  0x01, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00,
    't',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    'l',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    0x14, 0x00, 'P',  'o',  'i',  's',  's',  'o', 
    'n',  'R',  'e',  'c',  'o',  'n',  ' ',  'l', 
    'i',  'b',  'r',  'a',  'r',  'y',  0x00, 0x00,
    0x9b, 0x07, 0x00, 0x00, 0x03, 0x00, 'u',  'r', 
    'l',  0x00, 0x00, 0x00, '.',  0x00, 'h',  't', 
    't',  'p',  ':',  '/',  '/',  'w',  'w',  'w', 
    '.',  'c',  's',  '.',  'j',  'h',  'u',  '.', 
    'e',  'd',  'u',  '/',  '~',  'm',  'i',  's', 
    'h',  'a',  '/',  'C',  'o',  'd',  'e',  '/', 
    'P',  'o',  'i',  's',  's',  'o',  'n',  'R', 
    'e',  'c',  'o',  'n',  0x0c, 0x00, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'e', 
    'x',  't',  0x00, 0x00, 0x0d, 0x00, 'D',  'o', 
    'c',  'u',  'm',  'e',  'n',  't',  'a',  't', 
    'i',  'o',  'n',  0x00, 0x9b, 0x06, 0x00, 0x00,
    0x03, 0x00, 'u',  'r',  'l',  0x00, 0x00, 0x00,
    '\\', 0x00, 'h',  't',  't',  'p',  ':',  '/', 
    '/',  'w',  'w',  'w',  '.',  'c',  'l',  'o', 
    'u',  'd',  'c',  'o',  'm',  'p',  'a',  'r', 
    'e',  '.',  'o',  'r',  'g',  '/',  'd',  'o', 
    'c',  '/',  'w',  'i',  'k',  'i',  '/',  'i', 
    'n',  'd',  'e',  'x',  '.',  'p',  'h',  'p', 
    '?',  't',  'i',  't',  'l',  'e',  '=',  'P', 
    'o',  'i',  's',  's',  'o',  'n',  '_',  'S', 
    'u',  'r',  'f',  'a',  'c',  'e',  '_',  'R', 
    'e',  'c',  'o',  'n',  's',  't',  'r',  'u', 
    'c',  't',  'i',  'o',  'n',  '_',  '(',  'p', 
    'l',  'u',  'g',  'i',  'n',  ')',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '(',  0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0x05, 0x10, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00, '$',  0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00,
    0x90, 0x01, 0x00, 0x00, '0',  0x00, 0x00, 0x00,
    0x18, 0x02, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x1b, 'z',  0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0d, 0x00, 'q',  'P',  'o',  'i',  's',  's', 
    'o',  'n',  'R',  'e',  'c',  'o',  'n',  0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  '@',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00,
    0xe0, 0x03, 0x00, 0x00, 0xec, 0x03, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(qPoissonRecon, qPoissonRecon)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
