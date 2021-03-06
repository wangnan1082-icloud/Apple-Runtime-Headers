//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVPingTest : NSObject
{
    NSString *ipAsString;
    BOOL usingWifi;
    NSString *interfaceNameToTest;
    float min;
    float max;
    float avg;
    float stddev;
    float packetLossRate;
    long long lastReturnedError;
}

@property(readonly, nonatomic) float packetLossRate; // @synthesize packetLossRate;
@property(readonly, nonatomic) float stddev; // @synthesize stddev;
@property(readonly, nonatomic) float avg; // @synthesize avg;
@property(readonly, nonatomic) float max; // @synthesize max;
@property(readonly, nonatomic) float min; // @synthesize min;
@property(readonly, nonatomic) BOOL usingWifi; // @synthesize usingWifi;
- (id)description;
- (long long)start;
- (void)calculateInterfaceName;
- (void)dealloc;
- (id)initWithIPAsString:(id)arg1 usingWifi:(BOOL)arg2;
- (long long)parseResults:(char *)arg1 secondLastLine:(char *)arg2;
- (BOOL)parsePingLineForPLR:(char *)arg1;
- (BOOL)parsePingLineForBadCommand:(char *)arg1;
- (BOOL)parsePingLineForBadInterface:(char *)arg1;
- (BOOL)parsePingLineForLatencyStats:(char *)arg1;

@end

