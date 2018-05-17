//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUICCrownInputSequencerDelegate.h"

@class NSArray, NSDictionary, NSString, NSTimer, PUICCrownInputSequencer, PUICSectionIndexOverlayView, UIScrollView<PUICSectionable>, UIView;

@interface PUICSelectionIndexController : NSObject <PUICCrownInputSequencerDelegate>
{
    _Bool _sectionIndexOverlayHidden;
    PUICSectionIndexOverlayView *_sectionIndexOverlayView;
    UIView *_sectionIndexOverlayDimmingView;
    id _sectionIndexOverlayItem;
    NSTimer *_delayedSectionIndexOverlayHidingTimer;
    PUICCrownInputSequencer *_sectionIndexOverlaySequencer;
    PUICCrownInputSequencer *_crownVelocityTrackingSequencer;
    _Bool _hasLoadedSectionIndexItems;
    NSArray *_sectionIndexItems;
    NSDictionary *_sectionToSectionItemMap;
    UIScrollView<PUICSectionable> *_sectionableScrollView;
    int _sectionIndexMinimumDisplayCount;
}

+ (void)_setFrame:(struct CGRect)arg1 onTransformedView:(id)arg2;
@property(nonatomic) int sectionIndexMinimumDisplayCount; // @synthesize sectionIndexMinimumDisplayCount=_sectionIndexMinimumDisplayCount;
- (void).cxx_destruct;
- (id)_crownVelocityTrackingSequencer;
- (id)_sectionIndexOverlaySequencer;
- (int)_sectionIndexForSectionItemAtIndex:(int)arg1;
- (unsigned int)_numberOfSectionIndexItems;
- (void)_updateSectionIndexOverlaySequencer;
- (_Bool)_crownInputSequencerShouldSuppressInput:(id)arg1;
- (void)crownInputSequencerAverageCrownVelocityDidChange:(id)arg1;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (void)_setSectionIndexOverlayRubberbandFactor:(float)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)_setSectionIndexOverlayHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setSectionIndexOverlayItem:(id)arg1;
- (void)_updateSectionItemsIfNecessary;
- (int)_numberOfItems;
- (void)_delayedSectionIndexOverlayHidingTimerFired:(id)arg1;
- (void)_cleanupDelayedSectionIndexOverlayHidingTimer;
- (void)_cancelDelayedSectionIndexOverlayHiding;
- (void)_updateSectionIndexOverlayViewItem;
- (void)_updateSectionIndexOverlayContentsAndVisibility;
- (void)_scheduleDelayedSectionIndexOverlayHiding;
- (_Bool)_canShowSectionIndexOverlay;
- (void)_layoutSectionIndexOverlayView;
- (void)contentOffsetDidChange;
- (void)wheelChangedWithEvent:(id)arg1;
- (void)reloadSectionItems;
- (void)update;
- (void)setNeedsUpdate;
- (void)dealloc;
- (id)initWithSectionableScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
