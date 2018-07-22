/****************************************************************************
** Meta object code from reading C++ file 'qM3C2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/core/qM3C2/qM3C2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qM3C2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qM3C2Plugin_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qM3C2Plugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qM3C2Plugin_t qt_meta_stringdata_qM3C2Plugin = {
    {
QT_MOC_LITERAL(0, 0, 11) // "qM3C2Plugin"

    },
    "qM3C2Plugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qM3C2Plugin[] = {

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

void qM3C2Plugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject qM3C2Plugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qM3C2Plugin.data,
      qt_meta_data_qM3C2Plugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qM3C2Plugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qM3C2Plugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qM3C2Plugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccStdPluginInterface"))
        return static_cast< ccStdPluginInterface*>(this);
    if (!strcmp(_clname, "edf.rd.CloudCompare.ccStdPluginInterface/1.4"))
        return static_cast< ccStdPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int qM3C2Plugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'T',  0x04, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    '@',  0x04, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    ' ',  0x00, 'c',  'c',  'c',  'o',  'r',  'p', 
    '.',  'c',  'l',  'o',  'u',  'd',  'c',  'o', 
    'm',  'p',  'a',  'r',  'e',  '.',  'p',  'l', 
    'u',  'g',  'i',  'n',  '.',  'q',  'M',  '3', 
    'C',  '2',  0x00, 0x00, 0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0b, 0x00, 'q',  'M', 
    '3',  'C',  '2',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, ':',  '@',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x11, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0xb8, 0x03, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
    0x9c, 0x03, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'y',  'p',  'e',  0x00, 0x00,
    0x08, 0x00, 'S',  't',  'a',  'n',  'd',  'a', 
    'r',  'd',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x04, 0x00, 'c',  'o',  'r',  'e',  0x00, 0x00,
    0x9b, 0x07, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x0d, 0x00, 'M',  '3', 
    'C',  '2',  ' ',  'D',  'i',  's',  't',  'a', 
    'n',  'c',  'e',  0x00, 0x1b, 0x0b, 0x00, 0x00,
    0x04, 0x00, 'i',  'c',  'o',  'n',  0x00, 0x00,
    '+',  0x00, ':',  '/',  'C',  'C',  '/',  'p', 
    'l',  'u',  'g',  'i',  'n',  '/',  'q',  'M', 
    '3',  'C',  '2',  'P',  'l',  'u',  'g',  'i', 
    'n',  '/',  'i',  'm',  'a',  'g',  'e',  's', 
    '/',  'i',  'c',  'o',  'n',  'M',  '3',  'C', 
    '2',  '.',  'p',  'n',  'g',  0x00, 0x00, 0x00,
    0x9b, 0x13, 0x00, 0x00, 0x0b, 0x00, 'd',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, '2',  0x00, 'M',  'u', 
    'l',  't',  'i',  's',  'c',  'a',  'l',  'e', 
    ' ',  'M',  'o',  'd',  'e',  'l',  ' ',  't', 
    'o',  ' ',  'M',  'o',  'd',  'e',  'l',  ' ', 
    'C',  'l',  'o',  'u',  'd',  ' ',  'C',  'o', 
    'm',  'p',  'a',  'r',  'i',  's',  'o',  'n', 
    ' ',  '(',  'M',  '3',  'C',  '2',  ')',  '.', 
    0x14, 0x1c, 0x00, 0x00, 0x07, 0x00, 'a',  'u', 
    't',  'h',  'o',  'r',  's',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    'D',  0x00, 0x00, 0x00, '8',  0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x19, 0x00, 'D',  'i', 
    'm',  'i',  't',  'r',  'i',  ' ',  'L',  'a', 
    'g',  'u',  'e',  ' ',  '(',  'O',  'S',  'U', 
    'R',  '/',  'C',  'N',  'R',  'S',  ')',  0x00,
    0x0c, 0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x14, '\'', 0x00, 0x00, 0x0a, 0x00, 'r',  'e', 
    'f',  'e',  'r',  'e',  'n',  'c',  'e',  's', 
    'd',  0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    'X',  0x02, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'e', 
    'x',  't',  0x00, 0x00, '!',  0x00, 'D',  'i', 
    'm',  'i',  't',  'r',  'i',  ' ',  'L',  'a', 
    'g',  'u',  'e',  ',',  ' ',  'G',  'e',  'o', 
    's',  'c',  'i',  'e',  'n',  'c',  'e',  's', 
    ' ',  'R',  'e',  'n',  'n',  'e',  's',  0x00,
    0x1b, 0x09, 0x00, 0x00, 0x03, 0x00, 'u',  'r', 
    'l',  0x00, 0x00, 0x00, '@',  0x00, 'h',  't', 
    't',  'p',  's',  ':',  '/',  '/',  'g',  'e', 
    'o',  's',  'c',  'i',  'e',  'n',  'c',  'e', 
    's',  '.',  'u',  'n',  'i',  'v',  '-',  'r', 
    'e',  'n',  'n',  'e',  's',  '1',  '.',  'f', 
    'r',  '/',  'i',  'n',  't',  'e',  'r',  'l', 
    'o',  'c',  'u',  't',  'e',  'u',  'r',  's', 
    '/',  'd',  'i',  'm',  'i',  't',  'r',  'i', 
    '-',  'l',  'a',  'g',  'u',  'e',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    '8',  0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '0',  0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    0xdf, 0x00, '"',  'A',  'c',  'c',  'u',  'r', 
    'a',  't',  'e',  ' ',  '3',  'D',  ' ',  'c', 
    'o',  'm',  'p',  'a',  'r',  'i',  's',  'o', 
    'n',  ' ',  'o',  'f',  ' ',  'c',  'o',  'm', 
    'p',  'l',  'e',  'x',  ' ',  't',  'o',  'p', 
    'o',  'g',  'r',  'a',  'p',  'h',  'y',  ' ', 
    'w',  'i',  't',  'h',  ' ',  't',  'e',  'r', 
    'r',  'e',  's',  't',  'r',  'i',  'a',  'l', 
    ' ',  'l',  'a',  's',  'e',  'r',  ' ',  's', 
    'c',  'a',  'n',  'n',  'e',  'r',  ':',  0x0a,
    0x09, 0x09, 0x09, 'a',  'p',  'p',  'l',  'i', 
    'c',  'a',  't',  'i',  'o',  'n',  ' ',  't', 
    'o',  ' ',  't',  'h',  'e',  ' ',  'R',  'a', 
    'n',  'g',  'i',  't',  'i',  'k',  'e',  'i', 
    ' ',  'c',  'a',  'n',  'y',  'o',  'n',  ' ', 
    '(',  'N',  '-',  'Z',  ')',  '"',  ',',  ' ', 
    'L',  'a',  'g',  'u',  'e',  ',',  ' ',  'D', 
    '.',  ',',  ' ',  'B',  'r',  'o',  'd',  'u', 
    ',',  ' ',  'N',  '.',  ' ',  'a',  'n',  'd', 
    ' ',  'L',  'e',  'r',  'o',  'u',  'x',  ',', 
    ' ',  'J',  '.',  ',',  0x0a, 0x09, 0x09, 0x09,
    '2',  '0',  '1',  '3',  ',',  ' ',  'I',  'S', 
    'P',  'R',  'S',  ' ',  'j',  'o',  'u',  'r', 
    'n',  'a',  'l',  ' ',  'o',  'f',  ' ',  'P', 
    'h',  'o',  't',  'o',  'g',  'r',  'a',  'm', 
    'm',  'm',  'e',  't',  'r',  'y',  ' ',  'a', 
    'n',  'd',  ' ',  'R',  'e',  'm',  'o',  't', 
    'e',  ' ',  'S',  'e',  'n',  's',  'i',  'n', 
    'g',  0x00, 0x00, 0x00, 0x1b, '!',  0x00, 0x00,
    0x03, 0x00, 'u',  'r',  'l',  0x00, 0x00, 0x00,
    '#',  0x00, 'h',  't',  't',  'p',  's',  ':', 
    '/',  '/',  'a',  'r',  'x',  'i',  'v',  '.', 
    'o',  'r',  'g',  '/',  'p',  'd',  'f',  '/', 
    '1',  '3',  '0',  '2',  '.',  '1',  '1',  '8', 
    '3',  '.',  'p',  'd',  'f',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    'x',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    0x0d, 0x00, 'D',  'o',  'c',  'u',  'm',  'e', 
    'n',  't',  'a',  't',  'i',  'o',  'n',  0x00,
    0x9b, 0x06, 0x00, 0x00, 0x03, 0x00, 'u',  'r', 
    'l',  0x00, 0x00, 0x00, 'B',  0x00, 'h',  't', 
    't',  'p',  ':',  '/',  '/',  'w',  'w',  'w', 
    '.',  'c',  'l',  'o',  'u',  'd',  'c',  'o', 
    'm',  'p',  'a',  'r',  'e',  '.',  'o',  'r', 
    'g',  '/',  'd',  'o',  'c',  '/',  'w',  'i', 
    'k',  'i',  '/',  'i',  'n',  'd',  'e',  'x', 
    '.',  'p',  'h',  'p',  '?',  't',  'i',  't', 
    'l',  'e',  '=',  'M',  '3',  'C',  '2',  '_', 
    '(',  'p',  'l',  'u',  'g',  'i',  'n',  ')', 
    0x0c, 0x00, 0x00, 0x00, '(',  0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0x05, 0x14, 0x00, 0x00,
    0x05, ';',  0x00, 0x00, 0xd0, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    'L',  0x00, 0x00, 0x00, '0',  0x00, 0x00, 0x00,
    '(',  0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    'T',  0x04, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    '@',  0x04, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    ' ',  0x00, 'c',  'c',  'c',  'o',  'r',  'p', 
    '.',  'c',  'l',  'o',  'u',  'd',  'c',  'o', 
    'm',  'p',  'a',  'r',  'e',  '.',  'p',  'l', 
    'u',  'g',  'i',  'n',  '.',  'q',  'M',  '3', 
    'C',  '2',  0x00, 0x00, 0x95, 0x09, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xb8, 0x03, 0x00, 0x00,
    0x0f, 0x00, 0x00, 0x00, 0x9c, 0x03, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'y', 
    'p',  'e',  0x00, 0x00, 0x08, 0x00, 'S',  't', 
    'a',  'n',  'd',  'a',  'r',  'd',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x04, 0x00, 'c',  'o', 
    'r',  'e',  0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x0d, 0x00, 'M',  '3',  'C',  '2',  ' ',  'D', 
    'i',  's',  't',  'a',  'n',  'c',  'e',  0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x04, 0x00, 'i',  'c', 
    'o',  'n',  0x00, 0x00, '+',  0x00, ':',  '/', 
    'C',  'C',  '/',  'p',  'l',  'u',  'g',  'i', 
    'n',  '/',  'q',  'M',  '3',  'C',  '2',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  'i',  'm', 
    'a',  'g',  'e',  's',  '/',  'i',  'c',  'o', 
    'n',  'M',  '3',  'C',  '2',  '.',  'p',  'n', 
    'g',  0x00, 0x00, 0x00, 0x9b, 0x13, 0x00, 0x00,
    0x0b, 0x00, 'd',  'e',  's',  'c',  'r',  'i', 
    'p',  't',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    '2',  0x00, 'M',  'u',  'l',  't',  'i',  's', 
    'c',  'a',  'l',  'e',  ' ',  'M',  'o',  'd', 
    'e',  'l',  ' ',  't',  'o',  ' ',  'M',  'o', 
    'd',  'e',  'l',  ' ',  'C',  'l',  'o',  'u', 
    'd',  ' ',  'C',  'o',  'm',  'p',  'a',  'r', 
    'i',  's',  'o',  'n',  ' ',  '(',  'M',  '3', 
    'C',  '2',  ')',  '.',  0x14, 0x1c, 0x00, 0x00,
    0x07, 0x00, 'a',  'u',  't',  'h',  'o',  'r', 
    's',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x19, 0x00, 'D',  'i',  'm',  'i',  't',  'r', 
    'i',  ' ',  'L',  'a',  'g',  'u',  'e',  ' ', 
    '(',  'O',  'S',  'U',  'R',  '/',  'C',  'N', 
    'R',  'S',  ')',  0x00, 0x0c, 0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0x14, '\'', 0x00, 0x00,
    0x0a, 0x00, 'r',  'e',  'f',  'e',  'r',  'e', 
    'n',  'c',  'e',  's',  'd',  0x02, 0x00, 0x00,
    0x06, 0x00, 0x00, 0x00, 'X',  0x02, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    '!',  0x00, 'D',  'i',  'm',  'i',  't',  'r', 
    'i',  ' ',  'L',  'a',  'g',  'u',  'e',  ',', 
    ' ',  'G',  'e',  'o',  's',  'c',  'i',  'e', 
    'n',  'c',  'e',  's',  ' ',  'R',  'e',  'n', 
    'n',  'e',  's',  0x00, 0x1b, 0x09, 0x00, 0x00,
    0x03, 0x00, 'u',  'r',  'l',  0x00, 0x00, 0x00,
    '@',  0x00, 'h',  't',  't',  'p',  's',  ':', 
    '/',  '/',  'g',  'e',  'o',  's',  'c',  'i', 
    'e',  'n',  'c',  'e',  's',  '.',  'u',  'n', 
    'i',  'v',  '-',  'r',  'e',  'n',  'n',  'e', 
    's',  '1',  '.',  'f',  'r',  '/',  'i',  'n', 
    't',  'e',  'r',  'l',  'o',  'c',  'u',  't', 
    'e',  'u',  'r',  's',  '/',  'd',  'i',  'm', 
    'i',  't',  'r',  'i',  '-',  'l',  'a',  'g', 
    'u',  'e',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, '8',  0x01, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, '0',  0x01, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'e', 
    'x',  't',  0x00, 0x00, 0xdf, 0x00, '"',  'A', 
    'c',  'c',  'u',  'r',  'a',  't',  'e',  ' ', 
    '3',  'D',  ' ',  'c',  'o',  'm',  'p',  'a', 
    'r',  'i',  's',  'o',  'n',  ' ',  'o',  'f', 
    ' ',  'c',  'o',  'm',  'p',  'l',  'e',  'x', 
    ' ',  't',  'o',  'p',  'o',  'g',  'r',  'a', 
    'p',  'h',  'y',  ' ',  'w',  'i',  't',  'h', 
    ' ',  't',  'e',  'r',  'r',  'e',  's',  't', 
    'r',  'i',  'a',  'l',  ' ',  'l',  'a',  's', 
    'e',  'r',  ' ',  's',  'c',  'a',  'n',  'n', 
    'e',  'r',  ':',  0x0a, 0x09, 0x09, 0x09, 'a', 
    'p',  'p',  'l',  'i',  'c',  'a',  't',  'i', 
    'o',  'n',  ' ',  't',  'o',  ' ',  't',  'h', 
    'e',  ' ',  'R',  'a',  'n',  'g',  'i',  't', 
    'i',  'k',  'e',  'i',  ' ',  'c',  'a',  'n', 
    'y',  'o',  'n',  ' ',  '(',  'N',  '-',  'Z', 
    ')',  '"',  ',',  ' ',  'L',  'a',  'g',  'u', 
    'e',  ',',  ' ',  'D',  '.',  ',',  ' ',  'B', 
    'r',  'o',  'd',  'u',  ',',  ' ',  'N',  '.', 
    ' ',  'a',  'n',  'd',  ' ',  'L',  'e',  'r', 
    'o',  'u',  'x',  ',',  ' ',  'J',  '.',  ',', 
    0x0a, 0x09, 0x09, 0x09, '2',  '0',  '1',  '3', 
    ',',  ' ',  'I',  'S',  'P',  'R',  'S',  ' ', 
    'j',  'o',  'u',  'r',  'n',  'a',  'l',  ' ', 
    'o',  'f',  ' ',  'P',  'h',  'o',  't',  'o', 
    'g',  'r',  'a',  'm',  'm',  'm',  'e',  't', 
    'r',  'y',  ' ',  'a',  'n',  'd',  ' ',  'R', 
    'e',  'm',  'o',  't',  'e',  ' ',  'S',  'e', 
    'n',  's',  'i',  'n',  'g',  0x00, 0x00, 0x00,
    0x1b, '!',  0x00, 0x00, 0x03, 0x00, 'u',  'r', 
    'l',  0x00, 0x00, 0x00, '#',  0x00, 'h',  't', 
    't',  'p',  's',  ':',  '/',  '/',  'a',  'r', 
    'x',  'i',  'v',  '.',  'o',  'r',  'g',  '/', 
    'p',  'd',  'f',  '/',  '1',  '3',  '0',  '2', 
    '.',  '1',  '1',  '8',  '3',  '.',  'p',  'd', 
    'f',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0xfc, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'e', 
    'x',  't',  0x00, 0x00, 0x0d, 0x00, 'D',  'o', 
    'c',  'u',  'm',  'e',  'n',  't',  'a',  't', 
    'i',  'o',  'n',  0x00, 0x9b, 0x06, 0x00, 0x00,
    0x03, 0x00, 'u',  'r',  'l',  0x00, 0x00, 0x00,
    'B',  0x00, 'h',  't',  't',  'p',  ':',  '/', 
    '/',  'w',  'w',  'w',  '.',  'c',  'l',  'o', 
    'u',  'd',  'c',  'o',  'm',  'p',  'a',  'r', 
    'e',  '.',  'o',  'r',  'g',  '/',  'd',  'o', 
    'c',  '/',  'w',  'i',  'k',  'i',  '/',  'i', 
    'n',  'd',  'e',  'x',  '.',  'p',  'h',  'p', 
    '?',  't',  'i',  't',  'l',  'e',  '=',  'M', 
    '3',  'C',  '2',  '_',  '(',  'p',  'l',  'u', 
    'g',  'i',  'n',  ')',  0x0c, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x05, 0x14, 0x00, 0x00, 0x05, ';',  0x00, 0x00,
    0xd0, 0x00, 0x00, 0x00, '$',  0x00, 0x00, 0x00,
    0x88, 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, '(',  0x01, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9b, 0x82, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0b, 0x00, 'q',  'M', 
    '3',  'C',  '2',  'P',  'l',  'u',  'g',  'i', 
    'n',  0x00, 0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    ':',  '@',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, '<',  0x00, 0x00, 0x00,
    0x04, 0x04, 0x00, 0x00, '$',  0x04, 0x00, 0x00,
    '0',  0x04, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(qM3C2Plugin, qM3C2Plugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
