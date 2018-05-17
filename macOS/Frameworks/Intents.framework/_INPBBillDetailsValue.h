//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata;

@interface _INPBBillDetailsValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBCurrencyAmountValue *_amountDue;
    _INPBBillPayeeValue *_billPayee;
    int _billType;
    _INPBDateTime *_dueDate;
    _INPBCurrencyAmountValue *_lateFee;
    _INPBCurrencyAmountValue *_minimumDue;
    _INPBDateTime *_paymentDate;
    int _status;
    _INPBValueMetadata *_valueMetadata;
    CDStruct_c8e9def3 _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBDateTime *paymentDate; // @synthesize paymentDate=_paymentDate;
@property(retain, nonatomic) _INPBDateTime *dueDate; // @synthesize dueDate=_dueDate;
@property(retain, nonatomic) _INPBCurrencyAmountValue *lateFee; // @synthesize lateFee=_lateFee;
@property(retain, nonatomic) _INPBCurrencyAmountValue *minimumDue; // @synthesize minimumDue=_minimumDue;
@property(retain, nonatomic) _INPBCurrencyAmountValue *amountDue; // @synthesize amountDue=_amountDue;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee; // @synthesize billPayee=_billPayee;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
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
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (int)StringAsBillType:(id)arg1;
- (id)billTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasBillType;
@property(nonatomic) int billType; // @synthesize billType=_billType;
@property(readonly, nonatomic) BOOL hasPaymentDate;
@property(readonly, nonatomic) BOOL hasDueDate;
@property(readonly, nonatomic) BOOL hasLateFee;
@property(readonly, nonatomic) BOOL hasMinimumDue;
@property(readonly, nonatomic) BOOL hasAmountDue;
@property(readonly, nonatomic) BOOL hasBillPayee;
@property(readonly, nonatomic) BOOL hasValueMetadata;

@end
