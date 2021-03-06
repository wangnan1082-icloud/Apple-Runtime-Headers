//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface VUIDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_hoursMinutesFormatter;
    NSDateComponentsFormatter *_secondsFormatter;
}

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (void)initialize;
@property(retain, nonatomic) NSDateComponentsFormatter *secondsFormatter; // @synthesize secondsFormatter=_secondsFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *hoursMinutesFormatter; // @synthesize hoursMinutesFormatter=_hoursMinutesFormatter;
- (void).cxx_destruct;
- (id)transformedValue:(id)arg1;
- (id)init;

@end

