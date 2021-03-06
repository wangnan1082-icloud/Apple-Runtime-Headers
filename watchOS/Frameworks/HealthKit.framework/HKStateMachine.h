//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKStateMachineState, NSMutableArray, NSMutableDictionary, NSString;
@protocol HKStateMachineDelegate;

@interface HKStateMachine : NSObject
{
    NSMutableDictionary *_statesByIndex;
    NSMutableArray *_transitions;
    HKStateMachineState *_currentState;
    _Bool _isProcessingEvent;
    NSMutableArray *_pendingEvents;
    NSString *_name;
    id <HKStateMachineDelegate> _delegate;
}

+ (id)nameForOwner:(id)arg1 UUID:(id)arg2 tag:(id)arg3;
@property(readonly, nonatomic) HKStateMachineState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <HKStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)graphDescription;
- (void)_dequeueEvent;
- (void)_handleEvent:(int)arg1 date:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enqueueEvent:(int)arg1 date:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enterAtState:(int)arg1;
- (id)stateWithIndex:(int)arg1;
- (id)addStateTransitionFrom:(id)arg1 to:(id)arg2 event:(int)arg3 label:(id)arg4;
- (id)addStateWithIndex:(int)arg1 label:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

