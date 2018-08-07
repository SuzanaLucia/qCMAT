/****************************************************************************
** Meta object code from reading C++ file 'ccCompass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../plugins/core/qCompass/ccCompass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccCompass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccCompass_t {
    QByteArrayData data[58];
    char stringdata0[698];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccCompass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccCompass_t qt_meta_stringdata_ccCompass = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ccCompass"
QT_MOC_LITERAL(1, 10, 8), // "doAction"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "startMeasuring"
QT_MOC_LITERAL(4, 35, 13), // "stopMeasuring"
QT_MOC_LITERAL(5, 49, 9), // "finalStop"
QT_MOC_LITERAL(6, 59, 12), // "onItemPicked"
QT_MOC_LITERAL(7, 72, 29), // "ccPickingListener::PickedItem"
QT_MOC_LITERAL(8, 102, 2), // "pi"
QT_MOC_LITERAL(9, 105, 11), // "pointPicked"
QT_MOC_LITERAL(10, 117, 10), // "ccHObject*"
QT_MOC_LITERAL(11, 128, 6), // "entity"
QT_MOC_LITERAL(12, 135, 7), // "itemIdx"
QT_MOC_LITERAL(13, 143, 1), // "x"
QT_MOC_LITERAL(14, 145, 1), // "y"
QT_MOC_LITERAL(15, 147, 9), // "CCVector3"
QT_MOC_LITERAL(16, 157, 1), // "P"
QT_MOC_LITERAL(17, 159, 7), // "onClose"
QT_MOC_LITERAL(18, 167, 8), // "onAccept"
QT_MOC_LITERAL(19, 176, 6), // "onSave"
QT_MOC_LITERAL(20, 183, 6), // "onUndo"
QT_MOC_LITERAL(21, 190, 13), // "enableMapMode"
QT_MOC_LITERAL(22, 204, 17), // "enableMeasureMode"
QT_MOC_LITERAL(23, 222, 7), // "setPick"
QT_MOC_LITERAL(24, 230, 12), // "setLineation"
QT_MOC_LITERAL(25, 243, 8), // "setPlane"
QT_MOC_LITERAL(26, 252, 8), // "setTrace"
QT_MOC_LITERAL(27, 261, 12), // "addPinchNode"
QT_MOC_LITERAL(28, 274, 12), // "setThickness"
QT_MOC_LITERAL(29, 287, 13), // "setThickness2"
QT_MOC_LITERAL(30, 301, 14), // "setYoungerThan"
QT_MOC_LITERAL(31, 316, 10), // "setFollows"
QT_MOC_LITERAL(32, 327, 13), // "setEquivalent"
QT_MOC_LITERAL(33, 341, 7), // "setNote"
QT_MOC_LITERAL(34, 349, 25), // "recalculateSelectedTraces"
QT_MOC_LITERAL(35, 375, 15), // "mergeGeoObjects"
QT_MOC_LITERAL(36, 391, 19), // "fitPlaneToGeoObject"
QT_MOC_LITERAL(37, 411, 20), // "recalculateFitPlanes"
QT_MOC_LITERAL(38, 432, 19), // "convertToPointCloud"
QT_MOC_LITERAL(39, 452, 19), // "distributeSelection"
QT_MOC_LITERAL(40, 472, 11), // "exportToSVG"
QT_MOC_LITERAL(41, 484, 15), // "writeToInterior"
QT_MOC_LITERAL(42, 500, 12), // "writeToUpper"
QT_MOC_LITERAL(43, 513, 12), // "writeToLower"
QT_MOC_LITERAL(44, 526, 12), // "addGeoObject"
QT_MOC_LITERAL(45, 539, 13), // "singleSurface"
QT_MOC_LITERAL(46, 553, 14), // "addGeoObjectSS"
QT_MOC_LITERAL(47, 568, 18), // "hideAllPointClouds"
QT_MOC_LITERAL(48, 587, 1), // "o"
QT_MOC_LITERAL(49, 589, 13), // "toggleStipple"
QT_MOC_LITERAL(50, 603, 7), // "checked"
QT_MOC_LITERAL(51, 611, 14), // "recurseStipple"
QT_MOC_LITERAL(52, 626, 6), // "object"
QT_MOC_LITERAL(53, 633, 12), // "toggleLabels"
QT_MOC_LITERAL(54, 646, 13), // "recurseLabels"
QT_MOC_LITERAL(55, 660, 13), // "toggleNormals"
QT_MOC_LITERAL(56, 674, 14), // "recurseNormals"
QT_MOC_LITERAL(57, 689, 8) // "showHelp"

    },
    "ccCompass\0doAction\0\0startMeasuring\0"
    "stopMeasuring\0finalStop\0onItemPicked\0"
    "ccPickingListener::PickedItem\0pi\0"
    "pointPicked\0ccHObject*\0entity\0itemIdx\0"
    "x\0y\0CCVector3\0P\0onClose\0onAccept\0"
    "onSave\0onUndo\0enableMapMode\0"
    "enableMeasureMode\0setPick\0setLineation\0"
    "setPlane\0setTrace\0addPinchNode\0"
    "setThickness\0setThickness2\0setYoungerThan\0"
    "setFollows\0setEquivalent\0setNote\0"
    "recalculateSelectedTraces\0mergeGeoObjects\0"
    "fitPlaneToGeoObject\0recalculateFitPlanes\0"
    "convertToPointCloud\0distributeSelection\0"
    "exportToSVG\0writeToInterior\0writeToUpper\0"
    "writeToLower\0addGeoObject\0singleSurface\0"
    "addGeoObjectSS\0hideAllPointClouds\0o\0"
    "toggleStipple\0checked\0recurseStipple\0"
    "object\0toggleLabels\0recurseLabels\0"
    "toggleNormals\0recurseNormals\0showHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccCompass[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  234,    2, 0x09 /* Protected */,
       3,    0,  235,    2, 0x09 /* Protected */,
       4,    1,  236,    2, 0x09 /* Protected */,
       4,    0,  239,    2, 0x29 /* Protected | MethodCloned */,
       6,    1,  240,    2, 0x09 /* Protected */,
       9,    5,  243,    2, 0x09 /* Protected */,
      17,    0,  254,    2, 0x09 /* Protected */,
      18,    0,  255,    2, 0x09 /* Protected */,
      19,    0,  256,    2, 0x09 /* Protected */,
      20,    0,  257,    2, 0x09 /* Protected */,
      21,    0,  258,    2, 0x09 /* Protected */,
      22,    0,  259,    2, 0x09 /* Protected */,
      23,    0,  260,    2, 0x09 /* Protected */,
      24,    0,  261,    2, 0x09 /* Protected */,
      25,    0,  262,    2, 0x09 /* Protected */,
      26,    0,  263,    2, 0x09 /* Protected */,
      27,    0,  264,    2, 0x09 /* Protected */,
      28,    0,  265,    2, 0x09 /* Protected */,
      29,    0,  266,    2, 0x09 /* Protected */,
      30,    0,  267,    2, 0x09 /* Protected */,
      31,    0,  268,    2, 0x09 /* Protected */,
      32,    0,  269,    2, 0x09 /* Protected */,
      33,    0,  270,    2, 0x09 /* Protected */,
      34,    0,  271,    2, 0x09 /* Protected */,
      35,    0,  272,    2, 0x09 /* Protected */,
      36,    0,  273,    2, 0x09 /* Protected */,
      37,    0,  274,    2, 0x09 /* Protected */,
      38,    0,  275,    2, 0x09 /* Protected */,
      39,    0,  276,    2, 0x09 /* Protected */,
      40,    0,  277,    2, 0x09 /* Protected */,
      41,    0,  278,    2, 0x09 /* Protected */,
      42,    0,  279,    2, 0x09 /* Protected */,
      43,    0,  280,    2, 0x09 /* Protected */,
      44,    1,  281,    2, 0x09 /* Protected */,
      44,    0,  284,    2, 0x29 /* Protected | MethodCloned */,
      46,    0,  285,    2, 0x09 /* Protected */,
      47,    1,  286,    2, 0x09 /* Protected */,
      49,    1,  289,    2, 0x09 /* Protected */,
      51,    2,  292,    2, 0x09 /* Protected */,
      53,    1,  297,    2, 0x09 /* Protected */,
      54,    2,  300,    2, 0x09 /* Protected */,
      55,    1,  305,    2, 0x09 /* Protected */,
      56,    2,  308,    2, 0x09 /* Protected */,
      57,    0,  313,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Bool,    5,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::UInt, QMetaType::Int, QMetaType::Int, 0x80000000 | 15,   11,   12,   13,   14,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   48,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   52,   50,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   52,   50,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   52,   50,
    QMetaType::Void,

       0        // eod
};

void ccCompass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccCompass *_t = static_cast<ccCompass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doAction(); break;
        case 1: { bool _r = _t->startMeasuring();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->stopMeasuring((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->stopMeasuring();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->onItemPicked((*reinterpret_cast< const ccPickingListener::PickedItem(*)>(_a[1]))); break;
        case 5: _t->pointPicked((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const CCVector3(*)>(_a[5]))); break;
        case 6: _t->onClose(); break;
        case 7: _t->onAccept(); break;
        case 8: _t->onSave(); break;
        case 9: _t->onUndo(); break;
        case 10: _t->enableMapMode(); break;
        case 11: _t->enableMeasureMode(); break;
        case 12: _t->setPick(); break;
        case 13: _t->setLineation(); break;
        case 14: _t->setPlane(); break;
        case 15: _t->setTrace(); break;
        case 16: _t->addPinchNode(); break;
        case 17: _t->setThickness(); break;
        case 18: _t->setThickness2(); break;
        case 19: _t->setYoungerThan(); break;
        case 20: _t->setFollows(); break;
        case 21: _t->setEquivalent(); break;
        case 22: _t->setNote(); break;
        case 23: _t->recalculateSelectedTraces(); break;
        case 24: _t->mergeGeoObjects(); break;
        case 25: _t->fitPlaneToGeoObject(); break;
        case 26: _t->recalculateFitPlanes(); break;
        case 27: _t->convertToPointCloud(); break;
        case 28: _t->distributeSelection(); break;
        case 29: _t->exportToSVG(); break;
        case 30: _t->writeToInterior(); break;
        case 31: _t->writeToUpper(); break;
        case 32: _t->writeToLower(); break;
        case 33: _t->addGeoObject((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->addGeoObject(); break;
        case 35: _t->addGeoObjectSS(); break;
        case 36: _t->hideAllPointClouds((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 37: _t->toggleStipple((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->recurseStipple((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 39: _t->toggleLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->recurseLabels((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->toggleNormals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->recurseNormals((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 43: _t->showHelp(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ccCompass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ccCompass.data,
      qt_meta_data_ccCompass,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ccCompass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccCompass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ccCompass.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccStdPluginInterface"))
        return static_cast< ccStdPluginInterface*>(this);
    if (!strcmp(_clname, "ccPickingListener"))
        return static_cast< ccPickingListener*>(this);
    if (!strcmp(_clname, "edf.rd.CloudCompare.ccStdPluginInterface/1.4"))
        return static_cast< ccStdPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int ccCompass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 44;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa0, 0x03, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x8c, 0x03, 0x00, 0x00, 0x13, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 'c',  0x00, 'c',  0x00,
    'c',  0x00, 'o',  0x00, 'r',  0x00, 'p',  0x00,
    '.',  0x00, 'c',  0x00, 'l',  0x00, 'o',  0x00,
    'u',  0x00, 'd',  0x00, 'c',  0x00, 'o',  0x00,
    'm',  0x00, 'p',  0x00, 'a',  0x00, 'r',  0x00,
    'e',  0x00, '.',  0x00, 'p',  0x00, 'l',  0x00,
    'u',  0x00, 'g',  0x00, 'i',  0x00, 'n',  0x00,
    '.',  0x00, 'c',  0x00, 'c',  0x00, 'C',  0x00,
    'o',  0x00, 'm',  0x00, 'p',  0x00, 'a',  0x00,
    's',  0x00, 's',  0x00, 0x9b, 0x0e, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x09, 0x00, 'c',  'c', 
    'C',  'o',  'm',  'p',  'a',  's',  's',  0x00,
    ':',  '`',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x15, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xe0, 0x02, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0xc0, 0x02, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'y', 
    'p',  'e',  0x00, 0x00, 0x08, 0x00, 'S',  't', 
    'a',  'n',  'd',  'a',  'r',  'd',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x04, 0x00, 'c',  'o', 
    'r',  'e',  0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x07, 0x00, 'C',  'o',  'm',  'p',  'a',  's', 
    's',  0x00, 0x00, 0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x04, 0x00, 'i',  'c',  'o',  'n',  0x00, 0x00,
    '$',  0x00, ':',  '/',  'C',  'C',  '/',  'p', 
    'l',  'u',  'g',  'i',  'n',  '/',  'q',  'C', 
    'o',  'm',  'p',  'a',  's',  's',  '/',  'i', 
    'm',  'a',  'g',  'e',  's',  '/',  'i',  'c', 
    'o',  'n',  '.',  'p',  'n',  'g',  0x00, 0x00,
    0x1b, 0x12, 0x00, 0x00, 0x0b, 0x00, 'd',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, '7',  0x00, 'A',  ' ', 
    'v',  'i',  'r',  't',  'u',  'a',  'l',  ' ', 
    '\'', 'c',  'o',  'm',  'p',  'a',  's',  's', 
    '\'', ' ',  'f',  'o',  'r',  ' ',  'm',  'e', 
    'a',  's',  'u',  'r',  'i',  'n',  'g',  ' ', 
    'o',  'u',  't',  'c',  'r',  'o',  'p',  ' ', 
    'o',  'r',  'i',  'e',  'n',  't',  'a',  't', 
    'i',  'o',  'n',  's',  '.',  0x00, 0x00, 0x00,
    0x94, 0x1b, 0x00, 0x00, 0x07, 0x00, 'a',  'u', 
    't',  'h',  'o',  'r',  's',  0x00, 0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, '(',  0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, '$',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x0a, 0x00, 'S',  'a', 
    'm',  ' ',  'T',  'h',  'i',  'e',  'l',  'e', 
    0x0c, 0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x14, '%',  0x00, 0x00, 0x0b, 0x00, 'm',  'a', 
    'i',  'n',  't',  'a',  'i',  'n',  'e',  'r', 
    's',  0x00, 0x00, 0x00, '8',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x0a, 0x00, 'S',  'a',  'm',  ' ',  'T',  'h', 
    'i',  'e',  'l',  'e',  0x0c, 0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0x14, '.',  0x00, 0x00,
    0x0a, 0x00, 'r',  'e',  'f',  'e',  'r',  'e', 
    'n',  'c',  'e',  's',  'P',  0x01, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 'H',  0x01, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    '`',  0x00, 'R',  'a',  'p',  'i',  'd',  ',', 
    ' ',  's',  'e',  'm',  'i',  '-',  'a',  'u', 
    't',  'o',  'm',  'a',  't',  'i',  'c',  ' ', 
    'f',  'r',  'a',  'c',  't',  'u',  'r',  'e', 
    ' ',  'a',  'n',  'd',  ' ',  'c',  'o',  'n', 
    't',  'a',  'c',  't',  ' ',  'm',  'a',  'p', 
    'p',  'i',  'n',  'g',  ' ',  'f',  'o',  'r', 
    ' ',  'p',  'o',  'i',  'n',  't',  ' ',  'c', 
    'l',  'o',  'u',  'd',  's',  ',',  ' ',  'i', 
    'm',  'a',  'g',  'e',  's',  ' ',  'a',  'n', 
    'd',  ' ',  'g',  'e',  'o',  'p',  'h',  'y', 
    's',  'i',  'c',  'a',  'l',  ' ',  'd',  'a', 
    't',  'a',  0x00, 0x00, 0x1b, 0x11, 0x00, 0x00,
    0x03, 0x00, 'u',  'r',  'l',  0x00, 0x00, 0x00,
    '&',  0x00, 'h',  't',  't',  'p',  's',  ':', 
    '/',  '/',  'd',  'o',  'i',  '.',  'o',  'r', 
    'g',  '/',  '1',  '0',  '.',  '5',  '1',  '9', 
    '4',  '/',  's',  'e',  '-',  '8',  '-',  '1', 
    '2',  '4',  '1',  '-',  '2',  '0',  '1',  '7', 
    0x0c, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    0x0d, 0x00, 'D',  'o',  'c',  'u',  'm',  'e', 
    'n',  't',  'a',  't',  'i',  'o',  'n',  0x00,
    0x9b, 0x06, 0x00, 0x00, 0x03, 0x00, 'u',  'r', 
    'l',  0x00, 0x00, 0x00, 'E',  0x00, 'h',  't', 
    't',  'p',  ':',  '/',  '/',  'w',  'w',  'w', 
    '.',  'c',  'l',  'o',  'u',  'd',  'c',  'o', 
    'm',  'p',  'a',  'r',  'e',  '.',  'o',  'r', 
    'g',  '/',  'd',  'o',  'c',  '/',  'w',  'i', 
    'k',  'i',  '/',  'i',  'n',  'd',  'e',  'x', 
    '.',  'p',  'h',  'p',  '?',  't',  'i',  't', 
    'l',  'e',  '=',  'C',  'o',  'm',  'p',  'a', 
    's',  's',  '_',  '(',  'p',  'l',  'u',  'g', 
    'i',  'n',  ')',  0x00, 0x0c, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x85, 0x18, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, '`',  0x01, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa0, 0x03, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x8c, 0x03, 0x00, 0x00, 0x13, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 'c',  0x00, 'c',  0x00,
    'c',  0x00, 'o',  0x00, 'r',  0x00, 'p',  0x00,
    '.',  0x00, 'c',  0x00, 'l',  0x00, 'o',  0x00,
    'u',  0x00, 'd',  0x00, 'c',  0x00, 'o',  0x00,
    'm',  0x00, 'p',  0x00, 'a',  0x00, 'r',  0x00,
    'e',  0x00, '.',  0x00, 'p',  0x00, 'l',  0x00,
    'u',  0x00, 'g',  0x00, 'i',  0x00, 'n',  0x00,
    '.',  0x00, 'c',  0x00, 'c',  0x00, 'C',  0x00,
    'o',  0x00, 'm',  0x00, 'p',  0x00, 'a',  0x00,
    's',  0x00, 's',  0x00, 0x95, 0x0e, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0xe0, 0x02, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0xc0, 0x02, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 't',  'y', 
    'p',  'e',  0x00, 0x00, 0x08, 0x00, 'S',  't', 
    'a',  'n',  'd',  'a',  'r',  'd',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x04, 0x00, 'c',  'o', 
    'r',  'e',  0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x07, 0x00, 'C',  'o',  'm',  'p',  'a',  's', 
    's',  0x00, 0x00, 0x00, 0x9b, 0x0a, 0x00, 0x00,
    0x04, 0x00, 'i',  'c',  'o',  'n',  0x00, 0x00,
    '$',  0x00, ':',  '/',  'C',  'C',  '/',  'p', 
    'l',  'u',  'g',  'i',  'n',  '/',  'q',  'C', 
    'o',  'm',  'p',  'a',  's',  's',  '/',  'i', 
    'm',  'a',  'g',  'e',  's',  '/',  'i',  'c', 
    'o',  'n',  '.',  'p',  'n',  'g',  0x00, 0x00,
    0x1b, 0x12, 0x00, 0x00, 0x0b, 0x00, 'd',  'e', 
    's',  'c',  'r',  'i',  'p',  't',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, '7',  0x00, 'A',  ' ', 
    'v',  'i',  'r',  't',  'u',  'a',  'l',  ' ', 
    '\'', 'c',  'o',  'm',  'p',  'a',  's',  's', 
    '\'', ' ',  'f',  'o',  'r',  ' ',  'm',  'e', 
    'a',  's',  'u',  'r',  'i',  'n',  'g',  ' ', 
    'o',  'u',  't',  'c',  'r',  'o',  'p',  ' ', 
    'o',  'r',  'i',  'e',  'n',  't',  'a',  't', 
    'i',  'o',  'n',  's',  '.',  0x00, 0x00, 0x00,
    0x94, 0x1b, 0x00, 0x00, 0x07, 0x00, 'a',  'u', 
    't',  'h',  'o',  'r',  's',  0x00, 0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, '(',  0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, '$',  0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x04, 0x00, 'n',  'a', 
    'm',  'e',  0x00, 0x00, 0x0a, 0x00, 'S',  'a', 
    'm',  ' ',  'T',  'h',  'i',  'e',  'l',  'e', 
    0x0c, 0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x14, '%',  0x00, 0x00, 0x0b, 0x00, 'm',  'a', 
    'i',  'n',  't',  'a',  'i',  'n',  'e',  'r', 
    's',  0x00, 0x00, 0x00, '8',  0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, '4',  0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 'n',  'a',  'm',  'e',  0x00, 0x00,
    0x0a, 0x00, 'S',  'a',  'm',  ' ',  'T',  'h', 
    'i',  'e',  'l',  'e',  0x0c, 0x00, 0x00, 0x00,
    0x85, 0x01, 0x00, 0x00, 0x14, '.',  0x00, 0x00,
    0x0a, 0x00, 'r',  'e',  'f',  'e',  'r',  'e', 
    'n',  'c',  'e',  's',  'P',  0x01, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 'H',  0x01, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    '`',  0x00, 'R',  'a',  'p',  'i',  'd',  ',', 
    ' ',  's',  'e',  'm',  'i',  '-',  'a',  'u', 
    't',  'o',  'm',  'a',  't',  'i',  'c',  ' ', 
    'f',  'r',  'a',  'c',  't',  'u',  'r',  'e', 
    ' ',  'a',  'n',  'd',  ' ',  'c',  'o',  'n', 
    't',  'a',  'c',  't',  ' ',  'm',  'a',  'p', 
    'p',  'i',  'n',  'g',  ' ',  'f',  'o',  'r', 
    ' ',  'p',  'o',  'i',  'n',  't',  ' ',  'c', 
    'l',  'o',  'u',  'd',  's',  ',',  ' ',  'i', 
    'm',  'a',  'g',  'e',  's',  ' ',  'a',  'n', 
    'd',  ' ',  'g',  'e',  'o',  'p',  'h',  'y', 
    's',  'i',  'c',  'a',  'l',  ' ',  'd',  'a', 
    't',  'a',  0x00, 0x00, 0x1b, 0x11, 0x00, 0x00,
    0x03, 0x00, 'u',  'r',  'l',  0x00, 0x00, 0x00,
    '&',  0x00, 'h',  't',  't',  'p',  's',  ':', 
    '/',  '/',  'd',  'o',  'i',  '.',  'o',  'r', 
    'g',  '/',  '1',  '0',  '.',  '5',  '1',  '9', 
    '4',  '/',  's',  'e',  '-',  '8',  '-',  '1', 
    '2',  '4',  '1',  '-',  '2',  '0',  '1',  '7', 
    0x0c, 0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x04, 0x00, 't',  'e',  'x',  't',  0x00, 0x00,
    0x0d, 0x00, 'D',  'o',  'c',  'u',  'm',  'e', 
    'n',  't',  'a',  't',  'i',  'o',  'n',  0x00,
    0x9b, 0x06, 0x00, 0x00, 0x03, 0x00, 'u',  'r', 
    'l',  0x00, 0x00, 0x00, 'E',  0x00, 'h',  't', 
    't',  'p',  ':',  '/',  '/',  'w',  'w',  'w', 
    '.',  'c',  'l',  'o',  'u',  'd',  'c',  'o', 
    'm',  'p',  'a',  'r',  'e',  '.',  'o',  'r', 
    'g',  '/',  'd',  'o',  'c',  '/',  'w',  'i', 
    'k',  'i',  '/',  'i',  'n',  'd',  'e',  'x', 
    '.',  'p',  'h',  'p',  '?',  't',  'i',  't', 
    'l',  'e',  '=',  'C',  'o',  'm',  'p',  'a', 
    's',  's',  '_',  '(',  'p',  'l',  'u',  'g', 
    'i',  'n',  ')',  0x00, 0x0c, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00,
    0x85, 0x18, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00,
    '$',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00,
    '0',  0x00, 0x00, 0x00, '`',  0x01, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9b, 'l',  0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x09, 0x00, 'c',  'c', 
    'C',  'o',  'm',  'p',  'a',  's',  's',  0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  '`',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'd',  0x00, 0x00, 0x00, 'T',  0x03, 0x00, 0x00,
    'p',  0x03, 0x00, 0x00, '|',  0x03, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(ccCompass, ccCompass)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
