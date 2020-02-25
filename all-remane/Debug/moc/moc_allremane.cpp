/****************************************************************************
** Meta object code from reading C++ file 'allremane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../allremane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'allremane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_allremane_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_allremane_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_allremane_t qt_meta_stringdata_allremane = {
    {
QT_MOC_LITERAL(0, 0, 9), // "allremane"
QT_MOC_LITERAL(1, 10, 20), // "openPath_btn_Clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 23), // "addLastName_btn_Clicked"
QT_MOC_LITERAL(4, 56, 18) // "search_btn_Clicked"

    },
    "allremane\0openPath_btn_Clicked\0\0"
    "addLastName_btn_Clicked\0search_btn_Clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_allremane[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void allremane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        allremane *_t = static_cast<allremane *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openPath_btn_Clicked(); break;
        case 1: _t->addLastName_btn_Clicked(); break;
        case 2: _t->search_btn_Clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject allremane::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_allremane.data,
      qt_meta_data_allremane,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *allremane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *allremane::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_allremane.stringdata0))
        return static_cast<void*>(const_cast< allremane*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int allremane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
