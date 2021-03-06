//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/WBSSiteMetadataManager.h>

@class _SFFaviconProvider, _SFPasswordTouchIconCache, _SFTouchIconCache;

@interface _SFSiteMetadataManager : WBSSiteMetadataManager
{
    _SFFaviconProvider *_faviconProvider;
    _SFPasswordTouchIconCache *_passwordTouchIconCache;
    _SFTouchIconCache *_touchIconCache;
}

+ (id)sharedSiteMetadataManager;
+ (void)setSharedSiteMetadataManagerProvider:(id)arg1;
+ (void)setSharedSiteMetadataManager:(id)arg1;
@property(readonly, nonatomic) _SFTouchIconCache *touchIconCache; // @synthesize touchIconCache=_touchIconCache;
@property(readonly, nonatomic) _SFPasswordTouchIconCache *passwordTouchIconCache; // @synthesize passwordTouchIconCache=_passwordTouchIconCache;
@property(readonly, nonatomic) _SFFaviconProvider *faviconProvider; // @synthesize faviconProvider=_faviconProvider;
- (void).cxx_destruct;
- (void)scheduleLowPriorityRequestForBookmarks:(id)arg1;
- (id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(_Bool)arg3 metadataType:(unsigned long long)arg4;

@end

