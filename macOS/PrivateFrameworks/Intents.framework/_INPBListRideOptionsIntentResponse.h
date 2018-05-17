//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields, _INPBTimestamp;

@interface _INPBListRideOptionsIntentResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBTimestamp *_expirationDate;
    NSMutableArray *_paymentMethods;
    NSMutableArray *_rideOptions;
}

+ (Class)paymentMethodsType;
+ (Class)rideOptionsType;
+ (id)options;
@property(retain, nonatomic) _INPBTimestamp *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSMutableArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) NSMutableArray *rideOptions; // @synthesize rideOptions=_rideOptions;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasExpirationDate;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentMethodsCount;
- (void)addPaymentMethods:(id)arg1;
- (void)clearPaymentMethods;
- (id)rideOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rideOptionsCount;
- (void)addRideOptions:(id)arg1;
- (void)clearRideOptions;

@end
