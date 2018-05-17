//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, UINavigationItem, _UINavigationBarTransitionAssistant;

__attribute__((visibility("hidden")))
@interface _UINavigationBarItemStack : NSObject
{
    NSArray *_previousItems;
    NSMutableArray *_items;
    id <_UINavigationItemChangeObserver> _changeObserver;
    int _state;
    _UINavigationBarTransitionAssistant *_transitionAssistant;
}

@property(readonly, nonatomic) _UINavigationBarTransitionAssistant *transitionAssistant; // @synthesize transitionAssistant=_transitionAssistant;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <_UINavigationItemChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void).cxx_destruct;
- (id)description;
- (int)effectiveDisplayModeForItemInPreviousStack:(id)arg1;
- (int)effectiveDisplayModeForItemInCurrentStack:(id)arg1;
- (int)_effectiveDisplayModeForItem:(id)arg1 inStack:(id)arg2;
- (void)iterateItems:(CDUnknownBlockType)arg1;
- (_Bool)stackItemsAreEqualTo:(id)arg1;
- (id)_shim_popNestedNavigationItem;
- (void)_shim_pushNestedNavigationItem:(id)arg1;
- (void)cancelOperation;
- (void)completeOperation;
- (void)_completeTransition;
- (void)setItems:(id)arg1 withTransitionAssistant:(id)arg2;
- (void)popItemWithTransitionAssistant:(id)arg1;
- (void)pushItem:(id)arg1 withTransitionAssistant:(id)arg2;
- (void)_prepareTransitionWithAssistant:(id)arg1;
- (void)_updateChangeObserversFor:(id)arg1;
@property(readonly, nonatomic) UINavigationItem *previousBackItem;
@property(readonly, nonatomic) UINavigationItem *previousTopItem;
@property(readonly, nonatomic) UINavigationItem *backItem;
@property(readonly, nonatomic) UINavigationItem *topItem;
@property(readonly, nonatomic, getter=isPushingOrPopping) _Bool pushingOrPopping;
@property(readonly, nonatomic) int itemCount;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)initWithItems:(id)arg1;
- (id)init;

@end
