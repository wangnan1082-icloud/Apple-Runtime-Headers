//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSArray, NSMutableArray, NSMutableIndexSet;
@protocol CNScheduler;

@interface _CNCombineLatestObservable : CNObservable
{
    NSMutableArray *_observables;
    NSMutableArray *_results;
    NSMutableArray *_tokens;
    NSMutableIndexSet *_silentObservableIndexes;
    NSMutableIndexSet *_activeObservableIndexes;
    id <CNScheduler> _observerScheduler;
}

@property(readonly, nonatomic) id <CNScheduler> observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(readonly, nonatomic) NSMutableIndexSet *silentObservableIndexes; // @synthesize silentObservableIndexes=_silentObservableIndexes;
@property(readonly, nonatomic) NSMutableIndexSet *activeObservableIndexes; // @synthesize activeObservableIndexes=_activeObservableIndexes;
@property(readonly, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSArray *observables; // @synthesize observables=_observables;
- (void).cxx_destruct;
- (void)observableAtIndex:(unsigned int)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3;
- (void)observableAtIndexDidComplete:(unsigned int)arg1 forObserver:(id)arg2;
- (void)observableAtIndex:(unsigned int)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3;
- (id)subscribe:(id)arg1;
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;
- (id)initWithObservables:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithObservables:(id)arg1;

@end

