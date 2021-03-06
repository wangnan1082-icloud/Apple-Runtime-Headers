//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol BackgroundLoadControllerDelegate;

__attribute__((visibility("hidden")))
@interface BackgroundLoadController : NSObject
{
    NSMutableDictionary *_urlsToUncommittedBackgroundLoads;
    NSMutableSet *_backgroundLoads;
    id <BackgroundLoadControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <BackgroundLoadControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_kickOffBackgroundLoad:(id)arg1;
- (void)_restartBackgroundLoadSoon:(id)arg1;
- (void)_commitBackgroundLoadNow:(id)arg1 wasDeferred:(BOOL)arg2;
- (void)_commitBackgroundLoadSoon:(id)arg1;
- (void)_destinationPageCanBeClosedForCommittingBackgroundLoad:(id)arg1;
- (void)_triedToCloseDestinationContentViewControllerBeforeCommittingBackgroundLoad:(id)arg1 canClose:(BOOL)arg2;
- (void)_eventuallyReissueBackgroundLoadThatIsAwaitingDestinationPageClose:(id)arg1;
- (BOOL)_tryToCloseDestinationContentViewControllerBeforeCommittingToBackgroundLoad:(id)arg1;
- (void)_removeBackgroundLoad:(id)arg1;
- (void)_removeBackgroundLoadFromUncommittedUniqueBackgroundLoads:(id)arg1;
- (void)_backgroundLoadDidPerformFirstVisuallyNonEmptyLayout:(id)arg1;
- (id)_backgroundLoadPassingTest:(CDUnknownBlockType)arg1;
- (void)commitBackgroundLoadImmediately:(id)arg1 toDestinationTabViewItem:(id)arg2;
- (void)commitBackgroundLoadImmediately:(id)arg1;
- (void)commitBackgroundLoad:(id)arg1;
- (void)startTrackingBackgroundLoad:(id)arg1;
- (void)stopTrackingBackgroundLoad:(id)arg1;
- (void)cancelBackgroundLoadOrReissueIfCommitted:(id)arg1;
- (void)cancelBackgroundLoadIfPossible:(id)arg1;
- (void)_cancelBackgroundLoadSoon:(id)arg1;
- (void)restartBackgroundLoad:(id)arg1;
- (id)beginBackgroundLoadWithURLs:(id)arg1 tabLabel:(id)arg2 identifier:(id)arg3 configuration:(id)arg4;
- (void)moveBackgroundLoad:(id)arg1 toCollectionWithIdentifier:(id)arg2;
- (id)backgroundLoadsInCollectionWithIdentifier:(id)arg1;
- (id)backgroundLoadsPassingTest:(CDUnknownBlockType)arg1;
- (id)backgroundLoadBeingCommittedIntoTabViewItem:(id)arg1;
- (id)backgroundLoadWithIdentifier:(id)arg1;
- (id)backgroundLoadWithBrowserViewController:(id)arg1;
- (id)uncommittedUniqueBackgroundLoadWithURL:(id)arg1;
- (BOOL)canLoadURLInBackground:(id)arg1;
- (id)init;

@end

