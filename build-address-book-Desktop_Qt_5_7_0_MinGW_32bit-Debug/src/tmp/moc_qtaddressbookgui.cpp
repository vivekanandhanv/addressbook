/****************************************************************************
** Meta object code from reading C++ file 'qtaddressbookgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../address-book/src/qtaddressbookgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtaddressbookgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAddressBookGUI_t {
    QByteArrayData data[6];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAddressBookGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAddressBookGUI_t qt_meta_stringdata_QtAddressBookGUI = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QtAddressBookGUI"
QT_MOC_LITERAL(1, 17, 17), // "pullDataFromModel"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "addContact"
QT_MOC_LITERAL(4, 47, 13), // "deleteContact"
QT_MOC_LITERAL(5, 61, 11) // "editContact"

    },
    "QtAddressBookGUI\0pullDataFromModel\0\0"
    "addContact\0deleteContact\0editContact"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAddressBookGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtAddressBookGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtAddressBookGUI *_t = static_cast<QtAddressBookGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pullDataFromModel(); break;
        case 1: _t->addContact(); break;
        case 2: _t->deleteContact(); break;
        case 3: _t->editContact(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtAddressBookGUI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtAddressBookGUI::pullDataFromModel)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtAddressBookGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtAddressBookGUI.data,
      qt_meta_data_QtAddressBookGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtAddressBookGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAddressBookGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtAddressBookGUI.stringdata0))
        return static_cast<void*>(const_cast< QtAddressBookGUI*>(this));
    if (!strcmp(_clname, "AddressBookView"))
        return static_cast< AddressBookView*>(const_cast< QtAddressBookGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtAddressBookGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void QtAddressBookGUI::pullDataFromModel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
