//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SymptomEvaluator/ConfigurableObjectProtocol-Protocol.h>
#import <SymptomEvaluator/ManagedEventInfoProtocol-Protocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSUUID, NWUUIDMapper;
@protocol OS_dispatch_queue;

@interface NWActivityHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol>
{
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSMutableDictionary *_mappedMetrics;
    NWUUIDMapper *_nullUUIDMapper;
    NSUUID *_nullUUID;
}

+ (id)configureClass:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSUUID *nullUUID; // @synthesize nullUUID=_nullUUID;
@property(readonly, nonatomic) NWUUIDMapper *nullUUIDMapper; // @synthesize nullUUIDMapper=_nullUUIDMapper;
@property(readonly, nonatomic) NSMutableDictionary *mappedMetrics; // @synthesize mappedMetrics=_mappedMetrics;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
- (void).cxx_destruct;
- (int)configureInstance:(id)arg1;
- (id)init;
- (_Bool)noteSymptom:(id)arg1;
- (void)_handleNWConnectionStatistics:(id)arg1 effectivePid:(int)arg2;
- (void)_handleCFNetworkItem:(id)arg1;
- (void)_handleEpilogue:(id)arg1;
- (void)_handleStartActivity:(id)arg1;
- (void)_pruneOldMappings;
- (id)mapperForUUID:(id)arg1 reason:(int)arg2;
- (void)generateInfoForId:(unsigned long long)arg1 context:(const char *)arg2 uuid:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_dumpState:(int)arg1;
@property(readonly, copy) NSString *description;
- (id)_getBundleNameFromPid:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

