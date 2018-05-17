//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPShareIdentifier, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPShareTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSString *_routingKey;
    CKDPShareIdentifier *_shareId;
    NSData *_shortTokenHash;
    _Bool _forceFetch;
    struct {
        unsigned int forceFetch:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasForceFetch;
@property(nonatomic) _Bool forceFetch; // @synthesize forceFetch=_forceFetch;
@property(readonly, nonatomic) _Bool hasShareId;
@property(readonly, nonatomic) _Bool hasShortTokenHash;
@property(readonly, nonatomic) _Bool hasRoutingKey;

@end
