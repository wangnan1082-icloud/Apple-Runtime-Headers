//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAudioPowerUpdater;

@protocol AFAudioPowerUpdaterDelegate <NSObject>
- (void)audioPowerUpdaterDidUpdate:(AFAudioPowerUpdater *)arg1 averagePower:(float)arg2 peakPower:(float)arg3;
@end
