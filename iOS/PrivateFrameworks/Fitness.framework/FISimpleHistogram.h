//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FISimpleHistogram : NSObject
{
    long long _bucketCount;
    struct {
        long long _field1;
        double _field2;
    } *_buckets;
}

- (_Bool)isEqual:(id)arg1;
- (id)descriptionArray;
- (id)debugDescription;
- (long long)numberOfValuesInBucketAtIndex:(long long)arg1;
- (void)addValue:(double)arg1 toBucketAtIndex:(long long)arg2;
- (double)valueForBucketAtIndex:(long long)arg1;
- (long long)bucketCount;
- (void)dealloc;
- (id)initWithNumberOfBuckets:(long long)arg1;

@end
