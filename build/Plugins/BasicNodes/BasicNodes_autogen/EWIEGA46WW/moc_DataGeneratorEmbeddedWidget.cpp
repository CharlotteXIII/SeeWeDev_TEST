/****************************************************************************
** Meta object code from reading C++ file 'DataGeneratorEmbeddedWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Plugins/BasicNodes/DataGeneratorEmbeddedWidget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataGeneratorEmbeddedWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataGeneratorEmbeddedWidget_t {
    const uint offsetsAndSize[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DataGeneratorEmbeddedWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DataGeneratorEmbeddedWidget_t qt_meta_stringdata_DataGeneratorEmbeddedWidget = {
    {
QT_MOC_LITERAL(0, 27), // "DataGeneratorEmbeddedWidget"
QT_MOC_LITERAL(28, 21), // "widget_clicked_signal"
QT_MOC_LITERAL(50, 0), // ""
QT_MOC_LITERAL(51, 33), // "on_mpComboBox_currentIndexCha..."
QT_MOC_LITERAL(85, 30) // "on_mpPlainTextEdit_textChanged"

    },
    "DataGeneratorEmbeddedWidget\0"
    "widget_clicked_signal\0\0"
    "on_mpComboBox_currentIndexChanged\0"
    "on_mpPlainTextEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataGeneratorEmbeddedWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   33,    2, 0x08,    2 /* Private */,
       4,    0,   36,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void DataGeneratorEmbeddedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataGeneratorEmbeddedWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->widget_clicked_signal(); break;
        case 1: _t->on_mpComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_mpPlainTextEdit_textChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataGeneratorEmbeddedWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataGeneratorEmbeddedWidget::widget_clicked_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DataGeneratorEmbeddedWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DataGeneratorEmbeddedWidget.offsetsAndSize,
    qt_meta_data_DataGeneratorEmbeddedWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_DataGeneratorEmbeddedWidget_t
, QtPrivate::TypeAndForceComplete<DataGeneratorEmbeddedWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *DataGeneratorEmbeddedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataGeneratorEmbeddedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataGeneratorEmbeddedWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DataGeneratorEmbeddedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DataGeneratorEmbeddedWidget::widget_clicked_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
