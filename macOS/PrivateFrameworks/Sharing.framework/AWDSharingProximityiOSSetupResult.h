//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDSharingProximityiOSSetupResult : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _durationMs;
    int _errorCode;
    unsigned int _incorrectPINCount;
    NSString *_sessionUUID;
    int _smoothedRSSI;
    struct {
        unsigned int timestamp:1;
        unsigned int durationMs:1;
        unsigned int errorCode:1;
        unsigned int incorrectPINCount:1;
        unsigned int smoothedRSSI:1;
    } _has;
}

@property(nonatomic) unsigned int incorrectPINCount; // @synthesize incorrectPINCount=_incorrectPINCount;
@property(nonatomic) unsigned int durationMs; // @synthesize durationMs=_durationMs;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) int smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIncorrectPINCount;
@property(nonatomic) BOOL hasDurationMs;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasSmoothedRSSI;
@property(readonly, nonatomic) BOOL hasSessionUUID;
@property(nonatomic) BOOL hasTimestamp;

@end
