//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICUserNotificationContext : NSObject
{
    CDUnknownBlockType _completionHandler;
    struct __CFRunLoopSource *_runLoopSourceRef;
}

@property(nonatomic) struct __CFRunLoopSource *runLoopSourceRef; // @synthesize runLoopSourceRef=_runLoopSourceRef;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)clearRunLoop;

@end
