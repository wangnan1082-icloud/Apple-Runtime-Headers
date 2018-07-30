//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, NSResponder<_NSQuickActionItemSource>;

__attribute__((visibility("hidden")))
@interface _NSQuickActionAutovalidationScheduler : NSObject
{
    id <_NSQuickActionAutovalidationHandler> _handler;
    NSResponder<_NSQuickActionItemSource> *_responder;
    NSEvent *_lastEventProcessedForValidation;
    CDUnknownBlockType _hysteresisBlock;
    BOOL _invalidationIsDeferrable;
    BOOL _isObserving;
    BOOL _isActive;
}

+ (id)schedulerWithHandler:(id)arg1;
- (void).cxx_destruct;
- (void)windowDidUpdate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancel;
- (void)start;
@property __weak id <_NSQuickActionItemSource> itemSource;
- (void)dealloc;
- (id)initWithHandler:(id)arg1;

@end
