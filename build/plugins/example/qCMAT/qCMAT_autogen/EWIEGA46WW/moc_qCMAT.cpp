/****************************************************************************
** Meta object code from reading C++ file 'qCMAT.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/example/qCMAT/qCMAT.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qCMAT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExamplePlugin_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExamplePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExamplePlugin_t qt_meta_stringdata_ExamplePlugin = {
    {
QT_MOC_LITERAL(0, 0, 13) // "ExamplePlugin"

    },
    "ExamplePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExamplePlugin[] = {

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

void ExamplePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExamplePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExamplePlugin.data,
      qt_meta_data_ExamplePlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ExamplePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExamplePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExamplePlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccStdPluginInterface"))
        return static_cast< ccStdPluginInterface*>(this);
    if (!strcmp(_clname, "edf.rd.CloudCompare.ccStdPluginInterface/1.4"))
        return static_cast< ccStdPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int ExamplePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x94, 0x03, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x80, 0x03, 0x00, 0x00, 0x13, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 0x00, 0x00, 'c',  0x00, 'c',  0x00,
    'c',  0x00, 'o',  0x00, 'r',  0x00, 'p',  0x00,
    '.',  0x00, 'c',  0x00, 'l',  0x00, 'o',  0x00,
    'u',  0x00, 'd',  0x00, 'c',  0x00, 'o',  0x00,
    'm',  0x00, 'p',  0x00, 'a',  0x00, 'r',  0x00,
    'e',  0x00, '.',  0x00, 'p',  0x00, 'l',  0x00,
    'u',  0x00, 'g',  0x00, 'i',  0x00, 'n',  0x00,
    '.',  0x00, 'E',  0x00, 'x',  0x00, 'a',  0x00,
    'm',  0x00, 'p',  0x00, 'l',  0x00, 'e',  0x00,
    0x1b, 0x0e, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0d, 0x00, 'E',  'x',  'a',  'm',  'p',  'l', 
    'e',  'P',  'l',  'u',  'g',  'i',  'n',  0x00,
    0x1a, '`',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x15, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xd4, 0x02, 0x00, 0x00,
    0x0f, 0x00, 0x00, 0x00, 0xb8, 0x02, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'y', 
    'p',  'e',  0x00, 0x00, 0x08, 0x00, 'S',  't', 
    'a',  'n',  'd',  'a',  'r',  'd',  0x00, 0x00,
    0x1b, 0x06, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, '*',  0x00, 'C',  'M', 
    'A',  'T',  ' ',  '(',  'C',  'o',  'a',  's', 
    't',  'a',  'l',  ' ',  'M',  'a',  'n',  'a', 
    'g',  'e',  'm',  'e',  'n',  't',  ' ',  'A', 
    'n',  'a',  'l',  'y',  's',  'i',  's',  ' ', 
    'T',  'o',  'o',  'l',  'b',  'o',  'x',  ')', 
    0x1b, 0x0d, 0x00, 0x00, 0x04, 0x00, 'i',  'c', 
    'o',  'n',  0x00, 0x00, 0x11, 0x00, ':',  '/', 
    'i',  'm',  'a',  'g',  'e',  's',  '/',  'i', 
    'c',  'o',  'n',  '.',  'p',  'n',  'g',  0x00,
    0x1b, 0x12, 0x00, 0x00, 0x0b, 0x00, 'd',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 'h',  0x00, 'A',  ' ', 
    'F',  'O',  'S',  'S',  ' ',  'P',  'l',  'u', 
    'g',  '-',  'i',  'n',  ' ',  'f',  'o',  'r', 
    ' ',  'C',  'l',  'o',  'u',  'd',  'C',  'o', 
    'm',  'p',  'a',  'r',  'e',  ' ',  't',  'o', 
    ' ',  'a',  's',  's',  'i',  's',  't',  ' ', 
    'i',  'n',  ' ',  't',  'h',  'e',  ' ',  'a', 
    'n',  'a',  'l',  'y',  's',  'i',  's',  ',', 
    ' ',  'p',  'r',  'o',  'c',  'e',  's',  's', 
    'i',  'n',  'g',  ' ',  'a',  'n',  'd',  ' ', 
    'v',  'i',  's',  'u',  'a',  'l',  'i',  's', 
    'a',  't',  'i',  'o',  'n',  ' ',  'o',  'f', 
    ' ',  'p',  'o',  'i',  'n',  't',  ' ',  'c', 
    'l',  'o',  'u',  'd',  's',  '.',  0x00, 0x00,
    0x94, '!',  0x00, 0x00, 0x07, 0x00, 'a',  'u', 
    't',  'h',  'o',  'r',  's',  0x00, 0x00, 0x00,
    0xc8, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 'P',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x0d, 0x00, 'L',  'i', 
    'a',  'm',  ' ',  'O',  '\'', 'H',  'a',  'n', 
    'l',  'o',  'n',  0x00, 0x9b, 0x06, 0x00, 0x00,
    0x05, 0x00, 'e',  'm',  'a',  'i',  'l',  0x00,
    0x19, 0x00, 'l',  '.',  'o',  'h',  'a',  'n', 
    'l',  'o',  'n',  '@',  'l',  'a',  'n',  'c', 
    'a',  's',  't',  'e',  'r',  '.',  'a',  'c', 
    '.',  'u',  'k',  0x00, '(',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '\\', 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 'T',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x12, 0x00, 'A',  'r', 
    't',  'h',  'u',  'r',  '-',  'L',  'o',  'u', 
    'i',  's',  ' ',  'H',  'e',  'a',  't',  'h', 
    0x1b, 0x07, 0x00, 0x00, 0x05, 0x00, 'e',  'm', 
    'a',  'i',  'l',  0x00, 0x19, 0x00, 'a',  '.', 
    'h',  'e',  'a',  't',  'h',  '.',  '1',  '7', 
    '@',  'a',  'b',  'e',  'r',  'd',  'e',  'e', 
    'n',  '.',  'a',  'c',  '.',  'u',  'k',  0x00,
    ',',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0x85, 0x0c, 0x00, 0x00,
    0x14, '=',  0x00, 0x00, 0x0b, 0x00, 'm',  'a', 
    'i',  'n',  't',  'a',  'i',  'n',  'e',  'r', 
    's',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 'T',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '@',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x03, 0x00, 'T',  'B',  'D',  0x00, 0x00, 0x00,
    0x9b, 0x05, 0x00, 0x00, 0x05, 0x00, 'e',  'm', 
    'a',  'i',  'l',  0x00, 0x11, 0x00, 'e',  'x', 
    'a',  'm',  'p',  'l',  'e',  '@',  'g',  'm', 
    'a',  'i',  'l',  '.',  'c',  'o',  'm',  0x00,
    ' ',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0x14, 'J',  0x00, 0x00,
    0x0a, 0x00, 'r',  'e',  'f',  'e',  'r',  'e', 
    'n',  'c',  'e',  's',  'h',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    'P',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    0x0c, 0x00, 'C',  'l',  'o',  'u',  'd',  'C', 
    'o',  'm',  'p',  'a',  'r',  'e',  0x00, 0x00,
    0x9b, 0x06, 0x00, 0x00, 0x03, 0x00, 'u',  'r', 
    'l',  0x00, 0x00, 0x00, 0x18, 0x00, 'h',  't', 
    't',  'p',  ':',  '/',  '/',  'c',  'l',  'o', 
    'u',  'd',  'c',  'o',  'm',  'p',  'a',  'r', 
    'e',  '.',  'o',  'r',  'g',  '/',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '(',  0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, '\\', 0x00, 0x00, 0x00,
    0xd4, 0x01, 0x00, 0x00, '$',  0x00, 0x00, 0x00,
    '@',  0x02, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x94, 0x03, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x80, 0x03, 0x00, 0x00, 0x13, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '"',  0x00, 0x00, 0x00, 'c',  0x00, 'c',  0x00,
    'c',  0x00, 'o',  0x00, 'r',  0x00, 'p',  0x00,
    '.',  0x00, 'c',  0x00, 'l',  0x00, 'o',  0x00,
    'u',  0x00, 'd',  0x00, 'c',  0x00, 'o',  0x00,
    'm',  0x00, 'p',  0x00, 'a',  0x00, 'r',  0x00,
    'e',  0x00, '.',  0x00, 'p',  0x00, 'l',  0x00,
    'u',  0x00, 'g',  0x00, 'i',  0x00, 'n',  0x00,
    '.',  0x00, 'E',  0x00, 'x',  0x00, 'a',  0x00,
    'm',  0x00, 'p',  0x00, 'l',  0x00, 'e',  0x00,
    0x15, 0x0e, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0xd4, 0x02, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
    0xb8, 0x02, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'y',  'p',  'e',  0x00, 0x00,
    0x08, 0x00, 'S',  't',  'a',  'n',  'd',  'a', 
    'r',  'd',  0x00, 0x00, 0x1b, 0x06, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    '*',  0x00, 'C',  'M',  'A',  'T',  ' ',  '(', 
    'C',  'o',  'a',  's',  't',  'a',  'l',  ' ', 
    'M',  'a',  'n',  'a',  'g',  'e',  'm',  'e', 
    'n',  't',  ' ',  'A',  'n',  'a',  'l',  'y', 
    's',  'i',  's',  ' ',  'T',  'o',  'o',  'l', 
    'b',  'o',  'x',  ')',  0x1b, 0x0d, 0x00, 0x00,
    0x04, 0x00, 'i',  'c',  'o',  'n',  0x00, 0x00,
    0x11, 0x00, ':',  '/',  'i',  'm',  'a',  'g', 
    'e',  's',  '/',  'i',  'c',  'o',  'n',  '.', 
    'p',  'n',  'g',  0x00, 0x1b, 0x12, 0x00, 0x00,
    0x0b, 0x00, 'd',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    'h',  0x00, 'A',  ' ',  'F',  'O',  'S',  'S', 
    ' ',  'P',  'l',  'u',  'g',  '-',  'i',  'n', 
    ' ',  'f',  'o',  'r',  ' ',  'C',  'l',  'o', 
    'u',  'd',  'C',  'o',  'm',  'p',  'a',  'r', 
    'e',  ' ',  't',  'o',  ' ',  'a',  's',  's', 
    'i',  's',  't',  ' ',  'i',  'n',  ' ',  't', 
    'h',  'e',  ' ',  'a',  'n',  'a',  'l',  'y', 
    's',  'i',  's',  ',',  ' ',  'p',  'r',  'o', 
    'c',  'e',  's',  's',  'i',  'n',  'g',  ' ', 
    'a',  'n',  'd',  ' ',  'v',  'i',  's',  'u', 
    'a',  'l',  'i',  's',  'a',  't',  'i',  'o', 
    'n',  ' ',  'o',  'f',  ' ',  'p',  'o',  'i', 
    'n',  't',  ' ',  'c',  'l',  'o',  'u',  'd', 
    's',  '.',  0x00, 0x00, 0x94, '!',  0x00, 0x00,
    0x07, 0x00, 'a',  'u',  't',  'h',  'o',  'r', 
    's',  0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    'P',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x0d, 0x00, 'L',  'i',  'a',  'm',  ' ',  'O', 
    '\'', 'H',  'a',  'n',  'l',  'o',  'n',  0x00,
    0x9b, 0x06, 0x00, 0x00, 0x05, 0x00, 'e',  'm', 
    'a',  'i',  'l',  0x00, 0x19, 0x00, 'l',  '.', 
    'o',  'h',  'a',  'n',  'l',  'o',  'n',  '@', 
    'l',  'a',  'n',  'c',  'a',  's',  't',  'e', 
    'r',  '.',  'a',  'c',  '.',  'u',  'k',  0x00,
    '(',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    'T',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x12, 0x00, 'A',  'r',  't',  'h',  'u',  'r', 
    '-',  'L',  'o',  'u',  'i',  's',  ' ',  'H', 
    'e',  'a',  't',  'h',  0x1b, 0x07, 0x00, 0x00,
    0x05, 0x00, 'e',  'm',  'a',  'i',  'l',  0x00,
    0x19, 0x00, 'a',  '.',  'h',  'e',  'a',  't', 
    'h',  '.',  '1',  '7',  '@',  'a',  'b',  'e', 
    'r',  'd',  'e',  'e',  'n',  '.',  'a',  'c', 
    '.',  'u',  'k',  0x00, ',',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x85, 0x0c, 0x00, 0x00, 0x14, '=',  0x00, 0x00,
    0x0b, 0x00, 'm',  'a',  'i',  'n',  't',  'a', 
    'i',  'n',  'e',  'r',  's',  0x00, 0x00, 0x00,
    'X',  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    'T',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '@',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x03, 0x00, 'T',  'B', 
    'D',  0x00, 0x00, 0x00, 0x9b, 0x05, 0x00, 0x00,
    0x05, 0x00, 'e',  'm',  'a',  'i',  'l',  0x00,
    0x11, 0x00, 'e',  'x',  'a',  'm',  'p',  'l', 
    'e',  '@',  'g',  'm',  'a',  'i',  'l',  '.', 
    'c',  'o',  'm',  0x00, ' ',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x14, 'J',  0x00, 0x00, 0x0a, 0x00, 'r',  'e', 
    'f',  'e',  'r',  'e',  'n',  'c',  'e',  's', 
    'h',  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    'd',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 'P',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'e', 
    'x',  't',  0x00, 0x00, 0x0c, 0x00, 'C',  'l', 
    'o',  'u',  'd',  'C',  'o',  'm',  'p',  'a', 
    'r',  'e',  0x00, 0x00, 0x9b, 0x06, 0x00, 0x00,
    0x03, 0x00, 'u',  'r',  'l',  0x00, 0x00, 0x00,
    0x18, 0x00, 'h',  't',  't',  'p',  ':',  '/', 
    '/',  'c',  'l',  'o',  'u',  'd',  'c',  'o', 
    'm',  'p',  'a',  'r',  'e',  '.',  'o',  'r', 
    'g',  '/',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0xfc, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, 0xd4, 0x01, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, '@',  0x02, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9b, 'j',  0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0d, 0x00, 'E',  'x', 
    'a',  'm',  'p',  'l',  'e',  'P',  'l',  'u', 
    'g',  'i',  'n',  0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, '`',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '`',  0x00, 0x00, 0x00,
    'D',  0x03, 0x00, 0x00, 'd',  0x03, 0x00, 0x00,
    'p',  0x03, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(ExamplePlugin, ExamplePlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
