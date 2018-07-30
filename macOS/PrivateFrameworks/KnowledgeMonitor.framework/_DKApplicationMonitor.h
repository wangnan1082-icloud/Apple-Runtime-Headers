//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSString;

@interface _DKApplicationMonitor : _DKMonitor
{
    void *_lsNotificationID;
    NSString *_lastIdentifierSet;
}

+ (void)setFocalApplication:(id)arg1 launchReason:(id)arg2;
+ (CDUnknownBlockType)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2;
+ (id)_defaultEvent;
+ (id)entitlements;
+ (id)eventStream;
@property(retain, nonatomic) NSString *lastIdentifierSet; // @synthesize lastIdentifierSet=_lastIdentifierSet;
@property(nonatomic) void *lsNotificationID; // @synthesize lsNotificationID=_lsNotificationID;
- (void).cxx_destruct;
- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (void)start;
- (void)platformSpecificStop;
- (void)platformSpecificStart;
- (void)obtainCurrentValue;
- (void)registerForAppChangeNotifications;

@end
