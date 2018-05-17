//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEODataSessionTaskRules.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRulesHelper : NSObject <GEODataSessionTaskRules>
{
    id <GEODataSessionTask> _xpcTask;
    id <GEODataSessionTask> _urlTask;
    id <GEODataSessionTask> _completedSubtask;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_isolation;
}

- (void).cxx_destruct;
- (void)_notifyObserversOfCompletedSubtask;
- (void)removeCompletedSubtaskObserver:(id)arg1;
- (void)addCompletedSubtaskObserver:(id)arg1;
- (id)completedSubtaskForDataTask:(id)arg1;
- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (_Bool)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned int)arg3;
- (_Bool)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned int)arg2 forRequest:(id)arg3;
- (void)setSubtask:(id)arg1 ofType:(unsigned int)arg2;
- (id)initForType:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
