//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import "_HKBinarySample.h"

@class NSData, NSNumber, NSString;

@interface HKHeartbeatSequenceSample : HKSample <_HKBinarySample>
{
    NSData *_heartbeatData;
    NSNumber *_cachedMinBeatsPerMinute;
    NSNumber *_cachedMaxBeatsPerMinute;
    int _numberOfDataPoints;
}

+ (_Bool)supportsSecureCoding;
+ (id)heartbeatSequenceSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;
@property(readonly) int numberOfDataPoints; // @synthesize numberOfDataPoints=_numberOfDataPoints;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setPayload:(id)arg1;
- (id)payload;
- (void)_computeMinimumAndMaximumBeatsPerMinute;
@property(readonly) NSNumber *_maximumBeatsPerMinute;
@property(readonly) NSNumber *_minimumBeatsPerMinute;
- (_Bool)isEqual:(id)arg1;
- (id)_validateConfiguration;
- (void)enumerateHeartbeatDataWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
