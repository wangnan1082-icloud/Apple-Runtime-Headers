//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLaneArrowhead : PBCodable <NSCopying>
{
    int _angle;
    int _category;
    struct {
        unsigned int angle:1;
        unsigned int category:1;
    } _has;
}

@property(nonatomic) int angle; // @synthesize angle=_angle;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsCategory:(id)arg1;
- (id)categoryAsString:(int)arg1;
@property(nonatomic) BOOL hasCategory;
@property(nonatomic) int category; // @synthesize category=_category;
@property(nonatomic) BOOL hasAngle;

@end

