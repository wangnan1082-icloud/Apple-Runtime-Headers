//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface NTKDateRounder : NSObject
{
    NSDate *_startingDate;
    NSDate *_endingDate;
    unsigned int _minuteGranularity;
}

@property(nonatomic) unsigned int minuteGranularity; // @synthesize minuteGranularity=_minuteGranularity;
@property(retain, nonatomic) NSDate *endingDate; // @synthesize endingDate=_endingDate;
@property(retain, nonatomic) NSDate *startingDate; // @synthesize startingDate=_startingDate;
- (void).cxx_destruct;
- (id)roundDate:(id)arg1;

@end

