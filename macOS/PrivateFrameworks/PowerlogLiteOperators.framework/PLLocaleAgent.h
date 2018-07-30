//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent
{
    PLNSNotificationOperatorComposition *_timeNotification;
}

+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (void)load;
@property(retain) PLNSNotificationOperatorComposition *timeNotification; // @synthesize timeNotification=_timeNotification;
- (void).cxx_destruct;
- (void)logEventForwardTimeZoneWithTrigger:(id)arg1;
- (void)logEventForwardTimeZone;
- (void)log;
- (void)initOperatorDependancies;
- (id)init;

@end
