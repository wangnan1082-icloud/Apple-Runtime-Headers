//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFAWDEventProtocol.h"

@class AWDNFCSEOSRemovedEvent, NSString;

@interface NFAWDSEOSRemoved : NSObject <NFAWDEventProtocol>
{
    BOOL _hasCardEmulationStarted;
    unsigned int _hardwareType;
    AWDNFCSEOSRemovedEvent *_metric;
}

@property(retain, nonatomic) AWDNFCSEOSRemovedEvent *metric; // @synthesize metric=_metric;
@property(nonatomic) BOOL hasCardEmulationStarted; // @synthesize hasCardEmulationStarted=_hasCardEmulationStarted;
@property(nonatomic) unsigned int hardwareType; // @synthesize hardwareType=_hardwareType;
- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateExceptionUUID:(id)arg1;
@property(nonatomic) BOOL hasExpressTransactionStarted;
- (void)setHasCardemulationStarted:(BOOL)arg1;
- (BOOL)hasCardemulationStarted;
@property(nonatomic) unsigned int reason;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
