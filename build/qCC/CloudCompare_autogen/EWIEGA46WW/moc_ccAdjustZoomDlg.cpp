/****************************************************************************
** Meta object code from reading C++ file 'ccAdjustZoomDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../git-src/trunk/qCC/ccAdjustZoomDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccAdjustZoomDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccAdjustZoomDlg_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccAdjustZoomDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccAdjustZoomDlg_t qt_meta_stringdata_ccAdjustZoomDlg = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ccAdjustZoomDlg"
QT_MOC_LITERAL(1, 16, 13), // "onZoomChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "onPixelSizeChanged"
QT_MOC_LITERAL(4, 50, 19) // "onPixelCountChanged"

    },
    "ccAdjustZoomDlg\0onZoomChanged\0\0"
    "onPixelSizeChanged\0onPixelCountChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccAdjustZoomDlg[] = {

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
       1,    1,   29,    2, 0x09 /* Protected */,
       3,    1,   32,    2, 0x09 /* Protected */,
       4,    1,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ccAdjustZoomDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccAdjustZoomDlg *_t = static_cast<ccAdjustZoomDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onZoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onPixelSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onPixelCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ccAdjustZoomDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccAdjustZoomDlg.data,
      qt_meta_data_ccAdjustZoomDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ccAdjustZoomDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccAdjustZoomDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ccAdjustZoomDlg.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::AdjustZoomDialog"))
        return static_cast< Ui::AdjustZoomDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int ccAdjustZoomDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
