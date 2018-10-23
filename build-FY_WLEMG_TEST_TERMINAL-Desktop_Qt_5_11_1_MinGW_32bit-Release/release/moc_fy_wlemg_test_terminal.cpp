/****************************************************************************
** Meta object code from reading C++ file 'fy_wlemg_test_terminal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FY_WLEMG_TEST_TERMINAL/fy_wlemg_test_terminal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fy_wlemg_test_terminal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FY_WLEMG_TEST_TERMINAL_t {
    QByteArrayData data[11];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FY_WLEMG_TEST_TERMINAL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FY_WLEMG_TEST_TERMINAL_t qt_meta_stringdata_FY_WLEMG_TEST_TERMINAL = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FY_WLEMG_TEST_TERMINAL"
QT_MOC_LITERAL(1, 23, 14), // "openSerialPort"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "closeSerialPort"
QT_MOC_LITERAL(4, 55, 9), // "writeData"
QT_MOC_LITERAL(5, 65, 4), // "data"
QT_MOC_LITERAL(6, 70, 8), // "readData"
QT_MOC_LITERAL(7, 79, 25), // "on_PB_OPEN_SERIAL_clicked"
QT_MOC_LITERAL(8, 105, 26), // "on_PB_CLOSE_SERIAL_clicked"
QT_MOC_LITERAL(9, 132, 19), // "on_PB_PRINT_clicked"
QT_MOC_LITERAL(10, 152, 19) // "on_PB_CLEAR_clicked"

    },
    "FY_WLEMG_TEST_TERMINAL\0openSerialPort\0"
    "\0closeSerialPort\0writeData\0data\0"
    "readData\0on_PB_OPEN_SERIAL_clicked\0"
    "on_PB_CLOSE_SERIAL_clicked\0"
    "on_PB_PRINT_clicked\0on_PB_CLEAR_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FY_WLEMG_TEST_TERMINAL[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FY_WLEMG_TEST_TERMINAL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FY_WLEMG_TEST_TERMINAL *_t = static_cast<FY_WLEMG_TEST_TERMINAL *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openSerialPort(); break;
        case 1: _t->closeSerialPort(); break;
        case 2: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->readData(); break;
        case 4: _t->on_PB_OPEN_SERIAL_clicked(); break;
        case 5: _t->on_PB_CLOSE_SERIAL_clicked(); break;
        case 6: _t->on_PB_PRINT_clicked(); break;
        case 7: _t->on_PB_CLEAR_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FY_WLEMG_TEST_TERMINAL::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FY_WLEMG_TEST_TERMINAL.data,
      qt_meta_data_FY_WLEMG_TEST_TERMINAL,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FY_WLEMG_TEST_TERMINAL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FY_WLEMG_TEST_TERMINAL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FY_WLEMG_TEST_TERMINAL.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FY_WLEMG_TEST_TERMINAL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
