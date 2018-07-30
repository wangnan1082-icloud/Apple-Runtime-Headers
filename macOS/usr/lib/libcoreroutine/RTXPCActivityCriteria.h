//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RTXPCActivityCriteria : NSObject
{
    BOOL _requireNetworkConnectivity;
    BOOL _requireInexpensiveNetworkConnectivity;
    BOOL _allowBattery;
    BOOL _powerNap;
    double _interval;
    double _delay;
    double _gracePeriod;
    unsigned long long _priority;
    unsigned long long _networkTransferDirection;
}

+ (const char *)convertNetworkTransferDirection:(unsigned long long)arg1;
+ (const char *)convertPriority:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL powerNap; // @synthesize powerNap=_powerNap;
@property(readonly, nonatomic) BOOL allowBattery; // @synthesize allowBattery=_allowBattery;
@property(readonly, nonatomic) unsigned long long networkTransferDirection; // @synthesize networkTransferDirection=_networkTransferDirection;
@property(readonly, nonatomic) BOOL requireInexpensiveNetworkConnectivity; // @synthesize requireInexpensiveNetworkConnectivity=_requireInexpensiveNetworkConnectivity;
@property(readonly, nonatomic) BOOL requireNetworkConnectivity; // @synthesize requireNetworkConnectivity=_requireNetworkConnectivity;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) double gracePeriod; // @synthesize gracePeriod=_gracePeriod;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
- (id)description;
- (id)initWithInterval:(double)arg1 gracePeriod:(double)arg2 priority:(unsigned long long)arg3 requireNetworkConnectivity:(BOOL)arg4 requireInexpensiveNetworkConnectivity:(BOOL)arg5 networkTransferDirection:(unsigned long long)arg6 allowBattery:(BOOL)arg7 powerNap:(BOOL)arg8;
- (id)init;

@end
