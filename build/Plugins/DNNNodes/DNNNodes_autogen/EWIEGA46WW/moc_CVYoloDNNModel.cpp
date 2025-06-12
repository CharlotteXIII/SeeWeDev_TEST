/****************************************************************************
** Meta object code from reading C++ file 'CVYoloDNNModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/DNNNodes/CVYoloDNNModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CVYoloDNNModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CVYoloDNNThread_t {
    const uint offsetsAndSize[10];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CVYoloDNNThread_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CVYoloDNNThread_t qt_meta_stringdata_CVYoloDNNThread = {
    {
QT_MOC_LITERAL(0, 15), // "CVYoloDNNThread"
QT_MOC_LITERAL(16, 12), // "result_ready"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 8), // "cv::Mat&"
QT_MOC_LITERAL(39, 5) // "image"

    },
    "CVYoloDNNThread\0result_ready\0\0cv::Mat&\0"
    "image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVYoloDNNThread[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void CVYoloDNNThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CVYoloDNNThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->result_ready((*reinterpret_cast< std::add_pointer_t<cv::Mat&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CVYoloDNNThread::*)(cv::Mat & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CVYoloDNNThread::result_ready)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CVYoloDNNThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CVYoloDNNThread.offsetsAndSize,
    qt_meta_data_CVYoloDNNThread,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CVYoloDNNThread_t
, QtPrivate::TypeAndForceComplete<CVYoloDNNThread, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<cv::Mat &, std::false_type>



>,
    nullptr
} };


const QMetaObject *CVYoloDNNThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVYoloDNNThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CVYoloDNNThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CVYoloDNNThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CVYoloDNNThread::result_ready(cv::Mat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CVYoloDNNModel_t {
    const uint offsetsAndSize[8];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CVYoloDNNModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CVYoloDNNModel_t qt_meta_stringdata_CVYoloDNNModel = {
    {
QT_MOC_LITERAL(0, 14), // "CVYoloDNNModel"
QT_MOC_LITERAL(15, 15), // "received_result"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 8) // "cv::Mat&"

    },
    "CVYoloDNNModel\0received_result\0\0"
    "cv::Mat&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVYoloDNNModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void CVYoloDNNModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CVYoloDNNModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->received_result((*reinterpret_cast< std::add_pointer_t<cv::Mat&>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CVYoloDNNModel::staticMetaObject = { {
    QMetaObject::SuperData::link<PBNodeDataModel::staticMetaObject>(),
    qt_meta_stringdata_CVYoloDNNModel.offsetsAndSize,
    qt_meta_data_CVYoloDNNModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CVYoloDNNModel_t
, QtPrivate::TypeAndForceComplete<CVYoloDNNModel, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<cv::Mat &, std::false_type>


>,
    nullptr
} };


const QMetaObject *CVYoloDNNModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVYoloDNNModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CVYoloDNNModel.stringdata0))
        return static_cast<void*>(this);
    return PBNodeDataModel::qt_metacast(_clname);
}

int CVYoloDNNModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PBNodeDataModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
