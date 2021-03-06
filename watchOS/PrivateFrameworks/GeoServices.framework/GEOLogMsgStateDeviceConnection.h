//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying>
{
    int _cellularDataState;
    NSString *_deviceCarrierName;
    NSString *_deviceCountryCode;
    int _deviceNetworkConnectivity;
    struct {
        unsigned int cellularDataState:1;
        unsigned int deviceNetworkConnectivity:1;
    } _has;
}

@property(retain, nonatomic) NSString *deviceCarrierName; // @synthesize deviceCarrierName=_deviceCarrierName;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
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
- (int)StringAsCellularDataState:(id)arg1;
- (id)cellularDataStateAsString:(int)arg1;
@property(nonatomic) _Bool hasCellularDataState;
@property(nonatomic) int cellularDataState; // @synthesize cellularDataState=_cellularDataState;
@property(readonly, nonatomic) _Bool hasDeviceCarrierName;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
- (int)StringAsDeviceNetworkConnectivity:(id)arg1;
- (id)deviceNetworkConnectivityAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceNetworkConnectivity;
@property(nonatomic) int deviceNetworkConnectivity; // @synthesize deviceNetworkConnectivity=_deviceNetworkConnectivity;

@end

