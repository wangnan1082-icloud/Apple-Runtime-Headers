//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying>
{
    unsigned int _retryScheduleInDays;
    struct {
        unsigned int retryScheduleInDays:1;
    } _has;
}

@property(nonatomic) unsigned int retryScheduleInDays; // @synthesize retryScheduleInDays=_retryScheduleInDays;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRetryScheduleInDays;

@end

