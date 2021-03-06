//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSFastEnumeration-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSSortDescriptor;

@interface HKSortedSampleArray : NSObject <NSFastEnumeration>
{
    NSMutableArray *_samples;
    NSMutableDictionary *_samplesByUUID;
    NSSortDescriptor *_sortDescriptor;
}

@property(retain, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
- (void).cxx_destruct;
- (id)description;
- (id)reverseSampleEnumerator;
- (id)sampleEnumerator;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)removeAllSamples;
- (_Bool)removeSamplesWithUUIDs:(id)arg1;
- (_Bool)removeSampleAtIndex:(int)arg1;
- (_Bool)removeSample:(id)arg1;
- (int)count;
- (id)allSamples;
- (id)sampleAtIndex:(int)arg1;
- (_Bool)insertSamples:(id)arg1;
- (void)_addResultsToUUIDMappingRemovingDuplicates:(id)arg1;
- (id)init;

@end

