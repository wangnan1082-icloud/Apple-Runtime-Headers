//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@interface WRM_iRATProximityRecommendationLogging : NSObject
{
    BOOL _nwType;
    int _beaconPER;
    NSUUID *_Uuid;
    unsigned long long _btRSSI;
    long long _wifiRSSI;
    long long _wifiSNR;
    long long _wifiCCA;
    long long _lsmRecommendationBe;
    long long _expectedThroughputVIBE;
    long long _packetLifetimeVIBE;
    long long _packetLossRateVIBE;
    long long _btRetransmissionRateTx;
    long long _btRetransmissionRateRx;
    long long _btTech;
}

@property(nonatomic) long long btTech; // @synthesize btTech=_btTech;
@property(nonatomic) long long btRetransmissionRateRx; // @synthesize btRetransmissionRateRx=_btRetransmissionRateRx;
@property(nonatomic) long long btRetransmissionRateTx; // @synthesize btRetransmissionRateTx=_btRetransmissionRateTx;
@property(nonatomic) long long packetLossRateVIBE; // @synthesize packetLossRateVIBE=_packetLossRateVIBE;
@property(nonatomic) long long packetLifetimeVIBE; // @synthesize packetLifetimeVIBE=_packetLifetimeVIBE;
@property(nonatomic) long long expectedThroughputVIBE; // @synthesize expectedThroughputVIBE=_expectedThroughputVIBE;
@property(nonatomic) long long lsmRecommendationBe; // @synthesize lsmRecommendationBe=_lsmRecommendationBe;
@property(nonatomic) long long wifiCCA; // @synthesize wifiCCA=_wifiCCA;
@property(nonatomic) BOOL nwType; // @synthesize nwType=_nwType;
@property(nonatomic) int beaconPER; // @synthesize beaconPER=_beaconPER;
@property(nonatomic) long long wifiSNR; // @synthesize wifiSNR=_wifiSNR;
@property(nonatomic) long long wifiRSSI; // @synthesize wifiRSSI=_wifiRSSI;
@property(nonatomic) unsigned long long btRSSI; // @synthesize btRSSI=_btRSSI;
@property(retain, nonatomic) NSUUID *Uuid; // @synthesize Uuid=_Uuid;
- (void)dealloc;
- (id)init;

@end
