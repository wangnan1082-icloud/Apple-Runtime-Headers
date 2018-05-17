//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface SFAnalyticsMultiSampler : NSObject
{
    double _samplingInterval;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_name;
    CDUnknownBlockType _block;
    int _notificationToken;
    Class _clientClass;
    BOOL _oncePerReport;
    BOOL _activeTimer;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resumeSampling;
- (void)pauseSampling;
- (id)sampleNow;
@property(nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
- (void)setupPeriodicTimer;
- (void)setupOnceTimer;
- (void)newTimer;
- (id)initWithName:(id)arg1 interval:(double)arg2 block:(CDUnknownBlockType)arg3 clientClass:(Class)arg4;

@end
