//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class NSString, WKWebView;

__attribute__((visibility("hidden")))
@interface WKScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate>
{
    WKWebView *_internalDelegate;
    struct WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithInternalDelegate:(id)arg1 externalDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
