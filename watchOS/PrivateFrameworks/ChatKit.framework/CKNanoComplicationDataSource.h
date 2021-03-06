//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMChat;

@interface CKNanoComplicationDataSource : NSObject
{
    _Bool _messageRecdNotification;
    IMChat *_lastReceivedChat;
    int _family;
    int _unreadMessageCount;
}

+ (_Bool)acceptsComplicationType:(unsigned int)arg1;
+ (_Bool)acceptsComplicationFamily:(int)arg1;
+ (id)_imageProviderWithForegroundName:(id)arg1 unreadCount:(int)arg2 family:(int)arg3 locked:(_Bool)arg4;
+ (id)_templateForFamily:(int)arg1 unreadMessageCount:(int)arg2 compact:(_Bool)arg3 locked:(_Bool)arg4;
@property(nonatomic) _Bool messageRecdNotification; // @synthesize messageRecdNotification=_messageRecdNotification;
@property(nonatomic) int unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
@property(nonatomic) int family; // @synthesize family=_family;
@property(retain, nonatomic) IMChat *lastReceivedChat; // @synthesize lastReceivedChat=_lastReceivedChat;
- (void).cxx_destruct;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (_Bool)supportsTapAction;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (id)lockedTemplate;
- (id)currentSwitcherTemplate;
- (void)_populateComplication;
- (void)_updateComplication:(id)arg1;
- (void)resetUnreadState;
- (void)connectToDaemon;
- (id)initWithComplication:(id)arg1 family:(int)arg2;
- (void)dealloc;

@end

