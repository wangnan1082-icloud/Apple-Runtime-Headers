//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCAppConfigurationManager, NSArray;

@protocol FCAppConfigurationObserving <NSObject>

@optional
- (void)appConfigurationManagerUserDidJoinOrLeaveExperiment:(FCAppConfigurationManager *)arg1;
- (void)appConfigurationManager:(FCAppConfigurationManager *)arg1 trendingTopicsDidChange:(NSArray *)arg2;
- (void)appConfigurationManager:(FCAppConfigurationManager *)arg1 appConfigurationDidChange:(id <FCNewsAppConfiguration>)arg2;
@end
