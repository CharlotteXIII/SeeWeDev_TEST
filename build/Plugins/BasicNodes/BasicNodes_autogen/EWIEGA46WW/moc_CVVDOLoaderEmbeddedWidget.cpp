/****************************************************************************
** Meta object code from reading C++ file 'CVVDOLoaderEmbeddedWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/BasicNodes/CVVDOLoaderEmbeddedWidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CVVDOLoaderEmbeddedWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CVVDOLoaderEmbeddedWidget_t {
    const uint offsetsAndSize[22];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CVVDOLoaderEmbeddedWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CVVDOLoaderEmbeddedWidget_t qt_meta_stringdata_CVVDOLoaderEmbeddedWidget = {
    {
QT_MOC_LITERAL(0, 25), // "CVVDOLoaderEmbeddedWidget"
QT_MOC_LITERAL(26, 21), // "button_clicked_signal"
QT_MOC_LITERAL(48, 0), // ""
QT_MOC_LITERAL(49, 6), // "button"
QT_MOC_LITERAL(56, 19), // "slider_value_signal"
QT_MOC_LITERAL(76, 5), // "value"
QT_MOC_LITERAL(82, 26), // "on_mpForwardButton_clicked"
QT_MOC_LITERAL(109, 27), // "on_mpBackwardButton_clicked"
QT_MOC_LITERAL(137, 28), // "on_mpPlayPauseButton_clicked"
QT_MOC_LITERAL(166, 27), // "on_mpFilenameButton_clicked"
QT_MOC_LITERAL(194, 24) // "on_mpSlider_valueChanged"

    },
    "CVVDOLoaderEmbeddedWidget\0"
    "button_clicked_signal\0\0button\0"
    "slider_value_signal\0value\0"
    "on_mpForwardButton_clicked\0"
    "on_mpBackwardButton_clicked\0"
    "on_mpPlayPauseButton_clicked\0"
    "on_mpFilenameButton_clicked\0"
    "on_mpSlider_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVVDOLoaderEmbeddedWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    1,   59,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   62,    2, 0x0a,    5 /* Public */,
       7,    0,   63,    2, 0x0a,    6 /* Public */,
       8,    0,   64,    2, 0x0a,    7 /* Public */,
       9,    0,   65,    2, 0x0a,    8 /* Public */,
      10,    1,   66,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void CVVDOLoaderEmbeddedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CVVDOLoaderEmbeddedWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->button_clicked_signal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->slider_value_signal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_mpForwardButton_clicked(); break;
        case 3: _t->on_mpBackwardButton_clicked(); break;
        case 4: _t->on_mpPlayPauseButton_clicked(); break;
        case 5: _t->on_mpFilenameButton_clicked(); break;
        case 6: _t->on_mpSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CVVDOLoaderEmbeddedWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CVVDOLoaderEmbeddedWidget::button_clicked_signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CVVDOLoaderEmbeddedWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CVVDOLoaderEmbeddedWidget::slider_value_signal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CVVDOLoaderEmbeddedWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CVVDOLoaderEmbeddedWidget.offsetsAndSize,
    qt_meta_data_CVVDOLoaderEmbeddedWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CVVDOLoaderEmbeddedWidget_t
, QtPrivate::TypeAndForceComplete<CVVDOLoaderEmbeddedWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *CVVDOLoaderEmbeddedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVVDOLoaderEmbeddedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CVVDOLoaderEmbeddedWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CVVDOLoaderEmbeddedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CVVDOLoaderEmbeddedWidget::button_clicked_signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CVVDOLoaderEmbeddedWidget::slider_value_signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
