//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTaskRules-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRulesNil : NSObject <GEODataSessionTaskRules>
{
}

+ (id)nilRules;
- (void)removeCompletedSubtaskObserver:(id)arg1;
- (void)addCompletedSubtaskObserver:(id)arg1;
- (id)completedSubtaskForDataTask:(id)arg1;
- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (_Bool)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned int)arg3;
- (_Bool)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned int)arg2 forRequest:(id)arg3;
- (id)initForType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

