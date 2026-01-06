/****************************************************************************
** Meta object code from reading C++ file 'projecthandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../examples/saveloadproject/saveloadprojectcore/projecthandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projecthandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProjectHandler_t {
    QByteArrayData data[14];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectHandler_t qt_meta_stringdata_ProjectHandler = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProjectHandler"
QT_MOC_LITERAL(1, 15, 22), // "currentProjectModified"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "project_dir"
QT_MOC_LITERAL(4, 51, 11), // "is_modified"
QT_MOC_LITERAL(5, 63, 26), // "recentProjectsListModified"
QT_MOC_LITERAL(6, 90, 8), // "projects"
QT_MOC_LITERAL(7, 99, 11), // "updateNames"
QT_MOC_LITERAL(8, 111, 15), // "canCloseProject"
QT_MOC_LITERAL(9, 127, 18), // "onCreateNewProject"
QT_MOC_LITERAL(10, 146, 21), // "onOpenExistingProject"
QT_MOC_LITERAL(11, 168, 7), // "dirname"
QT_MOC_LITERAL(12, 176, 20), // "onSaveCurrentProject"
QT_MOC_LITERAL(13, 197, 15) // "onSaveProjectAs"

    },
    "ProjectHandler\0currentProjectModified\0"
    "\0project_dir\0is_modified\0"
    "recentProjectsListModified\0projects\0"
    "updateNames\0canCloseProject\0"
    "onCreateNewProject\0onOpenExistingProject\0"
    "dirname\0onSaveCurrentProject\0"
    "onSaveProjectAs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   67,    2, 0x0a /* Public */,
       8,    0,   68,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x0a /* Public */,
      10,    1,   70,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x2a /* Public | MethodCloned */,
      12,    0,   74,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QStringList,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProjectHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentProjectModified((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->recentProjectsListModified((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->updateNames(); break;
        case 3: { bool _r = _t->canCloseProject();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->onCreateNewProject(); break;
        case 5: _t->onOpenExistingProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onOpenExistingProject(); break;
        case 7: _t->onSaveCurrentProject(); break;
        case 8: _t->onSaveProjectAs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProjectHandler::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectHandler::currentProjectModified)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProjectHandler::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectHandler::recentProjectsListModified)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProjectHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ProjectHandler.data,
    qt_meta_data_ProjectHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProjectHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProjectHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ProjectHandler::currentProjectModified(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProjectHandler::recentProjectsListModified(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
