/****************************************************************************
** Meta object code from reading C++ file 'actionmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../examples/saveloadproject/saveloadprojectcore/actionmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actionmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActionManager_t {
    QByteArrayData data[7];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActionManager_t qt_meta_stringdata_ActionManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ActionManager"
QT_MOC_LITERAL(1, 14, 23), // "createNewProjectRequest"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "openExistingProjectRequest"
QT_MOC_LITERAL(4, 66, 7), // "dirname"
QT_MOC_LITERAL(5, 74, 25), // "saveCurrentProjectRequest"
QT_MOC_LITERAL(6, 100, 20) // "saveProjectAsRequest"

    },
    "ActionManager\0createNewProjectRequest\0"
    "\0openExistingProjectRequest\0dirname\0"
    "saveCurrentProjectRequest\0"
    "saveProjectAsRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,
       6,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ActionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActionManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createNewProjectRequest(); break;
        case 1: _t->openExistingProjectRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->saveCurrentProjectRequest(); break;
        case 3: _t->saveProjectAsRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActionManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionManager::createNewProjectRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActionManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionManager::openExistingProjectRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActionManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionManager::saveCurrentProjectRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ActionManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionManager::saveProjectAsRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ActionManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ActionManager.data,
    qt_meta_data_ActionManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActionManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ActionManager::createNewProjectRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActionManager::openExistingProjectRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ActionManager::saveCurrentProjectRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ActionManager::saveProjectAsRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
