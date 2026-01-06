/****************************************************************************
** Meta object code from reading C++ file 'graphicsscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../examples/nodeeditor/nodeeditorcore/graphicsscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphicsscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NodeEditor__GraphicsScene_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NodeEditor__GraphicsScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NodeEditor__GraphicsScene_t qt_meta_stringdata_NodeEditor__GraphicsScene = {
    {
QT_MOC_LITERAL(0, 0, 25), // "NodeEditor::GraphicsScene"
QT_MOC_LITERAL(1, 26, 31), // "connectableItemSelectionChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 16), // "ConnectableItem*"
QT_MOC_LITERAL(4, 76, 4), // "item"
QT_MOC_LITERAL(5, 81, 19), // "onConnectionRequest"
QT_MOC_LITERAL(6, 101, 16), // "ConnectableView*"
QT_MOC_LITERAL(7, 118, 9), // "childView"
QT_MOC_LITERAL(8, 128, 10), // "parentView"
QT_MOC_LITERAL(9, 139, 18) // "onSelectionChanged"

    },
    "NodeEditor::GraphicsScene\0"
    "connectableItemSelectionChanged\0\0"
    "ConnectableItem*\0item\0onConnectionRequest\0"
    "ConnectableView*\0childView\0parentView\0"
    "onSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NodeEditor__GraphicsScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   32,    2, 0x08 /* Private */,
       9,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void,

       0        // eod
};

void NodeEditor::GraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphicsScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectableItemSelectionChanged((*reinterpret_cast< ConnectableItem*(*)>(_a[1]))); break;
        case 1: _t->onConnectionRequest((*reinterpret_cast< ConnectableView*(*)>(_a[1])),(*reinterpret_cast< ConnectableView*(*)>(_a[2]))); break;
        case 2: _t->onSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphicsScene::*)(ConnectableItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicsScene::connectableItemSelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NodeEditor::GraphicsScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_NodeEditor__GraphicsScene.data,
    qt_meta_data_NodeEditor__GraphicsScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NodeEditor::GraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NodeEditor::GraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NodeEditor__GraphicsScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int NodeEditor::GraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void NodeEditor::GraphicsScene::connectableItemSelectionChanged(ConnectableItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
