//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface SCROConnection : NSObject <NSSecureCoding>
{
    BOOL _isConnectionStarted;
    unsigned int _pingPort;
    struct __CFRunLoopSource *_pingSource;
    struct __CFRunLoopSource *_invalidationSource;
    unsigned int _identifier;
    int _handlerType;
    id _delegate;
}

+ (BOOL)supportsSecureCoding;
+ (void)_addConnectionToRunLoop:(id)arg1;
+ (void)_unconfigServerAndRetry:(BOOL)arg1;
+ (void)_configServer;
+ (void)_createConnectionRunLoop;
+ (void)initialize;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_ping;
- (int)performHandlerActionForKey:(int)arg1;
- (id)handlerValueForKey:(int)arg1 withObject:(id)arg2;
- (id)handlerValueForKey:(int)arg1;
- (id)handlerArrayValueForKey:(int)arg1;
- (int)setHandlerValue:(id)arg1 forKey:(int)arg2;
- (int)registerHandlerCallbackForKey:(int)arg1;
- (int)sendEvent:(id)arg1;
- (void)_stopConnection;
- (void)_startConnection;
- (void)invalidate;
- (id)initWithHandlerType:(int)arg1 delegate:(id)arg2;

@end

