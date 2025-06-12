/****************************************************************************
** Meta object code from reading C++ file 'CVCameraModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/BasicNodes/CVCameraModel.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CVCameraModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CVCameraThread_t {
    const uint offsetsAndSize[10];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CVCameraThread_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CVCameraThread_t qt_meta_stringdata_CVCameraThread = {
    {
QT_MOC_LITERAL(0, 14), // "CVCameraThread"
QT_MOC_LITERAL(15, 11), // "image_ready"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 12), // "camera_ready"
QT_MOC_LITERAL(41, 6) // "status"

    },
    "CVCameraThread\0image_ready\0\0camera_ready\0"
    "status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVCameraThread[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    1,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,    4,

       0        // eod
};

void CVCameraThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CVCameraThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->image_ready(); break;
        case 1: { bool _r = _t->camera_ready((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CVCameraThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CVCameraThread::image_ready)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = bool (CVCameraThread::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CVCameraThread::camera_ready)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CVCameraThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CVCameraThread.offsetsAndSize,
    qt_meta_data_CVCameraThread,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CVCameraThread_t
, QtPrivate::TypeAndForceComplete<CVCameraThread, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>



>,
    nullptr
} };


const QMetaObject *CVCameraThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVCameraThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CVCameraThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CVCameraThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CVCameraThread::image_ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
bool CVCameraThread::camera_ready(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
struct qt_meta_stringdata_CVCameraModel_t {
    const uint offsetsAndSize[20];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CVCameraModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CVCameraModel_t qt_meta_stringdata_CVCameraModel = {
    {
QT_MOC_LITERAL(0, 13), // "CVCameraModel"
QT_MOC_LITERAL(14, 14), // "received_image"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 21), // "camera_status_changed"
QT_MOC_LITERAL(52, 17), // "em_button_clicked"
QT_MOC_LITERAL(70, 6), // "button"
QT_MOC_LITERAL(77, 14), // "enable_changed"
QT_MOC_LITERAL(92, 22), // "inputConnectionCreated"
QT_MOC_LITERAL(115, 19), // "QtNodes::Connection"
QT_MOC_LITERAL(135, 22) // "inputConnectionDeleted"

    },
    "CVCameraModel\0received_image\0\0"
    "camera_status_changed\0em_button_clicked\0"
    "button\0enable_changed\0inputConnectionCreated\0"
    "QtNodes::Connection\0inputConnectionDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVCameraModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    1,   51,    2, 0x08,    2 /* Private */,
       4,    1,   54,    2, 0x08,    4 /* Private */,
       6,    1,   57,    2, 0x08,    6 /* Private */,
       7,    1,   60,    2, 0x08,    8 /* Private */,
       9,    1,   63,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void CVCameraModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CVCameraModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->received_image(); break;
        case 1: _t->camera_status_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->em_button_clicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->enable_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->inputConnectionCreated((*reinterpret_cast< std::add_pointer_t<QtNodes::Connection>>(_a[1]))); break;
        case 5: _t->inputConnectionDeleted((*reinterpret_cast< std::add_pointer_t<QtNodes::Connection>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CVCameraModel::staticMetaObject = { {
    QMetaObject::SuperData::link<PBNodeDataModel::staticMetaObject>(),
    qt_meta_stringdata_CVCameraModel.offsetsAndSize,
    qt_meta_data_CVCameraModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CVCameraModel_t
, QtPrivate::TypeAndForceComplete<CVCameraModel, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtNodes::Connection const &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QtNodes::Connection const &, std::false_type>


>,
    nullptr
} };


const QMetaObject *CVCameraModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVCameraModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CVCameraModel.stringdata0))
        return static_cast<void*>(this);
    return PBNodeDataModel::qt_metacast(_clname);
}

int CVCameraModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PBNodeDataModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
