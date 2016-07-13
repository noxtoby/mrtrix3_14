/****************************************************************************
** Meta object code from reading C++ file 'track_scalar_file.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/gui/mrview/tool/tractography/track_scalar_file.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'track_scalar_file.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MR__GUI__MRView__Tool__TrackScalarFile_t {
    QByteArrayData data[14];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MR__GUI__MRView__Tool__TrackScalarFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MR__GUI__MRView__Tool__TrackScalarFile_t qt_meta_stringdata_MR__GUI__MRView__Tool__TrackScalarFile = {
    {
QT_MOC_LITERAL(0, 0, 38), // "MR::GUI::MRView::Tool::TrackS..."
QT_MOC_LITERAL(1, 39, 27), // "open_track_scalar_file_slot"
QT_MOC_LITERAL(2, 67, 0), // ""
QT_MOC_LITERAL(3, 68, 20), // "show_colour_bar_slot"
QT_MOC_LITERAL(4, 89, 21), // "select_colourmap_slot"
QT_MOC_LITERAL(5, 111, 19), // "on_set_scaling_slot"
QT_MOC_LITERAL(6, 131, 23), // "threshold_lower_changed"
QT_MOC_LITERAL(7, 155, 6), // "unused"
QT_MOC_LITERAL(8, 162, 23), // "threshold_upper_changed"
QT_MOC_LITERAL(9, 186, 29), // "threshold_lower_value_changed"
QT_MOC_LITERAL(10, 216, 29), // "threshold_upper_value_changed"
QT_MOC_LITERAL(11, 246, 21), // "invert_colourmap_slot"
QT_MOC_LITERAL(12, 268, 28), // "scalarfile_by_direction_slot"
QT_MOC_LITERAL(13, 297, 20) // "reset_intensity_slot"

    },
    "MR::GUI::MRView::Tool::TrackScalarFile\0"
    "open_track_scalar_file_slot\0\0"
    "show_colour_bar_slot\0select_colourmap_slot\0"
    "on_set_scaling_slot\0threshold_lower_changed\0"
    "unused\0threshold_upper_changed\0"
    "threshold_lower_value_changed\0"
    "threshold_upper_value_changed\0"
    "invert_colourmap_slot\0"
    "scalarfile_by_direction_slot\0"
    "reset_intensity_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MR__GUI__MRView__Tool__TrackScalarFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MR::GUI::MRView::Tool::TrackScalarFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrackScalarFile *_t = static_cast<TrackScalarFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->open_track_scalar_file_slot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->show_colour_bar_slot(); break;
        case 2: _t->select_colourmap_slot(); break;
        case 3: _t->on_set_scaling_slot(); break;
        case 4: _t->threshold_lower_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->threshold_upper_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->threshold_lower_value_changed(); break;
        case 7: _t->threshold_upper_value_changed(); break;
        case 8: _t->invert_colourmap_slot(); break;
        case 9: _t->scalarfile_by_direction_slot(); break;
        case 10: _t->reset_intensity_slot(); break;
        default: ;
        }
    }
}

const QMetaObject MR::GUI::MRView::Tool::TrackScalarFile::staticMetaObject = {
    { &Base::staticMetaObject, qt_meta_stringdata_MR__GUI__MRView__Tool__TrackScalarFile.data,
      qt_meta_data_MR__GUI__MRView__Tool__TrackScalarFile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MR::GUI::MRView::Tool::TrackScalarFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MR::GUI::MRView::Tool::TrackScalarFile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MR__GUI__MRView__Tool__TrackScalarFile.stringdata0))
        return static_cast<void*>(const_cast< TrackScalarFile*>(this));
    if (!strcmp(_clname, "DisplayableVisitor"))
        return static_cast< DisplayableVisitor*>(const_cast< TrackScalarFile*>(this));
    return Base::qt_metacast(_clname);
}

int MR::GUI::MRView::Tool::TrackScalarFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
