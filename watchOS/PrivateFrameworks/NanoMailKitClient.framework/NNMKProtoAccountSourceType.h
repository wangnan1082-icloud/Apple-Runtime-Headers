//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface NNMKProtoAccountSourceType : PBCodable <NSCopying>
{
    NSString *_accountId;
    unsigned int _fullSyncVersion;
    unsigned int _sourceType;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int sourceType:1;
    } _has;
}

@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSourceType;
@property(nonatomic) _Bool hasFullSyncVersion;
@property(readonly, nonatomic) _Bool hasAccountId;

@end
