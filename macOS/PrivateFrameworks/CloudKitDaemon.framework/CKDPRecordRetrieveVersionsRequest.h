//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRequestedFields, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveVersionsRequest : PBRequest <NSCopying>
{
    CKDPAssetsToDownload *_assetsToDownload;
    NSString *_minimumVersionEtag;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRequestedFields *_requestedFields;
}

+ (id)options;
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) NSString *minimumVersionEtag; // @synthesize minimumVersionEtag=_minimumVersionEtag;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAssetsToDownload;
@property(readonly, nonatomic) BOOL hasMinimumVersionEtag;
@property(readonly, nonatomic) BOOL hasRequestedFields;
@property(readonly, nonatomic) BOOL hasRecordIdentifier;

@end
