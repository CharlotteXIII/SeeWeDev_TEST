/****************************************************************************
** Meta object code from reading C++ file 'NomadMLClassificationModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/DNNNodes/NomadMLClassificationModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NomadMLClassificationModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NomadMLClassificationThread_t {
    const uint offsetsAndSize[8];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_NomadMLClassificationThread_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_NomadMLClassificationThread_t qt_meta_stringdata_NomadMLClassificationThread = {
    {
QT_MOC_LITERAL(0, 27), // "NomadMLClassificationThread"
QT_MOC_LITERAL(28, 12), // "result_ready"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 8) // "cv::Mat&"

    },
    "NomadMLClassificationThread\0result_ready\0"
    "\0cv::Mat&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NomadMLClassificationThread[] = {

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
       1,    2,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,

       0        // eod
};

void NomadMLClassificationThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NomadMLClassificationThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->result_ready((*reinterpret_cast< std::add_pointer_t<cv::Mat&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NomadMLClassificationThread::*)(cv::Mat & , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NomadMLClassificationThread::result_ready)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NomadMLClassificationThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_NomadMLClassificationThread.offsetsAndSize,
    qt_meta_data_NomadMLClassificationThread,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_NomadMLClassificationThread_t
, QtPrivate::TypeAndForceComplete<NomadMLClassificationThread, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<cv::Mat &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>



>,
    nullptr
} };


const QMetaObject *NomadMLClassificationThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NomadMLClassificationThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NomadMLClassificationThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int NomadMLClassificationThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NomadMLClassificationThread::result_ready(cv::Mat & _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_NomadMLClassificationModel_t {
    const uint offsetsAndSize[8];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_NomadMLClassificationModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_NomadMLClassificationModel_t qt_meta_stringdata_NomadMLClassificationModel = {
    {
QT_MOC_LITERAL(0, 26), // "NomadMLClassificationModel"
QT_MOC_LITERAL(27, 15), // "received_result"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 8) // "cv::Mat&"

    },
    "NomadMLClassificationModel\0received_result\0"
    "\0cv::Mat&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NomadMLClassificationModel[] = {

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
       1,    2,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,

       0        // eod
};

void NomadMLClassificationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NomadMLClassificationModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->received_result((*reinterpret_cast< std::add_pointer_t<cv::Mat&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject NomadMLClassificationModel::staticMetaObject = { {
    QMetaObject::SuperData::link<PBNodeDataModel::staticMetaObject>(),
    qt_meta_stringdata_NomadMLClassificationModel.offsetsAndSize,
    qt_meta_data_NomadMLClassificationModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_NomadMLClassificationModel_t
, QtPrivate::TypeAndForceComplete<NomadMLClassificationModel, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<cv::Mat &, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *NomadMLClassificationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NomadMLClassificationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NomadMLClassificationModel.stringdata0))
        return static_cast<void*>(this);
    return PBNodeDataModel::qt_metacast(_clname);
}

int NomadMLClassificationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
