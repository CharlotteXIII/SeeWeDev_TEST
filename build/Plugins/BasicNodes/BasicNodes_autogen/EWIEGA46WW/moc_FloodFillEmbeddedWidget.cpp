/****************************************************************************
** Meta object code from reading C++ file 'FloodFillEmbeddedWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/BasicNodes/FloodFillEmbeddedWidget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FloodFillEmbeddedWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FloodFillEmbeddedWidget_t {
    const uint offsetsAndSize[26];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FloodFillEmbeddedWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FloodFillEmbeddedWidget_t qt_meta_stringdata_FloodFillEmbeddedWidget = {
    {
QT_MOC_LITERAL(0, 23), // "FloodFillEmbeddedWidget"
QT_MOC_LITERAL(24, 22), // "spinbox_clicked_signal"
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 7), // "spinbox"
QT_MOC_LITERAL(56, 5), // "value"
QT_MOC_LITERAL(62, 31), // "on_mpLowerBSpinbox_valueChanged"
QT_MOC_LITERAL(94, 31), // "on_mpLowerGSpinbox_valueChanged"
QT_MOC_LITERAL(126, 31), // "on_mpLowerRSpinbox_valueChanged"
QT_MOC_LITERAL(158, 34), // "on_mpLowerGraySpinbox_valueCh..."
QT_MOC_LITERAL(193, 31), // "on_mpUpperBSpinbox_valueChanged"
QT_MOC_LITERAL(225, 31), // "on_mpUpperGSpinbox_valueChanged"
QT_MOC_LITERAL(257, 31), // "on_mpUpperRSpinbox_valueChanged"
QT_MOC_LITERAL(289, 34) // "on_mpUpperGraySpinbox_valueCh..."

    },
    "FloodFillEmbeddedWidget\0spinbox_clicked_signal\0"
    "\0spinbox\0value\0on_mpLowerBSpinbox_valueChanged\0"
    "on_mpLowerGSpinbox_valueChanged\0"
    "on_mpLowerRSpinbox_valueChanged\0"
    "on_mpLowerGraySpinbox_valueChanged\0"
    "on_mpUpperBSpinbox_valueChanged\0"
    "on_mpUpperGSpinbox_valueChanged\0"
    "on_mpUpperRSpinbox_valueChanged\0"
    "on_mpUpperGraySpinbox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FloodFillEmbeddedWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   73,    2, 0x08,    4 /* Private */,
       6,    1,   76,    2, 0x08,    6 /* Private */,
       7,    1,   79,    2, 0x08,    8 /* Private */,
       8,    1,   82,    2, 0x08,   10 /* Private */,
       9,    1,   85,    2, 0x08,   12 /* Private */,
      10,    1,   88,    2, 0x08,   14 /* Private */,
      11,    1,   91,    2, 0x08,   16 /* Private */,
      12,    1,   94,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void FloodFillEmbeddedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FloodFillEmbeddedWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->spinbox_clicked_signal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_mpLowerBSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_mpLowerGSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_mpLowerRSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_mpLowerGraySpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_mpUpperBSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_mpUpperGSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_mpUpperRSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_mpUpperGraySpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FloodFillEmbeddedWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FloodFillEmbeddedWidget::spinbox_clicked_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FloodFillEmbeddedWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FloodFillEmbeddedWidget.offsetsAndSize,
    qt_meta_data_FloodFillEmbeddedWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FloodFillEmbeddedWidget_t
, QtPrivate::TypeAndForceComplete<FloodFillEmbeddedWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *FloodFillEmbeddedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloodFillEmbeddedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FloodFillEmbeddedWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FloodFillEmbeddedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void FloodFillEmbeddedWidget::spinbox_clicked_signal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
