//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKit/NMUNowPlayingTimelineObserver-Protocol.h>

@class NMUNowPlayingTimeline, NSHashTable, NSMutableArray, NSString, NTKMusicNewUserManager, NTKMusicTimelineEntry, _NTKMusicTimelineEntryList, _NTKOneShotTimer;
@protocol OS_dispatch_queue;

@interface _NTKMusicComplicationSharedDataSource : NSObject <NMUNowPlayingTimelineObserver>
{
    NMUNowPlayingTimeline *_timeline;
    _NTKMusicTimelineEntryList *_entryList;
    NTKMusicNewUserManager *_newUserManager;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_workQ;
    _NTKOneShotTimer *_refreshTimer;
    NTKMusicTimelineEntry *_expectedTrack;
    NSMutableArray *_bufferedEntries;
    _NTKOneShotTimer *_proactiveTimer;
}

+ (id)sharedDataSource;
- (void).cxx_destruct;
- (void)_MRSendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_MRInsertTrackWithID:(id)arg1 togglePlayPause:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isExpectedTrack:(id)arg1;
- (void)_stopProactiveTimer;
- (void)_startProactiveTimer;
- (void)_setProactiveEntry:(id)arg1;
- (void)_handleTapOnFutureEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleTapOnPreviousEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activeOriginId;
- (void)userSelectedTimeTravelDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleNewUserStatusChangedNotification:(id)arg1;
- (void)_stopRefreshTimer;
- (void)_startRefreshTimer;
- (void)_endModifyingTimeline;
- (void)_beginModifyingTimeline;
- (void)timelineEntryPlayabilityDidChange:(id)arg1;
- (void)timeline:(id)arg1 didUpdateWithUpNextEntries:(id)arg2;
- (void)timeline:(id)arg1 didUpdateWithCurrentEntry:(id)arg2;
- (void)getTimelineEntriesForFamily:(int)arg1 afterDate:(id)arg2 limit:(unsigned int)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getTimelineEntriesForFamily:(int)arg1 beforeDate:(id)arg2 limit:(unsigned int)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getCurrentTimelineEntryForFamily:(int)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineEndDateForFamily:(int)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getTimelineStartDateForFamily:(int)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getSupportedTimeTravelDirectionsForFamily:(int)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

