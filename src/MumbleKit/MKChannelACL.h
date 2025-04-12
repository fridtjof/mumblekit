// Copyright 2012 The MumbleKit Developers. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#import <MumbleKit/MKPermission.h>

NS_ASSUME_NONNULL_BEGIN
@interface MKChannelACL : NSObject

@property (nonatomic) BOOL applyHere;
@property (nonatomic) BOOL applySubs;
@property (nonatomic) BOOL inherited;
@property (nonatomic) NSInteger userID;
@property (nonatomic, strong, nullable) NSString * group;
@property (nonatomic) MKPermission grant;
@property (nonatomic) MKPermission deny;
@property (nonatomic, readonly) BOOL hasUserID;

@end
NS_ASSUME_NONNULL_END
