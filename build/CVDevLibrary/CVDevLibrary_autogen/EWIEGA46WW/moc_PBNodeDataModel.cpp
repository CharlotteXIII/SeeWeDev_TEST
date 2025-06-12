/****************************************************************************
** Meta object code from reading C++ file 'PBNodeDataModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../CVDevLibrary/PBNodeDataModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PBNodeDataModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PBNodeDataModel_t {
    const uint offsetsAndSize[26];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PBNodeDataModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PBNodeDataModel_t qt_meta_stringdata_PBNodeDataModel = {
    {
QT_MOC_LITERAL(0, 15), // "PBNodeDataModel"
QT_MOC_LITERAL(16, 23), // "property_changed_signal"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 25), // "std::shared_ptr<Property>"
QT_MOC_LITERAL(67, 21), // "enable_changed_signal"
QT_MOC_LITERAL(89, 23), // "minimize_changed_signal"
QT_MOC_LITERAL(113, 28), // "lock_position_changed_signal"
QT_MOC_LITERAL(142, 27), // "draw_entries_changed_signal"
QT_MOC_LITERAL(170, 33), // "property_structure_changed_si..."
QT_MOC_LITERAL(204, 14), // "enable_changed"
QT_MOC_LITERAL(219, 20), // "draw_entries_changed"
QT_MOC_LITERAL(240, 16), // "minimize_changed"
QT_MOC_LITERAL(257, 21) // "lock_position_changed"

    },
    "PBNodeDataModel\0property_changed_signal\0"
    "\0std::shared_ptr<Property>\0"
    "enable_changed_signal\0minimize_changed_signal\0"
    "lock_position_changed_signal\0"
    "draw_entries_changed_signal\0"
    "property_structure_changed_signal\0"
    "enable_changed\0draw_entries_changed\0"
    "minimize_changed\0lock_position_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PBNodeDataModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       4,    1,   77,    2, 0x06,    3 /* Public */,
       5,    1,   80,    2, 0x06,    5 /* Public */,
       6,    1,   83,    2, 0x06,    7 /* Public */,
       7,    1,   86,    2, 0x06,    9 /* Public */,
       8,    0,   89,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   90,    2, 0x09,   12 /* Protected */,
      10,    1,   93,    2, 0x09,   14 /* Protected */,
      11,    1,   96,    2, 0x09,   16 /* Protected */,
      12,    1,   99,    2, 0x09,   18 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void PBNodeDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PBNodeDataModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->property_changed_signal((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<Property>>>(_a[1]))); break;
        case 1: _t->enable_changed_signal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->minimize_changed_signal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->lock_position_changed_signal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->draw_entries_changed_signal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->property_structure_changed_signal(); break;
        case 6: _t->enable_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->draw_entries_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->minimize_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->lock_position_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PBNodeDataModel::*)(std::shared_ptr<Property> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PBNodeDataModel::property_changed_signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PBNodeDataModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PBNodeDataModel::enable_changed_signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PBNodeDataModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PBNodeDataModel::minimize_changed_signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PBNodeDataModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PBNodeDataModel::lock_position_changed_signal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PBNodeDataModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PBNodeDataModel::draw_entries_changed_signal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PBNodeDataModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PBNodeDataModel::property_structure_changed_signal)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject PBNodeDataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QtNodes::NodeDataModel::staticMetaObject>(),
    qt_meta_stringdata_PBNodeDataModel.offsetsAndSize,
    qt_meta_data_PBNodeDataModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PBNodeDataModel_t
, QtPrivate::TypeAndForceComplete<PBNodeDataModel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<std::shared_ptr<Property>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *PBNodeDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PBNodeDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PBNodeDataModel.stringdata0))
        return static_cast<void*>(this);
    return QtNodes::NodeDataModel::qt_metacast(_clname);
}

int PBNodeDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtNodes::NodeDataModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PBNodeDataModel::property_changed_signal(std::shared_ptr<Property> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PBNodeDataModel::enable_changed_signal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PBNodeDataModel::minimize_changed_signal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PBNodeDataModel::lock_position_changed_signal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PBNodeDataModel::draw_entries_changed_signal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PBNodeDataModel::property_structure_changed_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
