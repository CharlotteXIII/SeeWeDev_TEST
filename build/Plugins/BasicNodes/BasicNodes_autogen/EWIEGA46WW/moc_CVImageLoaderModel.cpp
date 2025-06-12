/****************************************************************************
** Meta object code from reading C++ file 'CVImageLoaderModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/BasicNodes/CVImageLoaderModel.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CVImageLoaderModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CVImageLoaderModel_t {
    const uint offsetsAndSize[16];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CVImageLoaderModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CVImageLoaderModel_t qt_meta_stringdata_CVImageLoaderModel = {
    {
QT_MOC_LITERAL(0, 18), // "CVImageLoaderModel"
QT_MOC_LITERAL(19, 17), // "em_button_clicked"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 6), // "button"
QT_MOC_LITERAL(45, 10), // "flip_image"
QT_MOC_LITERAL(56, 22), // "inputConnectionCreated"
QT_MOC_LITERAL(79, 19), // "QtNodes::Connection"
QT_MOC_LITERAL(99, 22) // "inputConnectionDeleted"

    },
    "CVImageLoaderModel\0em_button_clicked\0"
    "\0button\0flip_image\0inputConnectionCreated\0"
    "QtNodes::Connection\0inputConnectionDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVImageLoaderModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       4,    0,   41,    2, 0x08,    3 /* Private */,
       5,    1,   42,    2, 0x08,    4 /* Private */,
       7,    1,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void CVImageLoaderModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CVImageLoaderModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->em_button_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->flip_image(); break;
        case 2: _t->inputConnectionCreated((*reinterpret_cast< std::add_pointer_t<QtNodes::Connection>>(_a[1]))); break;
        case 3: _t->inputConnectionDeleted((*reinterpret_cast< std::add_pointer_t<QtNodes::Connection>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CVImageLoaderModel::staticMetaObject = { {
    QMetaObject::SuperData::link<PBNodeDataModel::staticMetaObject>(),
    qt_meta_stringdata_CVImageLoaderModel.offsetsAndSize,
    qt_meta_data_CVImageLoaderModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CVImageLoaderModel_t
, QtPrivate::TypeAndForceComplete<CVImageLoaderModel, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtNodes::Connection const &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtNodes::Connection const &, std::false_type>


>,
    nullptr
} };


const QMetaObject *CVImageLoaderModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVImageLoaderModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CVImageLoaderModel.stringdata0))
        return static_cast<void*>(this);
    return PBNodeDataModel::qt_metacast(_clname);
}

int CVImageLoaderModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PBNodeDataModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
