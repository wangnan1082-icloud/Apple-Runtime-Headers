//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"

@class NSString;

@interface MKCALayerCompletionDelegate : NSObject <CAAnimationDelegate>
{
    CDUnknownBlockType _completion;
}

+ (id)delegateWithCompletion:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
