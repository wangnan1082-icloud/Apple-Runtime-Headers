//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying>
{
    int _navVoiceVolume;
    int _preferredTransportMode;
    BOOL _avoidHighways;
    BOOL _avoidTolls;
    BOOL _findMyCarEnabled;
    BOOL _headingEnabled;
    BOOL _labelEnabled;
    BOOL _pauseSpokenAudioEnabled;
    BOOL _speedLimitEnabled;
    BOOL _trafficEnabled;
    struct {
        unsigned int navVoiceVolume:1;
        unsigned int preferredTransportMode:1;
        unsigned int avoidHighways:1;
        unsigned int avoidTolls:1;
        unsigned int findMyCarEnabled:1;
        unsigned int headingEnabled:1;
        unsigned int labelEnabled:1;
        unsigned int pauseSpokenAudioEnabled:1;
        unsigned int speedLimitEnabled:1;
        unsigned int trafficEnabled:1;
    } _has;
}

@property(nonatomic) BOOL labelEnabled; // @synthesize labelEnabled=_labelEnabled;
@property(nonatomic) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(nonatomic) BOOL findMyCarEnabled; // @synthesize findMyCarEnabled=_findMyCarEnabled;
@property(nonatomic) BOOL pauseSpokenAudioEnabled; // @synthesize pauseSpokenAudioEnabled=_pauseSpokenAudioEnabled;
@property(nonatomic) BOOL speedLimitEnabled; // @synthesize speedLimitEnabled=_speedLimitEnabled;
@property(nonatomic) BOOL headingEnabled; // @synthesize headingEnabled=_headingEnabled;
@property(nonatomic) BOOL avoidHighways; // @synthesize avoidHighways=_avoidHighways;
@property(nonatomic) BOOL avoidTolls; // @synthesize avoidTolls=_avoidTolls;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLabelEnabled;
@property(nonatomic) BOOL hasTrafficEnabled;
@property(nonatomic) BOOL hasFindMyCarEnabled;
@property(nonatomic) BOOL hasPauseSpokenAudioEnabled;
- (int)StringAsNavVoiceVolume:(id)arg1;
- (id)navVoiceVolumeAsString:(int)arg1;
@property(nonatomic) BOOL hasNavVoiceVolume;
@property(nonatomic) int navVoiceVolume; // @synthesize navVoiceVolume=_navVoiceVolume;
@property(nonatomic) BOOL hasSpeedLimitEnabled;
@property(nonatomic) BOOL hasHeadingEnabled;
@property(nonatomic) BOOL hasAvoidHighways;
@property(nonatomic) BOOL hasAvoidTolls;
- (int)StringAsPreferredTransportMode:(id)arg1;
- (id)preferredTransportModeAsString:(int)arg1;
@property(nonatomic) BOOL hasPreferredTransportMode;
@property(nonatomic) int preferredTransportMode; // @synthesize preferredTransportMode=_preferredTransportMode;

@end

