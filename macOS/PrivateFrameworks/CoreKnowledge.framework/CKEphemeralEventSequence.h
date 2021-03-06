//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKEphemeralReadableEventSequence-Protocol.h>
#import <CoreKnowledge/CKEphemeralWritableEventSequence-Protocol.h>

@class CKEntity, OS_dispatch_queue;

@interface CKEphemeralEventSequence : NSObject <CKEphemeralReadableEventSequence, CKEphemeralWritableEventSequence>
{
    // Error parsing type: , name: queue
}

+ (id)identifierDateFormat;
+ (id)JOINER;
- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) CKEntity *historyStartEvent;
- (id)init;
@property(nonatomic, readonly) OS_dispatch_queue *queue; // @synthesize queue;
- (id)last;
- (id)first;
- (id)eventsWithIdentifier:(id)arg1;
- (id)eventsBetween:(id)arg1 and:(id)arg2;
- (id)findEntityPreceding:(id)arg1 error:(id *)arg2;
- (void)writeEventsToKnowledgeStreamNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)appendEvent:(id)arg1;
- (void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadFromKnowledgeStreamNamed:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

