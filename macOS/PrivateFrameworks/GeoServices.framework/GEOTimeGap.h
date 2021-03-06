//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTimeGap : PBCodable <NSCopying>
{
    unsigned int _seconds;
    unsigned int _subsequentEventId;
    BOOL _ifChained;
    struct {
        unsigned int seconds:1;
        unsigned int subsequentEventId:1;
        unsigned int ifChained:1;
    } _has;
}

@property(nonatomic) BOOL ifChained; // @synthesize ifChained=_ifChained;
@property(nonatomic) unsigned int seconds; // @synthesize seconds=_seconds;
@property(nonatomic) unsigned int subsequentEventId; // @synthesize subsequentEventId=_subsequentEventId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIfChained;
@property(nonatomic) BOOL hasSeconds;
@property(nonatomic) BOOL hasSubsequentEventId;

@end

