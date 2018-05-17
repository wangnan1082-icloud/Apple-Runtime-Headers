//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSProgress, NSString, NSUserActivity, UIActivityContinuationManager;

@protocol UIActivityContinuationManagerApplicationContext
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (_Bool)activityContinuationManager:(UIActivityContinuationManager *)arg1 continueUserActivity:(NSUserActivity *)arg2;
- (_Bool)activityContinuationManager:(UIActivityContinuationManager *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (_Bool)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(UIActivityContinuationManager *)arg1;
- (NSError *)activityContinuationManagerUserCancelledError:(UIActivityContinuationManager *)arg1;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 hideProgressUIWithCompletion:(void (^)(void))arg2;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 configureProgressUIWithError:(NSError *)arg2;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 displayProgressUI:(NSProgress *)arg2 dismissalHandler:(void (^)(void))arg3;
@end
