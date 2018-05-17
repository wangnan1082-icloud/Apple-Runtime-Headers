//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _callStatus;
    unsigned int _callType;
    struct {
        unsigned int timestamp:1;
        unsigned int callStatus:1;
        unsigned int callType:1;
    } _has;
}

@property(nonatomic) unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property(nonatomic) unsigned int callType; // @synthesize callType=_callType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCallStatus;
@property(nonatomic) BOOL hasCallType;
@property(nonatomic) BOOL hasTimestamp;

@end
