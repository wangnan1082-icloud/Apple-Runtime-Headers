//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WCMessage;

@interface WCQueuedMessage : NSObject
{
    WCMessage *_message;
    CDUnknownBlockType _completionHandler;
    NSDate *_creationDate;
    long long _retryCount;
}

@property long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) WCMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

