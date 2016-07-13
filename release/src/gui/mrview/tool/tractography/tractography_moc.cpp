/****************************************************************************
** Meta object code from reading C++ file 'tractography.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/gui/mrview/tool/tractography/tractography.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tractography.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MR__GUI__MRView__Tool__Tractography_t {
    QByteArrayData data[24];
    char stringdata0[458];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MR__GUI__MRView__Tool__Tractography_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MR__GUI__MRView__Tool__Tractography_t qt_meta_stringdata_MR__GUI__MRView__Tool__Tractography = {
    {
QT_MOC_LITERAL(0, 0, 35), // "MR::GUI::MRView::Tool::Tracto..."
QT_MOC_LITERAL(1, 36, 20), // "tractogram_open_slot"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 21), // "tractogram_close_slot"
QT_MOC_LITERAL(4, 80, 17), // "toggle_shown_slot"
QT_MOC_LITERAL(5, 98, 13), // "hide_all_slot"
QT_MOC_LITERAL(6, 112, 22), // "on_slab_thickness_slot"
QT_MOC_LITERAL(7, 135, 20), // "on_crop_to_slab_slot"
QT_MOC_LITERAL(8, 156, 10), // "is_checked"
QT_MOC_LITERAL(9, 167, 20), // "on_use_lighting_slot"
QT_MOC_LITERAL(10, 188, 20), // "on_lighting_settings"
QT_MOC_LITERAL(11, 209, 12), // "opacity_slot"
QT_MOC_LITERAL(12, 222, 7), // "opacity"
QT_MOC_LITERAL(13, 230, 19), // "line_thickness_slot"
QT_MOC_LITERAL(14, 250, 9), // "thickness"
QT_MOC_LITERAL(15, 260, 21), // "right_click_menu_slot"
QT_MOC_LITERAL(16, 282, 3), // "pos"
QT_MOC_LITERAL(17, 286, 30), // "colour_track_by_direction_slot"
QT_MOC_LITERAL(18, 317, 25), // "colour_track_by_ends_slot"
QT_MOC_LITERAL(19, 343, 21), // "set_track_colour_slot"
QT_MOC_LITERAL(20, 365, 27), // "randomise_track_colour_slot"
QT_MOC_LITERAL(21, 393, 26), // "colour_by_scalar_file_slot"
QT_MOC_LITERAL(22, 420, 22), // "selection_changed_slot"
QT_MOC_LITERAL(23, 443, 14) // "QItemSelection"

    },
    "MR::GUI::MRView::Tool::Tractography\0"
    "tractogram_open_slot\0\0tractogram_close_slot\0"
    "toggle_shown_slot\0hide_all_slot\0"
    "on_slab_thickness_slot\0on_crop_to_slab_slot\0"
    "is_checked\0on_use_lighting_slot\0"
    "on_lighting_settings\0opacity_slot\0"
    "opacity\0line_thickness_slot\0thickness\0"
    "right_click_menu_slot\0pos\0"
    "colour_track_by_direction_slot\0"
    "colour_track_by_ends_slot\0"
    "set_track_colour_slot\0randomise_track_colour_slot\0"
    "colour_by_scalar_file_slot\0"
    "selection_changed_slot\0QItemSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MR__GUI__MRView__Tool__Tractography[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    2,  101,    2, 0x08 /* Private */,
       5,    0,  106,    2, 0x08 /* Private */,
       6,    0,  107,    2, 0x08 /* Private */,
       7,    1,  108,    2, 0x08 /* Private */,
       9,    1,  111,    2, 0x08 /* Private */,
      10,    0,  114,    2, 0x08 /* Private */,
      11,    1,  115,    2, 0x08 /* Private */,
      13,    1,  118,    2, 0x08 /* Private */,
      15,    1,  121,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,
      21,    0,  128,    2, 0x08 /* Private */,
      22,    2,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23,    2,    2,

       0        // eod
};

void MR::GUI::MRView::Tool::Tractography::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tractography *_t = static_cast<Tractography *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tractogram_open_slot(); break;
        case 1: _t->tractogram_close_slot(); break;
        case 2: _t->toggle_shown_slot((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->hide_all_slot(); break;
        case 4: _t->on_slab_thickness_slot(); break;
        case 5: _t->on_crop_to_slab_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_use_lighting_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_lighting_settings(); break;
        case 8: _t->opacity_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->line_thickness_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->right_click_menu_slot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->colour_track_by_direction_slot(); break;
        case 12: _t->colour_track_by_ends_slot(); break;
        case 13: _t->set_track_colour_slot(); break;
        case 14: _t->randomise_track_colour_slot(); break;
        case 15: _t->colour_by_scalar_file_slot(); break;
        case 16: _t->selection_changed_slot((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject MR::GUI::MRView::Tool::Tractography::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__Tractography.data,
      qt_meta_data_MR__GUI__MRView__Tool__Tractography,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MR::GUI::MRView::Tool::Tractography::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::Tractography::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__Tractography.stringdata0))
        return static_cast<void*>(const_cast< Tractography*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::Tractography::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
