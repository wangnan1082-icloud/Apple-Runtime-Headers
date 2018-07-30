//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSString;

@protocol DEDWorkerProtocol <NSObject>
- (void)cancelNotificationForSession:(NSString *)arg1;
- (void)scheduleNotificationForSession:(NSString *)arg1;
- (void)cancelSession:(NSString *)arg1;
- (void)commitSession:(NSString *)arg1;
- (void)adoptFiles:(NSArray *)arg1 forSession:(NSString *)arg2;
- (void)syncSessionStatusWithSession:(NSString *)arg1;
- (void)getSessionStatusWithSession:(NSString *)arg1;
- (void)terminateExtension:(NSString *)arg1 info:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 deferRunUntil:(NSDate *)arg3 session:(NSString *)arg4;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)listAvailableExtensionsForSession:(NSString *)arg1;
- (void)pingSession:(NSString *)arg1;
- (int)transportType;
@end
