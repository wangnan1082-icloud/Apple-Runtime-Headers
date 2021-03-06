//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PAJob.h>

@class IPARegion, PABarrier, PADevice, PARenderer, PATimer, PFTraceBuffer;
@protocol PARenderResult, PARenderSource, PARenderTarget;

@interface PARenderJob : PAJob
{
    PADevice *_device;
    id <PARenderSource> _source;
    id <PARenderTarget> _target;
    id <PARenderResult> _result;
    PABarrier *_barrier;
    IPARegion *_clipRegion;
    IPARegion *_renderedRegion;
    unsigned long long _popTime;
    PARenderer *_renderer;
    PFTraceBuffer *_trace;
    PATimer *_timer;
    BOOL _sendSignalFlags;
    double _delay;
}

+ (BOOL)_debugSendSignalFlags;
+ (BOOL)_debugTraceEnabled;
@property(readonly, nonatomic) IPARegion *renderedRegion; // @synthesize renderedRegion=_renderedRegion;
@property(copy, nonatomic) IPARegion *clipRegion; // @synthesize clipRegion=_clipRegion;
@property(readonly, nonatomic) id <PARenderResult> result; // @synthesize result=_result;
@property(retain, nonatomic) id <PARenderTarget> target; // @synthesize target=_target;
@property(retain, nonatomic) id <PARenderSource> source; // @synthesize source=_source;
@property(readonly, nonatomic) PADevice *device; // @synthesize device=_device;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (BOOL)setJobQueue:(id)arg1;
- (void)didComplete;
- (void)didRun:(id)arg1;
- (void)abort:(BOOL)arg1;
- (id)_renderImage:(id)arg1 inRegion:(id)arg2;
- (id)_renderRegion:(id)arg1;
- (void)run:(id)arg1;
- (id)_regionToRender;
- (void)willRun:(id)arg1;
- (BOOL)canRun:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

