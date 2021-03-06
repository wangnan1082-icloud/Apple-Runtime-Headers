//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NCNotificationExtensionCache;

@interface NCNotificationExtensionsManager : NSObject
{
    NCNotificationExtensionCache *_extensionsCache;
    id _extensionsDiscoveryToken;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) id extensionsDiscoveryToken; // @synthesize extensionsDiscoveryToken=_extensionsDiscoveryToken;
@property(retain, nonatomic) NCNotificationExtensionCache *extensionsCache; // @synthesize extensionsCache=_extensionsCache;
- (void).cxx_destruct;
- (void)_stopMatchingExtensions;
- (void)_beginMatchingExtensions;
- (id)_matchingAttributes;
- (id)extensionForNotificationRequest:(id)arg1;
- (id)init;

@end

