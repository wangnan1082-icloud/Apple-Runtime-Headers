//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteManagement/NSObject-Protocol.h>

@class NSDateInterval, NSString, NSURL;

@protocol RMManagementStateServerInterface <NSObject>
- (void)deleteAllWebApplicationHistory:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteWebHistoryDuringInterval:(NSDateInterval *)arg1 webApplication:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteWebHistoryForDomain:(NSString *)arg1 webApplication:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteWebHistoryForURL:(NSURL *)arg1 webApplication:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)shouldRequestMoreTimeWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)screenTimeSyncStateWithCompletionHandler:(void (^)(long long, NSError *))arg1;
- (void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)screenTimeStateWithCompletionHandler:(void (^)(long long, NSError *))arg1;
@end

