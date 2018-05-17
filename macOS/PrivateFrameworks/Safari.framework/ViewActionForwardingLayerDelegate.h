//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CABackdropLayerDelegate.h"
#import "CALayerDelegate.h"

@class NSString, NSView;

__attribute__((visibility("hidden")))
@interface ViewActionForwardingLayerDelegate : NSObject <CALayerDelegate, CABackdropLayerDelegate>
{
    NSView *_view;
}

@property(readonly, nonatomic) __weak NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)initWithView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
