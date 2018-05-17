//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface APSAWDAirPlayDiscoveryDetailedModeStats : PBCodable <NSCopying>
{
    unsigned long long _durationMs;
    unsigned long long _firstAWDLDeviceFoundMs;
    unsigned long long _firstSrcPresenceBeaconSentMs;
    unsigned long long _startTime;
    unsigned long long _timestamp;
    int _apRSSI;
    unsigned int _devicePickedMs;
    NSString *_discoverySessionUUID;
    int _status;
    unsigned int _totalAWDLPeersDiscovered;
    unsigned int _totalAWDLmDNSPeers;
    unsigned int _totalPeersDiscovered;
    struct {
        unsigned int durationMs:1;
        unsigned int firstAWDLDeviceFoundMs:1;
        unsigned int firstSrcPresenceBeaconSentMs:1;
        unsigned int startTime:1;
        unsigned int timestamp:1;
        unsigned int apRSSI:1;
        unsigned int devicePickedMs:1;
        unsigned int status:1;
        unsigned int totalAWDLPeersDiscovered:1;
        unsigned int totalAWDLmDNSPeers:1;
        unsigned int totalPeersDiscovered:1;
    } _has;
}

@property(nonatomic) unsigned int totalAWDLmDNSPeers; // @synthesize totalAWDLmDNSPeers=_totalAWDLmDNSPeers;
@property(nonatomic) unsigned int totalAWDLPeersDiscovered; // @synthesize totalAWDLPeersDiscovered=_totalAWDLPeersDiscovered;
@property(nonatomic) int apRSSI; // @synthesize apRSSI=_apRSSI;
@property(nonatomic) unsigned int devicePickedMs; // @synthesize devicePickedMs=_devicePickedMs;
@property(nonatomic) unsigned int totalPeersDiscovered; // @synthesize totalPeersDiscovered=_totalPeersDiscovered;
@property(nonatomic) unsigned long long durationMs; // @synthesize durationMs=_durationMs;
@property(nonatomic) unsigned long long firstAWDLDeviceFoundMs; // @synthesize firstAWDLDeviceFoundMs=_firstAWDLDeviceFoundMs;
@property(nonatomic) unsigned long long firstSrcPresenceBeaconSentMs; // @synthesize firstSrcPresenceBeaconSentMs=_firstSrcPresenceBeaconSentMs;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *discoverySessionUUID; // @synthesize discoverySessionUUID=_discoverySessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTotalAWDLmDNSPeers;
@property(nonatomic) _Bool hasTotalAWDLPeersDiscovered;
@property(nonatomic) _Bool hasApRSSI;
@property(nonatomic) _Bool hasDevicePickedMs;
@property(nonatomic) _Bool hasTotalPeersDiscovered;
@property(nonatomic) _Bool hasDurationMs;
@property(nonatomic) _Bool hasFirstAWDLDeviceFoundMs;
@property(nonatomic) _Bool hasFirstSrcPresenceBeaconSentMs;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) _Bool hasStatus;
@property(readonly, nonatomic) _Bool hasDiscoverySessionUUID;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
