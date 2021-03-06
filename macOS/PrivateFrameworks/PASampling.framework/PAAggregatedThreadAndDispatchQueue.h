//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PASampling/PAAggregatedStack-Protocol.h>

@class NSMutableArray, NSString, PAAggregatedProcessInstance, PAProcessInstanceAggregator;

@interface PAAggregatedThreadAndDispatchQueue : NSObject <PAAggregatedStack>
{
    PAAggregatedProcessInstance *_aggregatedTask;
    NSMutableArray *_contiguousStacks;
    int _minPriority;
    int _maxPriority;
    int _minBasePriority;
    int _maxBasePriority;
    unsigned long long _dispatchQueueId;
    unsigned long long _threadId;
    unsigned long long _cpuTimeNsCached;
    unsigned long long _cpuCyclesCached;
    unsigned long long _cpuInstructionsCached;
}

@property int minBasePriority; // @synthesize minBasePriority=_minBasePriority;
@property int maxBasePriority; // @synthesize maxBasePriority=_maxBasePriority;
@property int minPriority; // @synthesize minPriority=_minPriority;
@property int maxPriority; // @synthesize maxPriority=_maxPriority;
@property unsigned long long threadId; // @synthesize threadId=_threadId;
@property unsigned long long dispatchQueueId; // @synthesize dispatchQueueId=_dispatchQueueId;
@property(readonly) __weak PAAggregatedProcessInstance *aggregatedTask; // @synthesize aggregatedTask=_aggregatedTask;
- (void).cxx_destruct;
- (void)addStack:(id)arg1;
- (unsigned long long)cpuCycles;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuTimeNs;
@property(readonly) BOOL isIdleWorkQueueThread;
@property(readonly) BOOL isGlobalForcedIdleThread;
@property(readonly) BOOL isProcessorIdleThread;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)printToOutputStream:(id)arg1;
- (void)printStackToOutputStream:(id)arg1;
- (void)printHeavyStacksToOutputStream:(id)arg1 onlyPrintHeaviest:(BOOL)arg2;
- (id)copyStringForMissingSamplesBeforeContiguousStackIndex:(unsigned long long)arg1;
- (unsigned long long)numMissingSamplesBeforeContiguousStackIndex:(unsigned long long)arg1;
- (id)copyDescriptionForSampleFrame:(id)arg1 inSampleTask:(id)arg2;
- (void)printHeaderToOutputStream:(id)arg1;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(BOOL)arg3;
@property(readonly) __weak NSMutableArray *contiguousStacks;
- (BOOL)hasSingleName:(id *)arg1;
- (BOOL)isSingleStack;
- (int)count;
- (id)initForIdentificationPurposesWithThreadId:(unsigned long long)arg1 andDispatchQueueId:(unsigned long long)arg2;
- (id)initWithAggregatedTask:(id)arg1 andThreadId:(unsigned long long)arg2 andDispatchQueueId:(unsigned long long)arg3;
@property(readonly) unsigned long long lastTimestampIndex;
@property(readonly) unsigned long long firstTimestampIndex;
- (id)sampleStore;
@property(readonly) __weak PAProcessInstanceAggregator *aggregator;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) BOOL isMainThread;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

