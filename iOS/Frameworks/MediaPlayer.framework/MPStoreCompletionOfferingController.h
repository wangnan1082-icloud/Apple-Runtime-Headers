//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MCProfileConnectionObserver-Protocol.h>

@class NSCache, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferingController : NSObject <MCProfileConnectionObserver>
{
    NSCache *_offeringCache;
    NSMutableDictionary *_lookupItemsByStoreLookupID;
    NSMutableDictionary *_lookupItemsByTokenID;
    unsigned long long _nextTokenID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)_isCmcEnabled;
+ (void)_getIsCMCDisabled:(_Bool *)arg1 disabledReason:(id *)arg2;
+ (void)setWantsArtwork:(_Bool)arg1;
+ (id)storeOfferingController;
- (void).cxx_destruct;
- (void)_onQueueClearCache;
- (void)_onQueueSetCachedCompletionOffering:(id)arg1 forStoreLookupID:(id)arg2;
- (id)_onQueueCompletionOfferingForAlbumItemsQuery:(id)arg1;
- (id)_onQueueStartCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)_lookupCompletedWithResponse:(id)arg1 lookupItem:(id)arg2 error:(id)arg3;
- (void)_onQueuePostLookupCompletedForLookupItem:(id)arg1 offering:(id)arg2 error:(id)arg3;
- (void)_onQueueCancelCompletionOfferingLookupTokenID:(unsigned long long)arg1;
- (void)_onQueueRemoveLookupItemsForStoreLookupID:(id)arg1;
- (void)_onQueueRemoveLookupItem:(id)arg1;
- (id)_onQueueGetInsertedLookupItemForAlbumItemsQuery:(id)arg1 requestAlreadyIssued:(_Bool *)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)_dumpCache;
- (unsigned long long)startCompletionOfferingLookupForAlbumItemsQuery:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)cancelCompletionOfferingLookup:(unsigned long long)arg1;
- (id)completionOfferingForAlbumItemsQuery:(id)arg1;
- (id)_sanitizedQuery:(id)arg1;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_storeAccountsDidChangeNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

