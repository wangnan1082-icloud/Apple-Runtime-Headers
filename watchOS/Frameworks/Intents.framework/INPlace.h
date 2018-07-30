//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface INPlace : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_placeType;
    NSString *_placeSubType;
    NSArray *_placeDescriptors;
    int _personalPlaceType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int personalPlaceType; // @synthesize personalPlaceType=_personalPlaceType;
@property(readonly, copy, nonatomic) NSArray *placeDescriptors; // @synthesize placeDescriptors=_placeDescriptors;
@property(readonly, copy, nonatomic) NSString *placeSubType; // @synthesize placeSubType=_placeSubType;
@property(readonly, copy, nonatomic) NSString *placeType; // @synthesize placeType=_placeType;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithPlaceType:(id)arg1 placeSubType:(id)arg2 placeDescriptors:(id)arg3 personalPlaceType:(int)arg4;

@end
