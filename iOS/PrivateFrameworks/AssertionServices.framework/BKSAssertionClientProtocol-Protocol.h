//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssertionServices/NSObject-Protocol.h>

@class BKSAssertionEvent, NSObject, NSString;
@protocol BKSAssertionClientHandler, OS_dispatch_queue;

@protocol BKSAssertionClientProtocol <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
- (void)sendDestroyEvent:(BKSAssertionEvent *)arg1;
- (void)sendUpdateEvent:(BKSAssertionEvent *)arg1;
- (_Bool)sendCreateEvent:(BKSAssertionEvent *)arg1 error:(id *)arg2;
- (void)unregisterClientHandlerForAssertionIdentifier:(NSString *)arg1;
- (void)registerClientHandler:(id <BKSAssertionClientHandler>)arg1 forAssertionIdentifier:(NSString *)arg2;
@end

