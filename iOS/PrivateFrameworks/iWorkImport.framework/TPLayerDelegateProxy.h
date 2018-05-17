//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CALayerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TPLayerDelegateProxy : NSObject <CALayerDelegate>
{
    id <TPLayerDelegateProxyDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)displayLayer:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)clearDelegate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
