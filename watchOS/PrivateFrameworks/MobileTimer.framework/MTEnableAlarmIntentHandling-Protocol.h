//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTEnableAlarmIntent;

@protocol MTEnableAlarmIntentHandling <NSObject>
- (void)handleMTEnableAlarm:(MTEnableAlarmIntent *)arg1 completion:(void (^)(MTEnableAlarmIntentResponse *))arg2;

@optional
- (void)confirmMTEnableAlarm:(MTEnableAlarmIntent *)arg1 completion:(void (^)(MTEnableAlarmIntentResponse *))arg2;
@end
