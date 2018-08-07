/****************************************************************************
** Meta object code from reading C++ file 'ccCompassDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../plugins/core/qCompass/src/ccCompassDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccCompassDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccCompassDlg_t {
    QByteArrayData data[11];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccCompassDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccCompassDlg_t qt_meta_stringdata_ccCompassDlg = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ccCompassDlg"
QT_MOC_LITERAL(1, 13, 19), // "onShortcutTriggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "setDarkCost"
QT_MOC_LITERAL(4, 46, 12), // "setLightCost"
QT_MOC_LITERAL(5, 59, 10), // "setRGBCost"
QT_MOC_LITERAL(6, 70, 11), // "setGradCost"
QT_MOC_LITERAL(7, 82, 12), // "setCurveCost"
QT_MOC_LITERAL(8, 95, 11), // "setDistCost"
QT_MOC_LITERAL(9, 107, 13), // "setScalarCost"
QT_MOC_LITERAL(10, 121, 16) // "setInvScalarCost"

    },
    "ccCompassDlg\0onShortcutTriggered\0\0"
    "setDarkCost\0setLightCost\0setRGBCost\0"
    "setGradCost\0setCurveCost\0setDistCost\0"
    "setScalarCost\0setInvScalarCost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccCompassDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x09 /* Protected */,
       3,    0,   62,    2, 0x09 /* Protected */,
       4,    0,   63,    2, 0x09 /* Protected */,
       5,    0,   64,    2, 0x09 /* Protected */,
       6,    0,   65,    2, 0x09 /* Protected */,
       7,    0,   66,    2, 0x09 /* Protected */,
       8,    0,   67,    2, 0x09 /* Protected */,
       9,    0,   68,    2, 0x09 /* Protected */,
      10,    0,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ccCompassDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccCompassDlg *_t = static_cast<ccCompassDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onShortcutTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setDarkCost(); break;
        case 2: _t->setLightCost(); break;
        case 3: _t->setRGBCost(); break;
        case 4: _t->setGradCost(); break;
        case 5: _t->setCurveCost(); break;
        case 6: _t->setDistCost(); break;
        case 7: _t->setScalarCost(); break;
        case 8: _t->setInvScalarCost(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ccCompassDlg::staticMetaObject = {
    { &ccOverlayDialog::staticMetaObject, qt_meta_stringdata_ccCompassDlg.data,
      qt_meta_data_ccCompassDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ccCompassDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccCompassDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ccCompassDlg.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::compassDlg"))
        return static_cast< Ui::compassDlg*>(this);
    return ccOverlayDialog::qt_metacast(_clname);
}

int ccCompassDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccOverlayDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
