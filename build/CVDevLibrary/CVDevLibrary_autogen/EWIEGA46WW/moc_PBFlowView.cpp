/****************************************************************************
** Meta object code from reading C++ file 'PBFlowView.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../CVDevLibrary/PBFlowView.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PBFlowView.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PBFlowView_t {
    const uint offsetsAndSize[18];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PBFlowView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PBFlowView_t qt_meta_stringdata_PBFlowView = {
    {
QT_MOC_LITERAL(0, 10), // "PBFlowView"
QT_MOC_LITERAL(11, 16), // "contextMenuEvent"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(48, 5), // "event"
QT_MOC_LITERAL(54, 13), // "dragMoveEvent"
QT_MOC_LITERAL(68, 15), // "QDragMoveEvent*"
QT_MOC_LITERAL(84, 9), // "dropEvent"
QT_MOC_LITERAL(94, 11) // "QDropEvent*"

    },
    "PBFlowView\0contextMenuEvent\0\0"
    "QContextMenuEvent*\0event\0dragMoveEvent\0"
    "QDragMoveEvent*\0dropEvent\0QDropEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PBFlowView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x09,    1 /* Protected */,
       5,    1,   35,    2, 0x09,    3 /* Protected */,
       7,    1,   38,    2, 0x09,    5 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    4,

       0        // eod
};

void PBFlowView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PBFlowView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contextMenuEvent((*reinterpret_cast< std::add_pointer_t<QContextMenuEvent*>>(_a[1]))); break;
        case 1: _t->dragMoveEvent((*reinterpret_cast< std::add_pointer_t<QDragMoveEvent*>>(_a[1]))); break;
        case 2: _t->dropEvent((*reinterpret_cast< std::add_pointer_t<QDropEvent*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PBFlowView::staticMetaObject = { {
    QMetaObject::SuperData::link<QtNodes::FlowView::staticMetaObject>(),
    qt_meta_stringdata_PBFlowView.offsetsAndSize,
    qt_meta_data_PBFlowView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PBFlowView_t
, QtPrivate::TypeAndForceComplete<PBFlowView, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QContextMenuEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDragMoveEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDropEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *PBFlowView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PBFlowView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PBFlowView.stringdata0))
        return static_cast<void*>(this);
    return QtNodes::FlowView::qt_metacast(_clname);
}

int PBFlowView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtNodes::FlowView::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
