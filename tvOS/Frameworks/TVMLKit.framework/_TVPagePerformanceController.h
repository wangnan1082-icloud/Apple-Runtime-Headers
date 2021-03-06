//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;
@protocol _TVPagePerformanceDelegate;

@interface _TVPagePerformanceController : NSObject
{
    struct timeval _baseTimeval;
    unsigned long long _baseAbsoluteTime;
    NSMutableArray *_templateEntries;
    _Bool _pageHasSubpages;
    _Bool _pageWasInterrupted;
    _Bool _pageWasUpdated;
    _Bool _pageIsLoading;
    id <_TVPagePerformanceDelegate> _delegate;
    unsigned long long _viewWillLoad;
    unsigned long long _viewDidLoad;
    unsigned long long _viewWillAppear;
    unsigned long long _viewDidAppear;
    unsigned long long _viewWillDisappear;
    unsigned long long _viewDidDisappear;
    unsigned long long _pageCompleteDuration;
    unsigned long long _pageSetupDuration;
    unsigned long long _pageRenderDuration;
    unsigned long long _pageResourceDuration;
    unsigned long long _pageTransitionDuration;
}

+ (void)postNotificationForImageProxy:(id)arg1 withLoadingStatus:(_Bool)arg2;
+ (_Bool)isPerformanceUIEnabled;
@property(nonatomic) unsigned long long pageTransitionDuration; // @synthesize pageTransitionDuration=_pageTransitionDuration;
@property(nonatomic) unsigned long long pageResourceDuration; // @synthesize pageResourceDuration=_pageResourceDuration;
@property(nonatomic) unsigned long long pageRenderDuration; // @synthesize pageRenderDuration=_pageRenderDuration;
@property(nonatomic) unsigned long long pageSetupDuration; // @synthesize pageSetupDuration=_pageSetupDuration;
@property(nonatomic) unsigned long long pageCompleteDuration; // @synthesize pageCompleteDuration=_pageCompleteDuration;
@property(nonatomic) _Bool pageIsLoading; // @synthesize pageIsLoading=_pageIsLoading;
@property(nonatomic) unsigned long long viewDidDisappear; // @synthesize viewDidDisappear=_viewDidDisappear;
@property(nonatomic) unsigned long long viewWillDisappear; // @synthesize viewWillDisappear=_viewWillDisappear;
@property(nonatomic) unsigned long long viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(nonatomic) unsigned long long viewWillAppear; // @synthesize viewWillAppear=_viewWillAppear;
@property(nonatomic) unsigned long long viewDidLoad; // @synthesize viewDidLoad=_viewDidLoad;
@property(nonatomic) unsigned long long viewWillLoad; // @synthesize viewWillLoad=_viewWillLoad;
@property(nonatomic) _Bool pageWasUpdated; // @synthesize pageWasUpdated=_pageWasUpdated;
@property(nonatomic) _Bool pageWasInterrupted; // @synthesize pageWasInterrupted=_pageWasInterrupted;
@property(nonatomic) _Bool pageHasSubpages; // @synthesize pageHasSubpages=_pageHasSubpages;
@property(nonatomic) __weak id <_TVPagePerformanceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_maybeDeliverMetrics;
- (_Bool)_isMetricsReady;
- (void)_calculatePageDurations;
- (id)buildPagePerformanceView;
@property(readonly, nonatomic) NSDictionary *metrics;
- (unsigned long long)templateDidComplete;
- (id)getEntryForTemplate:(id)arg1;
- (void)markViewDidDisappear;
- (void)markViewWillDisappear;
- (void)markViewDidAppear;
- (void)markViewWillAppear;
- (void)markViewDidLoad;
- (void)markViewWillLoad;
- (id)init;

@end

