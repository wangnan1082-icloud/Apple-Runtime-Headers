//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPResponseOperationResultErrorClient, CKDPResponseOperationResultErrorExtension, CKDPResponseOperationResultErrorServer, NSString;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying>
{
    CKDPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorInternal;
    NSString *_errorKey;
    CKDPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer *_serverError;
    struct {
        unsigned int retryAfterSeconds:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorInternal; // @synthesize errorInternal=_errorInternal;
@property(retain, nonatomic) NSString *errorKey; // @synthesize errorKey=_errorKey;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) int retryAfterSeconds; // @synthesize retryAfterSeconds=_retryAfterSeconds;
@property(retain, nonatomic) CKDPResponseOperationResultErrorExtension *extensionError; // @synthesize extensionError=_extensionError;
@property(retain, nonatomic) CKDPResponseOperationResultErrorServer *serverError; // @synthesize serverError=_serverError;
@property(retain, nonatomic) CKDPResponseOperationResultErrorClient *clientError; // @synthesize clientError=_clientError;
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
@property(readonly, nonatomic) _Bool hasErrorInternal;
@property(readonly, nonatomic) _Bool hasErrorKey;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasRetryAfterSeconds;
@property(readonly, nonatomic) _Bool hasExtensionError;
@property(readonly, nonatomic) _Bool hasServerError;
@property(readonly, nonatomic) _Bool hasClientError;

@end

