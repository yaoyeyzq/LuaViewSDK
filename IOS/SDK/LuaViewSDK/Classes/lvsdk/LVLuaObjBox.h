/**
  * Created by LuaView.
  * Copyright (c) 2017, Alibaba Group. All rights reserved.
  *
  * This source code is licensed under the MIT.
  * For the full copyright and license information,please view the LICENSE file in the root directory of this source tree.
  */

#import <Foundation/Foundation.h>
#import "LView.h"

@interface LVLuaObjBox : NSObject

- (id) init:(lua_State*)L stackID:(int) stackID;

- (void) setProtocols:(NSArray*) protocols;

@end
