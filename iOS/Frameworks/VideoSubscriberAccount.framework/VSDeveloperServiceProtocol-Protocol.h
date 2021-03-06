//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSString, VSIdentityProvider;

@protocol VSDeveloperServiceProtocol <NSObject>
- (void)removeDeveloperIdentityProviderWithUniqueID:(NSString *)arg1 completionHandler:(void (^)(VSFailable *))arg2;
- (void)updateExistingDeveloperIdentityProvider:(VSIdentityProvider *)arg1 completionHandler:(void (^)(VSFailable *))arg2;
- (void)addDeveloperIdentityProvider:(VSIdentityProvider *)arg1 completionHandler:(void (^)(VSFailable *))arg2;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(void (^)(VSFailable *))arg1;
@end

