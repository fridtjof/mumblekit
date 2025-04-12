// Copyright 2012 The MumbleKit Developers. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

NS_ASSUME_NONNULL_BEGIN
@interface MKAccessControl : NSObject

@property (nonatomic) BOOL inheritACLs;
@property (nonatomic, strong) NSMutableArray * groups;
@property (nonatomic, strong) NSMutableArray * acls;

@end
NS_ASSUME_NONNULL_END
