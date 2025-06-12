/****************************************************************************
** Meta object code from reading C++ file 'SaveImageModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/BasicNodes/SaveImageModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SaveImageModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SavingImageThread_t {
    const uint offsetsAndSize[2];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SavingImageThread_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SavingImageThread_t qt_meta_stringdata_SavingImageThread = {
    {
QT_MOC_LITERAL(0, 17) // "SavingImageThread"

    },
    "SavingImageThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SavingImageThread[] = {

 // content:
      10,       // revision
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

void SavingImageThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject SavingImageThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_SavingImageThread.offsetsAndSize,
    qt_meta_data_SavingImageThread,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SavingImageThread_t
, QtPrivate::TypeAndForceComplete<SavingImageThread, std::true_type>



>,
    nullptr
} };


const QMetaObject *SavingImageThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SavingImageThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SavingImageThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int SavingImageThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SaveImageModel_t {
    const uint offsetsAndSize[10];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SaveImageModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SaveImageModel_t qt_meta_stringdata_SaveImageModel = {
    {
QT_MOC_LITERAL(0, 14), // "SaveImageModel"
QT_MOC_LITERAL(15, 22), // "inputConnectionCreated"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 19), // "QtNodes::Connection"
QT_MOC_LITERAL(59, 22) // "inputConnectionDeleted"

    },
    "SaveImageModel\0inputConnectionCreated\0"
    "\0QtNodes::Connection\0inputConnectionDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SaveImageModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x08,    1 /* Private */,
       4,    1,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void SaveImageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaveImageModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->inputConnectionCreated((*reinterpret_cast< std::add_pointer_t<QtNodes::Connection>>(_a[1]))); break;
        case 1: _t->inputConnectionDeleted((*reinterpret_cast< std::add_pointer_t<QtNodes::Connection>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SaveImageModel::staticMetaObject = { {
    QMetaObject::SuperData::link<PBNodeDataModel::staticMetaObject>(),
    qt_meta_stringdata_SaveImageModel.offsetsAndSize,
    qt_meta_data_SaveImageModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SaveImageModel_t
, QtPrivate::TypeAndForceComplete<SaveImageModel, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtNodes::Connection const &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtNodes::Connection const &, std::false_type>


>,
    nullptr
} };


const QMetaObject *SaveImageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaveImageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SaveImageModel.stringdata0))
        return static_cast<void*>(this);
    return PBNodeDataModel::qt_metacast(_clname);
}

int SaveImageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PBNodeDataModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
