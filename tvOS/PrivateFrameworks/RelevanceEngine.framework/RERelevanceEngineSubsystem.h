//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, RERelevanceEngine;

@interface RERelevanceEngineSubsystem : NSObject
{
    NSObject<OS_dispatch_queue> *_relevanceEngineQueue;
    _Bool _running;
    RERelevanceEngine *_relevanceEngine;
}

@property(readonly, nonatomic) __weak RERelevanceEngine *relevanceEngine; // @synthesize relevanceEngine=_relevanceEngine;
- (void).cxx_destruct;
- (void)setRunning:(_Bool)arg1;
- (void)resume;
- (void)pause;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;

@end
