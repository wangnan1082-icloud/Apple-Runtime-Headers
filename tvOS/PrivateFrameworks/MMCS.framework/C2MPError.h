//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface C2MPError : PBCodable <NSCopying>
{
    long long _errorCode;
    NSString *_errorDescription;
    NSString *_errorDomain;
    C2MPError *_underlyingError;
    struct {
        unsigned int errorCode:1;
    } _has;
}

@property(retain, nonatomic) C2MPError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUnderlyingError;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;

@end
