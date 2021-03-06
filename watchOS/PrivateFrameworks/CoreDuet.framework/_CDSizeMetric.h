//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, _CDSizeMetricFamily;

@interface _CDSizeMetric : NSObject
{
    NSDictionary *_dictionary;
    NSString *_name;
    NSString *_string;
    _CDSizeMetricFamily *_family;
}

@property(readonly) __weak _CDSizeMetricFamily *family; // @synthesize family=_family;
@property(readonly) NSString *string; // @synthesize string=_string;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)sizeHistogram;
@property(readonly) NSDate *lastUpdate;
@property(readonly) NSDate *firstUpdate;
- (id)_dateFromCounter:(unsigned long long)arg1;
@property(readonly) double averageSize;
@property(readonly) unsigned long long maximumSize;
@property(readonly) unsigned long long minimumSize;
@property(readonly) unsigned long long lastSize;
@property(readonly) unsigned long long firstSize;
@property(readonly) unsigned long long count;
- (id)_stringWithIndex:(unsigned int)arg1;
- (id)_histogramWithIndex:(unsigned int)arg1;
- (unsigned long long)_uint64CounterWithIndex:(unsigned int)arg1;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 dictionary:(id)arg4;

@end

