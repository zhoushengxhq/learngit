/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../admin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Admin_t {
    QByteArrayData data[10];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Admin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Admin_t qt_meta_stringdata_Admin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Admin"
QT_MOC_LITERAL(1, 6, 29), // "on_pushButton_Confirm_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 36), // "on_tableView_Celebrity_double..."
QT_MOC_LITERAL(4, 74, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 86, 5), // "index"
QT_MOC_LITERAL(6, 92, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(7, 116, 28), // "on_pushButton_Revise_clicked"
QT_MOC_LITERAL(8, 145, 34), // "on_tableView_Emperor_doubleCl..."
QT_MOC_LITERAL(9, 180, 23) // "on_pushButton_8_clicked"

    },
    "Admin\0on_pushButton_Confirm_clicked\0"
    "\0on_tableView_Celebrity_doubleClicked\0"
    "QModelIndex\0index\0on_pushButton_3_clicked\0"
    "on_pushButton_Revise_clicked\0"
    "on_tableView_Emperor_doubleClicked\0"
    "on_pushButton_8_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
       8,    1,   50,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void Admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Admin *_t = static_cast<Admin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Confirm_clicked(); break;
        case 1: _t->on_tableView_Celebrity_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_Revise_clicked(); break;
        case 4: _t->on_tableView_Emperor_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_8_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Admin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Admin.data,
      qt_meta_data_Admin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Admin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
