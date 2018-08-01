/****************************************************************************
** Meta object code from reading C++ file 'ccDisplayShoreline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/qCMAT/src/ccDisplayShoreline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccDisplayShoreline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccDisplayShoreline_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccDisplayShoreline_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccDisplayShoreline_t qt_meta_stringdata_ccDisplayShoreline = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ccDisplayShoreline"
QT_MOC_LITERAL(1, 19, 12), // "closeDisplay"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "save2Dplot"
QT_MOC_LITERAL(4, 44, 17) // "extractShorelines"

    },
    "ccDisplayShoreline\0closeDisplay\0\0"
    "save2Dplot\0extractShorelines"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccDisplayShoreline[] = {

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
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ccDisplayShoreline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccDisplayShoreline *_t = static_cast<ccDisplayShoreline *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeDisplay(); break;
        case 1: _t->save2Dplot(); break;
        case 2: _t->extractShorelines(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ccDisplayShoreline::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccDisplayShoreline.data,
      qt_meta_data_ccDisplayShoreline,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ccDisplayShoreline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccDisplayShoreline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ccDisplayShoreline.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::displayShoreline"))
        return static_cast< Ui::displayShoreline*>(this);
    return QDialog::qt_metacast(_clname);
}

int ccDisplayShoreline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
