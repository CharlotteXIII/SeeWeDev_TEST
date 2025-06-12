/****************************************************************************
** Meta object code from reading C++ file 'CVCameraEmbeddedWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/BasicNodes/CVCameraEmbeddedWidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CVCameraEmbeddedWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CVCameraEmbeddedWidget_t {
    const uint offsetsAndSize[16];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CVCameraEmbeddedWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CVCameraEmbeddedWidget_t qt_meta_stringdata_CVCameraEmbeddedWidget = {
    {
QT_MOC_LITERAL(0, 22), // "CVCameraEmbeddedWidget"
QT_MOC_LITERAL(23, 21), // "button_clicked_signal"
QT_MOC_LITERAL(45, 0), // ""
QT_MOC_LITERAL(46, 6), // "button"
QT_MOC_LITERAL(53, 21), // "camera_status_changed"
QT_MOC_LITERAL(75, 24), // "on_mpStartButton_clicked"
QT_MOC_LITERAL(100, 23), // "on_mpStopButton_clicked"
QT_MOC_LITERAL(124, 41) // "on_mpCameraIDComboBox_current..."

    },
    "CVCameraEmbeddedWidget\0button_clicked_signal\0"
    "\0button\0camera_status_changed\0"
    "on_mpStartButton_clicked\0"
    "on_mpStopButton_clicked\0"
    "on_mpCameraIDComboBox_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CVCameraEmbeddedWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   47,    2, 0x0a,    3 /* Public */,
       5,    0,   50,    2, 0x0a,    5 /* Public */,
       6,    0,   51,    2, 0x0a,    6 /* Public */,
       7,    1,   52,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void CVCameraEmbeddedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CVCameraEmbeddedWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->button_clicked_signal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->camera_status_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->on_mpStartButton_clicked(); break;
        case 3: _t->on_mpStopButton_clicked(); break;
        case 4: _t->on_mpCameraIDComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CVCameraEmbeddedWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CVCameraEmbeddedWidget::button_clicked_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CVCameraEmbeddedWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CVCameraEmbeddedWidget.offsetsAndSize,
    qt_meta_data_CVCameraEmbeddedWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CVCameraEmbeddedWidget_t
, QtPrivate::TypeAndForceComplete<CVCameraEmbeddedWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *CVCameraEmbeddedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CVCameraEmbeddedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CVCameraEmbeddedWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CVCameraEmbeddedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CVCameraEmbeddedWidget::button_clicked_signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
