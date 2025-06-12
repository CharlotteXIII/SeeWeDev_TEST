/****************************************************************************
** Meta object code from reading C++ file 'FlowView.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../NodeEditor/include/nodes/internal/FlowView.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlowView.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtNodes__FlowView_t {
    const uint offsetsAndSize[22];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QtNodes__FlowView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QtNodes__FlowView_t qt_meta_stringdata_QtNodes__FlowView = {
    {
QT_MOC_LITERAL(0, 17), // "QtNodes::FlowView"
QT_MOC_LITERAL(18, 7), // "scaleUp"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 9), // "scaleDown"
QT_MOC_LITERAL(37, 19), // "deleteSelectedNodes"
QT_MOC_LITERAL(57, 17), // "copySelectedNodes"
QT_MOC_LITERAL(75, 16), // "cutSelectedNodes"
QT_MOC_LITERAL(92, 10), // "pasteNodes"
QT_MOC_LITERAL(103, 9), // "addAnchor"
QT_MOC_LITERAL(113, 5), // "index"
QT_MOC_LITERAL(119, 10) // "goToAnchor"

    },
    "QtNodes::FlowView\0scaleUp\0\0scaleDown\0"
    "deleteSelectedNodes\0copySelectedNodes\0"
    "cutSelectedNodes\0pasteNodes\0addAnchor\0"
    "index\0goToAnchor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtNodes__FlowView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    0,   65,    2, 0x0a,    4 /* Public */,
       6,    0,   66,    2, 0x0a,    5 /* Public */,
       7,    0,   67,    2, 0x0a,    6 /* Public */,
       8,    1,   68,    2, 0x0a,    7 /* Public */,
      10,    1,   71,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void QtNodes::FlowView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlowView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scaleUp(); break;
        case 1: _t->scaleDown(); break;
        case 2: _t->deleteSelectedNodes(); break;
        case 3: _t->copySelectedNodes(); break;
        case 4: _t->cutSelectedNodes(); break;
        case 5: _t->pasteNodes(); break;
        case 6: _t->addAnchor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->goToAnchor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtNodes::FlowView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_QtNodes__FlowView.offsetsAndSize,
    qt_meta_data_QtNodes__FlowView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QtNodes__FlowView_t
, QtPrivate::TypeAndForceComplete<FlowView, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *QtNodes::FlowView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtNodes::FlowView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtNodes__FlowView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int QtNodes::FlowView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
