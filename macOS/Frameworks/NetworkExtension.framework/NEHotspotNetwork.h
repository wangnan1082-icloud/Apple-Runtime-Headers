//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NEHotspotNetwork : NSObject
{
    struct __CNNetwork *_network;
}

@property(readonly, getter=isChosenHelper) BOOL chosenHelper;
@property(readonly, getter=didJustJoin) BOOL justJoined;
@property(readonly, getter=didAutoJoin) BOOL autoJoined;
@property(readonly, getter=isSecure) BOOL secure;
- (void)setPassword:(id)arg1;
- (void)setConfidence:(long long)arg1;
@property(readonly) double signalStrength;
@property(readonly) NSString *BSSID;
@property(readonly) NSString *SSID;
@property(readonly) NSString *interfaceName;
@property struct __CNNetwork *network; // @synthesize network=_network;
- (id)initWithNetwork:(struct __CNNetwork *)arg1;
- (id)description;
- (void)dealloc;

@end
