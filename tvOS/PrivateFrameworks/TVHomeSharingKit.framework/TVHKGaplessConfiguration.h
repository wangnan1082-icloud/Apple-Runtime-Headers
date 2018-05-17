//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface TVHKGaplessConfiguration : NSObject
{
    NSNumber *_encodingDelay;
    NSNumber *_encodingDrain;
    NSNumber *_heuristic;
    NSNumber *_duration;
    NSNumber *_frameResynch;
}

@property(copy, nonatomic) NSNumber *frameResynch; // @synthesize frameResynch=_frameResynch;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSNumber *heuristic; // @synthesize heuristic=_heuristic;
@property(copy, nonatomic) NSNumber *encodingDrain; // @synthesize encodingDrain=_encodingDrain;
@property(copy, nonatomic) NSNumber *encodingDelay; // @synthesize encodingDelay=_encodingDelay;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;

@end
