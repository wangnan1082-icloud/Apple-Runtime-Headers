//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDictionary, NSString, NSURL;

@protocol RPBroadcastActivityCommunicationHostProtocol
- (oneway void)presentationInfoWithCompletion:(void (^)(long long, struct CGRect, unsigned long long))arg1;
- (oneway void)extensionDidFinishWithLaunchURL:(NSURL *)arg1 broadcastURL:(NSURL *)arg2 extensionBundleID:(NSString *)arg3 broadcastConfigurationData:(NSData *)arg4 userInfo:(NSDictionary *)arg5 cancelled:(_Bool)arg6;
- (oneway void)extensionDidFinishWithLaunchURL:(NSURL *)arg1 broadcastURL:(NSURL *)arg2 extensionBundleID:(NSString *)arg3 cancelled:(_Bool)arg4;
@end
