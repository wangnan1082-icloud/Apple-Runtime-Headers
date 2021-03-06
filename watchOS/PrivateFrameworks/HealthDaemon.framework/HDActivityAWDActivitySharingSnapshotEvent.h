//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDActivityAWDActivitySharingSnapshotEvent : PBCodable <NSCopying>
{
    long long _count;
    unsigned long long _timestamp;
    int _kind;
    _Bool _success;
    struct {
        unsigned int count:1;
        unsigned int timestamp:1;
        unsigned int kind:1;
        unsigned int success:1;
    } _has;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool success; // @synthesize success=_success;
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
- (int)StringAsKind:(id)arg1;
- (id)kindAsString:(int)arg1;
@property(nonatomic) _Bool hasKind;
@property(nonatomic) int kind; // @synthesize kind=_kind;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasTimestamp;

@end

