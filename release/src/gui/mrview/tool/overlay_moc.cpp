/****************************************************************************
** Meta object code from reading C++ file 'overlay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/mrview/tool/overlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MR__GUI__MRView__Tool__Overlay_t {
    QByteArrayData data[18];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MR__GUI__MRView__Tool__Overlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MR__GUI__MRView__Tool__Overlay_t qt_meta_stringdata_MR__GUI__MRView__Tool__Overlay = {
    {
QT_MOC_LITERAL(0, 0, 30), // "MR::GUI::MRView::Tool::Overlay"
QT_MOC_LITERAL(1, 31, 15), // "image_open_slot"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "image_close_slot"
QT_MOC_LITERAL(4, 65, 13), // "hide_all_slot"
QT_MOC_LITERAL(5, 79, 17), // "toggle_shown_slot"
QT_MOC_LITERAL(6, 97, 22), // "selection_changed_slot"
QT_MOC_LITERAL(7, 120, 14), // "QItemSelection"
QT_MOC_LITERAL(8, 135, 14), // "volume_changed"
QT_MOC_LITERAL(9, 150, 11), // "update_slot"
QT_MOC_LITERAL(10, 162, 6), // "unused"
QT_MOC_LITERAL(11, 169, 14), // "values_changed"
QT_MOC_LITERAL(12, 184, 23), // "upper_threshold_changed"
QT_MOC_LITERAL(13, 208, 23), // "lower_threshold_changed"
QT_MOC_LITERAL(14, 232, 29), // "upper_threshold_value_changed"
QT_MOC_LITERAL(15, 262, 29), // "lower_threshold_value_changed"
QT_MOC_LITERAL(16, 292, 15), // "opacity_changed"
QT_MOC_LITERAL(17, 308, 19) // "interpolate_changed"

    },
    "MR::GUI::MRView::Tool::Overlay\0"
    "image_open_slot\0\0image_close_slot\0"
    "hide_all_slot\0toggle_shown_slot\0"
    "selection_changed_slot\0QItemSelection\0"
    "volume_changed\0update_slot\0unused\0"
    "values_changed\0upper_threshold_changed\0"
    "lower_threshold_changed\0"
    "upper_threshold_value_changed\0"
    "lower_threshold_value_changed\0"
    "opacity_changed\0interpolate_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MR__GUI__MRView__Tool__Overlay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    2,   87,    2, 0x08 /* Private */,
       6,    2,   92,    2, 0x08 /* Private */,
       8,    1,   97,    2, 0x08 /* Private */,
       9,    1,  100,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    1,  112,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void MR::GUI::MRView::Tool::Overlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Overlay *_t = static_cast<Overlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->image_open_slot(); break;
        case 1: _t->image_close_slot(); break;
        case 2: _t->hide_all_slot(); break;
        case 3: _t->toggle_shown_slot((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->selection_changed_slot((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 5: _t->volume_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->update_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->values_changed(); break;
        case 8: _t->upper_threshold_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->lower_threshold_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->upper_threshold_value_changed(); break;
        case 11: _t->lower_threshold_value_changed(); break;
        case 12: _t->opacity_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->interpolate_changed(); break;
        default: ;
        }
    }
}

const QMetaObject MR::GUI::MRView::Tool::Overlay::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__Overlay.data,
      qt_meta_data_MR__GUI__MRView__Tool__Overlay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MR::GUI::MRView::Tool::Overlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::Overlay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__Overlay.stringdata0))
        return static_cast<void*>(const_cast< Overlay*>(this));
    if (!strcmp(_clname, "ColourMapButtonObserver"))
        return static_cast< ColourMapButtonObserver*>(const_cast< Overlay*>(this));
    if (!strcmp(_clname, "DisplayableVisitor"))
        return static_cast< DisplayableVisitor*>(const_cast< Overlay*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::Overlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
