//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WBSCacheRetainReleasePolicy;
@protocol FaviconProviderHistoryBookmarkAdapterDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FaviconProviderHistoryBookmarkAdapter : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSCacheRetainReleasePolicy *_cachePolicy;
    BOOL _didNotifyDelegate;
    long long _bookmarksState;
    long long _historyState;
    NSArray *_observers;
    id <FaviconProviderHistoryBookmarkAdapterDelegate> _delegate;
}

@property(nonatomic) __weak id <FaviconProviderHistoryBookmarkAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDelegateIfReady;
- (void)_bookmarksDidReload;
- (void)_bookmarkURLDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_historyWasLoadedInMemory;
- (void)_historyWasLoaded;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyItemsWereAdded:(id)arg1;
- (void)dealloc;
- (id)init;

@end

