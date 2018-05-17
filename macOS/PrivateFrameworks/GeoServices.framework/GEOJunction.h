//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface GEOJunction : NSObject <NSSecureCoding>
{
    int _maneuverType;
    int _drivingSide;
    int _junctionType;
    NSData *_elementsData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int junctionType; // @synthesize junctionType=_junctionType;
@property(readonly, nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property(readonly, nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long numElements;
@property(readonly, nonatomic) struct GEOJunctionElement *elements;
- (id)initWithManeuverType:(int)arg1 drivingSide:(int)arg2;
- (id)initWithStep:(id)arg1;

@end
