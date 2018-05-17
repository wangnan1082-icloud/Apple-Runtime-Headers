//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDCoreRoutineFMCViewedInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_parkingId;
    int _uiPlacement;
    CDStruct_a6119c26 _has;
}

@property(nonatomic) int uiPlacement; // @synthesize uiPlacement=_uiPlacement;
@property(retain, nonatomic) NSString *parkingId; // @synthesize parkingId=_parkingId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUiPlacement;
@property(readonly, nonatomic) _Bool hasParkingId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
