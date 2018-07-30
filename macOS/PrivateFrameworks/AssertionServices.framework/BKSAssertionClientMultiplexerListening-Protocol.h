//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSAssertionEvent, NSObject<OS_xpc_object>, NSString;

@protocol BKSAssertionClientMultiplexerListening <NSObject>
@property(readonly, nonatomic) NSString *supportedAssertionType;
- (void)connectionWasDestroyed;
- (void)assertionQueue_handleDestroyEvent:(BKSAssertionEvent *)arg1;
- (void)assertionQueue_handleEvent:(BKSAssertionEvent *)arg1 ofType:(unsigned long long)arg2;
- (void)assertionQueue_handleMessage:(NSObject<OS_xpc_object> *)arg1;
@end
