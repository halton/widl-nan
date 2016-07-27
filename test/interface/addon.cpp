// Copyright (c) 2016 Intel Corporation. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.
//
// TODO: This file can be generated automatically.

#include <node.h>
#include <nan.h>

#include <sstream>
#include <iostream>
#include <iomanip>
#include <thread>
#include <algorithm>
#include <chrono>
#include <tuple>

#include "nan__dimensions.h"
#include "nan__button.h"
#include "nan__point.h"
#include "nan__circle.h"
#include "nan__painter.h"

void initModule(v8::Local<v8::Object> exports) {
  NanDimensions::Init(exports);
  NanButton::Init(exports);
  NanPoint::Init(exports);
  NanCircle::Init(exports);
  NanPainter::Init(exports);
}

NODE_MODULE(testerAddon, initModule);
