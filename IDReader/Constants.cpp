﻿#include "Constants.h"

#include <QString>

namespace Constants {
    const int CODE_READ_READY = 10000;
    const QString INFO_READ_READY = "开始刷卡";
}

namespace Urls {
    const QString SIGN_IN             = "/signIn";
    const QString SIGN_IN_WITH_FACE   = "/signInWithFace";
    const QString MANUAL_SIGN_IN      = "/invigilatorSignIn";
    const QString INITIALIZE_ROOM     = "/initializeRoom";
    const QString GET_ROOM_ENROLLMENT = "/getRoomEnrollment";
    const QString TIMESTAMP           = "/timestamp";
    const QString UPLOAD_PHOTO        = "/uploadPhoto";
}
