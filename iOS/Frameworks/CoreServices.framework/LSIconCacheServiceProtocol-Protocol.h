//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol LSIconCacheServiceProtocol <NSObject>
- (void)setAlternateIconName:(NSString *)arg1 forIdentifier:(NSString *)arg2 iconsDictionary:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)getAlternateIconNameForIdentifier:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)copyIconBitmapCacheConfigurationWithReply:(void (^)(NSURL *, NSString *, NSString *))arg1;
- (void)clearCachedItemsForBundeID:(NSString *)arg1 validateIconName:(_Bool)arg2 withDictionary:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)getIconBitmapDataWithResourceDirectoryURL:(NSURL *)arg1 boundContainerURL:(NSURL *)arg2 dataContainerURL:(NSURL *)arg3 bundleIdentifier:(NSString *)arg4 iconsDictionary:(NSDictionary *)arg5 preferredIconName:(NSString *)arg6 cacheFileName:(NSString *)arg7 variant:(int)arg8 options:(int)arg9 reply:(void (^)(_Bool, NSData *))arg10;
@end

