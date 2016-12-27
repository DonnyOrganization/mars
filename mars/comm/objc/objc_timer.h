// Tencent is pleased to support the open source community by making GAutomator available.
// Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.

// Licensed under the MIT License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT

// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.

//
//  objc_timer.h
//  MicroMessenger
//
//  Created by yerungui  on 12-12-10.
//

#ifndef __MicroMessenger__objc_timer__
#define __MicroMessenger__objc_timer__

#include <sys/types.h>

bool StartAlarm(int64_t _id, int after);
bool StopAlarm(int64_t _id);

#endif /* defined(__MicroMessenger__objc_timer__) */
