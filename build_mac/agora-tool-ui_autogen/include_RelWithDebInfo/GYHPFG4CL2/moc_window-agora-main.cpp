/****************************************************************************
** Meta object code from reading C++ file 'window-agora-main.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/forms/window-agora-main.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-agora-main.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DisplayResizeEvent_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisplayResizeEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisplayResizeEvent_t qt_meta_stringdata_DisplayResizeEvent = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DisplayResizeEvent"
QT_MOC_LITERAL(1, 19, 14), // "DisplayResized"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "DisplayResizeEvent\0DisplayResized\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayResizeEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void DisplayResizeEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisplayResizeEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DisplayResized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DisplayResizeEvent::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayResizeEvent::DisplayResized)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DisplayResizeEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DisplayResizeEvent.data,
    qt_meta_data_DisplayResizeEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisplayResizeEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayResizeEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayResizeEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DisplayResizeEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DisplayResizeEvent::DisplayResized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ACloseEvent_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ACloseEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ACloseEvent_t qt_meta_stringdata_ACloseEvent = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ACloseEvent"
QT_MOC_LITERAL(1, 12, 10), // "AgoraClose"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "ACloseEvent\0AgoraClose\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ACloseEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ACloseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ACloseEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AgoraClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ACloseEvent::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ACloseEvent::AgoraClose)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ACloseEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ACloseEvent.data,
    qt_meta_data_ACloseEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ACloseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ACloseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ACloseEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ACloseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ACloseEvent::AgoraClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AgoraBasic_t {
    QByteArrayData data[29];
    char stringdata0[397];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AgoraBasic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AgoraBasic_t qt_meta_stringdata_AgoraBasic = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AgoraBasic"
QT_MOC_LITERAL(1, 11, 14), // "DisplayCreated"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "AgoraBasic*"
QT_MOC_LITERAL(4, 39, 5), // "agora"
QT_MOC_LITERAL(5, 45, 28), // "on_agoraSteramButton_clicked"
QT_MOC_LITERAL(6, 74, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(7, 100, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(8, 122, 25), // "onJoinChannelSuccess_slot"
QT_MOC_LITERAL(9, 148, 11), // "const char*"
QT_MOC_LITERAL(10, 160, 7), // "channel"
QT_MOC_LITERAL(11, 168, 3), // "uid"
QT_MOC_LITERAL(12, 172, 7), // "elapsed"
QT_MOC_LITERAL(13, 180, 19), // "onLeaveChannel_slot"
QT_MOC_LITERAL(14, 200, 8), // "RtcStats"
QT_MOC_LITERAL(15, 209, 5), // "stats"
QT_MOC_LITERAL(16, 215, 12), // "onError_slot"
QT_MOC_LITERAL(17, 228, 3), // "err"
QT_MOC_LITERAL(18, 232, 3), // "msg"
QT_MOC_LITERAL(19, 236, 17), // "onUserJoined_slot"
QT_MOC_LITERAL(20, 254, 5), // "uid_t"
QT_MOC_LITERAL(21, 260, 18), // "onUserOffline_slot"
QT_MOC_LITERAL(22, 279, 6), // "reason"
QT_MOC_LITERAL(23, 286, 30), // "onFirstRemoteVideoDecoded_slot"
QT_MOC_LITERAL(24, 317, 5), // "width"
QT_MOC_LITERAL(25, 323, 6), // "height"
QT_MOC_LITERAL(26, 330, 29), // "onConnectionStateChanged_slot"
QT_MOC_LITERAL(27, 360, 5), // "state"
QT_MOC_LITERAL(28, 366, 30) // "onRemoteVideoStateChanged_slot"

    },
    "AgoraBasic\0DisplayCreated\0\0AgoraBasic*\0"
    "agora\0on_agoraSteramButton_clicked\0"
    "on_settingsButton_clicked\0"
    "on_exitButton_clicked\0onJoinChannelSuccess_slot\0"
    "const char*\0channel\0uid\0elapsed\0"
    "onLeaveChannel_slot\0RtcStats\0stats\0"
    "onError_slot\0err\0msg\0onUserJoined_slot\0"
    "uid_t\0onUserOffline_slot\0reason\0"
    "onFirstRemoteVideoDecoded_slot\0width\0"
    "height\0onConnectionStateChanged_slot\0"
    "state\0onRemoteVideoStateChanged_slot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AgoraBasic[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    3,   80,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,
      16,    2,   90,    2, 0x0a /* Public */,
      19,    2,   95,    2, 0x0a /* Public */,
      21,    2,  100,    2, 0x0a /* Public */,
      23,    4,  105,    2, 0x0a /* Public */,
      26,    2,  114,    2, 0x0a /* Public */,
      28,    4,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::UInt, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,   17,   18,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int,   11,   12,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int,   11,   22,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   24,   25,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   27,   22,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   27,   22,   12,

       0        // eod
};

void AgoraBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AgoraBasic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DisplayCreated((*reinterpret_cast< AgoraBasic*(*)>(_a[1]))); break;
        case 1: _t->on_agoraSteramButton_clicked(); break;
        case 2: _t->on_settingsButton_clicked(); break;
        case 3: _t->on_exitButton_clicked(); break;
        case 4: _t->onJoinChannelSuccess_slot((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->onLeaveChannel_slot((*reinterpret_cast< const RtcStats(*)>(_a[1]))); break;
        case 6: _t->onError_slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 7: _t->onUserJoined_slot((*reinterpret_cast< uid_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->onUserOffline_slot((*reinterpret_cast< uid_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->onFirstRemoteVideoDecoded_slot((*reinterpret_cast< uid_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 10: _t->onConnectionStateChanged_slot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->onRemoteVideoStateChanged_slot((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AgoraBasic* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RtcStats >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AgoraBasic::*)(AgoraBasic * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AgoraBasic::DisplayCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AgoraBasic::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_AgoraBasic.data,
    qt_meta_data_AgoraBasic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AgoraBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AgoraBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AgoraBasic.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AgoraBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AgoraBasic::DisplayCreated(AgoraBasic * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
