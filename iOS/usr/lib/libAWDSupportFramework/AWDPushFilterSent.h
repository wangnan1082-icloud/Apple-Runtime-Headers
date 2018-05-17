//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDPushFilterSent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _connectionType;
    NSString *_guid;
    int _linkQuality;
    unsigned int _sentReason;
    struct {
        unsigned int timestamp:1;
        unsigned int connectionType:1;
        unsigned int linkQuality:1;
        unsigned int sentReason:1;
    } _has;
}

@property(nonatomic) unsigned int sentReason; // @synthesize sentReason=_sentReason;
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSentReason;
@property(nonatomic) _Bool hasLinkQuality;
@property(nonatomic) _Bool hasConnectionType;
@property(readonly, nonatomic) _Bool hasGuid;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
