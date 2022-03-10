/****************************************************************************
** Meta object code from reading C++ file 'taskbuddy.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../TaskBuddy/taskbuddy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskbuddy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TaskBuddy_t {
    const uint offsetsAndSize[32];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TaskBuddy_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TaskBuddy_t qt_meta_stringdata_TaskBuddy = {
    {
QT_MOC_LITERAL(0, 9), // "TaskBuddy"
QT_MOC_LITERAL(10, 22), // "on_LoginButton_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 26), // "on_CreateAccButton_clicked"
QT_MOC_LITERAL(61, 17), // "on_LogOut_clicked"
QT_MOC_LITERAL(79, 23), // "on_addTLMenuBtn_clicked"
QT_MOC_LITERAL(103, 19), // "on_addTLBtn_clicked"
QT_MOC_LITERAL(123, 25), // "on_addTaskMenuBtn_clicked"
QT_MOC_LITERAL(149, 18), // "on_addTBtn_clicked"
QT_MOC_LITERAL(168, 26), // "on_deleteTLMenuBtn_clicked"
QT_MOC_LITERAL(195, 28), // "on_deleteTaskMenuBtn_clicked"
QT_MOC_LITERAL(224, 23), // "on_showSubTasks_clicked"
QT_MOC_LITERAL(248, 23), // "on_addSTMenuBtn_clicked"
QT_MOC_LITERAL(272, 26), // "on_deleteSTMenuBtn_clicked"
QT_MOC_LITERAL(299, 24), // "on_addSubTaskBtn_clicked"
QT_MOC_LITERAL(324, 26) // "on_showTaskMenuBtn_clicked"

    },
    "TaskBuddy\0on_LoginButton_clicked\0\0"
    "on_CreateAccButton_clicked\0on_LogOut_clicked\0"
    "on_addTLMenuBtn_clicked\0on_addTLBtn_clicked\0"
    "on_addTaskMenuBtn_clicked\0on_addTBtn_clicked\0"
    "on_deleteTLMenuBtn_clicked\0"
    "on_deleteTaskMenuBtn_clicked\0"
    "on_showSubTasks_clicked\0on_addSTMenuBtn_clicked\0"
    "on_deleteSTMenuBtn_clicked\0"
    "on_addSubTaskBtn_clicked\0"
    "on_showTaskMenuBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TaskBuddy[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    0,  102,    2, 0x08,    5 /* Private */,
       7,    0,  103,    2, 0x08,    6 /* Private */,
       8,    0,  104,    2, 0x08,    7 /* Private */,
       9,    0,  105,    2, 0x08,    8 /* Private */,
      10,    0,  106,    2, 0x08,    9 /* Private */,
      11,    0,  107,    2, 0x08,   10 /* Private */,
      12,    0,  108,    2, 0x08,   11 /* Private */,
      13,    0,  109,    2, 0x08,   12 /* Private */,
      14,    0,  110,    2, 0x08,   13 /* Private */,
      15,    0,  111,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TaskBuddy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskBuddy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_LoginButton_clicked(); break;
        case 1: _t->on_CreateAccButton_clicked(); break;
        case 2: _t->on_LogOut_clicked(); break;
        case 3: _t->on_addTLMenuBtn_clicked(); break;
        case 4: _t->on_addTLBtn_clicked(); break;
        case 5: _t->on_addTaskMenuBtn_clicked(); break;
        case 6: _t->on_addTBtn_clicked(); break;
        case 7: _t->on_deleteTLMenuBtn_clicked(); break;
        case 8: _t->on_deleteTaskMenuBtn_clicked(); break;
        case 9: _t->on_showSubTasks_clicked(); break;
        case 10: _t->on_addSTMenuBtn_clicked(); break;
        case 11: _t->on_deleteSTMenuBtn_clicked(); break;
        case 12: _t->on_addSubTaskBtn_clicked(); break;
        case 13: _t->on_showTaskMenuBtn_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject TaskBuddy::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TaskBuddy.offsetsAndSize,
    qt_meta_data_TaskBuddy,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TaskBuddy_t
, QtPrivate::TypeAndForceComplete<TaskBuddy, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TaskBuddy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskBuddy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TaskBuddy.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TaskBuddy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
