/****************************************************************************
** Meta object code from reading C++ file 'NodeDataTimerEmbeddedWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/BasicNodes/NodeDataTimerEmbeddedWidget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeDataTimerEmbeddedWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NodeDataTimerEmbeddedWidget_t {
    const uint offsetsAndSize[26];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_NodeDataTimerEmbeddedWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_NodeDataTimerEmbeddedWidget_t qt_meta_stringdata_NodeDataTimerEmbeddedWidget = {
    {
QT_MOC_LITERAL(0, 27), // "NodeDataTimerEmbeddedWidget"
QT_MOC_LITERAL(28, 14), // "timeout_signal"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 31), // "on_mpSecondSpinbox_valueChanged"
QT_MOC_LITERAL(76, 8), // "duration"
QT_MOC_LITERAL(85, 36), // "on_mpMillisecondSpinbox_value..."
QT_MOC_LITERAL(122, 35), // "on_mpPFComboBox_currentIndexC..."
QT_MOC_LITERAL(158, 5), // "index"
QT_MOC_LITERAL(164, 24), // "on_mpStartButton_clicked"
QT_MOC_LITERAL(189, 23), // "on_mpStopButton_clicked"
QT_MOC_LITERAL(213, 24), // "on_mpResetButton_clicked"
QT_MOC_LITERAL(238, 13), // "on_singleShot"
QT_MOC_LITERAL(252, 10) // "on_timeout"

    },
    "NodeDataTimerEmbeddedWidget\0timeout_signal\0"
    "\0on_mpSecondSpinbox_valueChanged\0"
    "duration\0on_mpMillisecondSpinbox_valueChanged\0"
    "on_mpPFComboBox_currentIndexChanged\0"
    "index\0on_mpStartButton_clicked\0"
    "on_mpStopButton_clicked\0"
    "on_mpResetButton_clicked\0on_singleShot\0"
    "on_timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NodeDataTimerEmbeddedWidget[] = {

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
       1,    0,   68,    2, 0x106,    1 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   69,    2, 0x08,    2 /* Private */,
       5,    1,   72,    2, 0x08,    4 /* Private */,
       6,    1,   75,    2, 0x08,    6 /* Private */,
       8,    0,   78,    2, 0x08,    8 /* Private */,
       9,    0,   79,    2, 0x08,    9 /* Private */,
      10,    0,   80,    2, 0x08,   10 /* Private */,
      11,    0,   81,    2, 0x08,   11 /* Private */,
      12,    0,   82,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NodeDataTimerEmbeddedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodeDataTimerEmbeddedWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeout_signal(); break;
        case 1: _t->on_mpSecondSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_mpMillisecondSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_mpPFComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_mpStartButton_clicked(); break;
        case 5: _t->on_mpStopButton_clicked(); break;
        case 6: _t->on_mpResetButton_clicked(); break;
        case 7: _t->on_singleShot(); break;
        case 8: _t->on_timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NodeDataTimerEmbeddedWidget::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeDataTimerEmbeddedWidget::timeout_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NodeDataTimerEmbeddedWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NodeDataTimerEmbeddedWidget.offsetsAndSize,
    qt_meta_data_NodeDataTimerEmbeddedWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_NodeDataTimerEmbeddedWidget_t
, QtPrivate::TypeAndForceComplete<NodeDataTimerEmbeddedWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *NodeDataTimerEmbeddedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NodeDataTimerEmbeddedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NodeDataTimerEmbeddedWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NodeDataTimerEmbeddedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NodeDataTimerEmbeddedWidget::timeout_signal()const
{
    QMetaObject::activate(const_cast< NodeDataTimerEmbeddedWidget *>(this), &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
