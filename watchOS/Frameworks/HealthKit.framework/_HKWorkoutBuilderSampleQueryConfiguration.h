//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration
{
    _Bool _needsHistoricalData;
    NSUUID *_workoutBuilderIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *workoutBuilderIdentifier; // @synthesize workoutBuilderIdentifier=_workoutBuilderIdentifier;
@property(nonatomic) _Bool needsHistoricalData; // @synthesize needsHistoricalData=_needsHistoricalData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

