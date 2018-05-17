//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSBaseMessage, NSArray, NSMutableArray;

@interface FTMessageQueue : NSObject
{
    NSMutableArray *_queue;
    NSMutableArray *_addDates;
    id <FTMessageQueueDelegate> _delegate;
}

@property __weak id <FTMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *_addDates; // @synthesize _addDates;
@property(retain) NSMutableArray *_queue; // @synthesize _queue;
- (void).cxx_destruct;
- (_Bool)removeMessage:(id)arg1;
- (_Bool)addMessageAtHeadOfQueue:(id)arg1;
- (_Bool)addMessage:(id)arg1;
- (id)dequeueTopMessage;
- (void)removeAllMessages;
- (void)_timeoutHit;
- (void)_setTimeout;
- (void)_clearTimeout;
@property(readonly) long long count;
@property(readonly) NSArray *messages;
@property(readonly) IDSBaseMessage *topMessage;
- (id)init;

@end
