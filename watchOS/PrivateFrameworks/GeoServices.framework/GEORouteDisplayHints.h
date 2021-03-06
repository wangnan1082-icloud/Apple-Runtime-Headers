//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORequestOptions, NSArray;
@protocol GEOSurchargeOption;

@interface GEORouteDisplayHints : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _availablePaymentTypes;
    CDStruct_56d48c16 _availablePrioritizations;
    GEORequestOptions *_transitSurchargeOptions;
    _Bool _showTransitSchedules;
    struct {
        unsigned int showTransitSchedules:1;
    } _has;
}

@property(retain, nonatomic) GEORequestOptions *transitSurchargeOptions; // @synthesize transitSurchargeOptions=_transitSurchargeOptions;
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
@property(readonly, nonatomic) _Bool hasTransitSurchargeOptions;
- (int)StringAsAvailablePaymentTypes:(id)arg1;
- (id)availablePaymentTypesAsString:(int)arg1;
- (void)setAvailablePaymentTypes:(int *)arg1 count:(unsigned int)arg2;
- (int)availablePaymentTypeAtIndex:(unsigned int)arg1;
- (void)addAvailablePaymentType:(int)arg1;
- (void)clearAvailablePaymentTypes;
@property(readonly, nonatomic) int *availablePaymentTypes;
@property(readonly, nonatomic) unsigned int availablePaymentTypesCount;
- (int)StringAsAvailablePrioritizations:(id)arg1;
- (id)availablePrioritizationsAsString:(int)arg1;
- (void)setAvailablePrioritizations:(int *)arg1 count:(unsigned int)arg2;
- (int)availablePrioritizationAtIndex:(unsigned int)arg1;
- (void)addAvailablePrioritization:(int)arg1;
- (void)clearAvailablePrioritizations;
@property(readonly, nonatomic) int *availablePrioritizations;
@property(readonly, nonatomic) unsigned int availablePrioritizationsCount;
@property(nonatomic) _Bool hasShowTransitSchedules;
@property(nonatomic) _Bool showTransitSchedules; // @synthesize showTransitSchedules=_showTransitSchedules;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *prioritizationOptions;
@property(readonly, nonatomic) id <GEOSurchargeOption> surchargeOptions;

@end

