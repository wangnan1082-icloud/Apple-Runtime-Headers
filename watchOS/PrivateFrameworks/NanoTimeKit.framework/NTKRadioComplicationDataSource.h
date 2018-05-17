//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationDataSource.h>

#import "NMRNowPlayingControllerDelegate.h"
#import "NMROriginObserverDelegate.h"

@class CLKComplicationTimelineEntry, NMRNowPlayingController, NSObject<OS_dispatch_queue>, NSString;

@interface NTKRadioComplicationDataSource : NTKComplicationDataSource <NMROriginObserverDelegate, NMRNowPlayingControllerDelegate>
{
    NMRNowPlayingController *_nowPlayingController;
    CLKComplicationTimelineEntry *_nowPlayingEntry;
    NSString *_entryOriginId;
    _Bool _isPaused;
    _Bool _needsInvalidation;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)acceptsComplicationFamily:(int)arg1;
+ (_Bool)acceptsComplicationType:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)activeNowPlayingOriginDidUpdateForController:(id)arg1;
- (void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2;
- (_Bool)_isValidOrigin:(id)arg1;
- (id)_defaultTimelineEntry;
- (void)_updateWithOrigin:(id)arg1;
- (void)_invalidateIfNeeded;
- (void)pause;
- (void)resume;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (id)currentSwitcherTemplate;
- (unsigned int)timelineAnimationBehavior;
- (_Bool)supportsTapAction;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
