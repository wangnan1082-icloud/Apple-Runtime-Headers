//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, OSActivityStream, OSLogDevice;

@protocol OSDeviceDelegate <NSObject>
- (BOOL)activityStream:(OSActivityStream *)arg1 deviceUDID:(NSString *)arg2 deviceID:(OSLogDevice *)arg3 status:(long long)arg4 error:(NSError *)arg5;
@end
