// Copyright (c) 2016 Intel Corporation. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.
//
// This file can be generated automatically.

#include "gen/nan__another_number.h"
#include "gen/nan__number.h"
#include "gen/nan__ordinal.h"
#include "gen/nan__yet_another_number.h"

void initModule(v8::Local<v8::Object> exports) {
  Nanordinal::Init(exports);
  Nannumber::Init(exports);
  Nananother_number::Init(exports);
  Nanyet_another_number::Init(exports);
}

NODE_MODULE(testerAddon, initModule);
