//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/TMarkTornDown-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TRunAfterHelper : NSObject <TMarkTornDown>
{
    unsigned long long _validatorID;
    unique_function_63952f55 _functor;
    _Bool _onMainThread;
    struct TNSRef<FI_TRunAfterHelper, void> _strongSelf;
    struct TSpinLock _strongSelfRunAfterLock;
    _Bool _cancelled;
}

+ (TNSWeakPtr_a131d41e)postFunctor:(unique_function_63952f55 *)arg1 withValidatorID:(unsigned long long)arg2 delayInSec:(double)arg3 onMainThread:(_Bool)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)post;
@property(readonly, getter=isTornDown) _Bool tornDown;
- (id)initWithFunctor:(unique_function_63952f55 *)arg1 withValidatorID:(unsigned long long)arg2 onMainThread:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

