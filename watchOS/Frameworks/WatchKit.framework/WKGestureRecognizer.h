//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation, NSMethodSignature, NSString, WKInterfaceController;

@interface WKGestureRecognizer : NSObject
{
    _Bool _enabled;
    int _state;
    WKInterfaceController *_controller;
    NSString *_identifier;
    NSMethodSignature *_methodSignature;
    NSInvocation *_invocation;
    NSString *_property;
    NSString *_action;
    struct CGPoint _locInObject;
    struct CGRect _locObjectBounds;
}

+ (id)createWithController:(id)arg1 gestureData:(id)arg2;
@property(nonatomic) struct CGRect locObjectBounds; // @synthesize locObjectBounds=_locObjectBounds;
@property(nonatomic) struct CGPoint locInObject; // @synthesize locInObject=_locInObject;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *property; // @synthesize property=_property;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(retain, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak WKInterfaceController *controller; // @synthesize controller=_controller;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_sendGestureReply:(id)arg1 withSpecificKey:(id)arg2;
- (void)_invokeTargetAction;
- (void)callTargetActionWithGestureData:(id)arg1;
- (void)_setTargetAction;
- (void)_setProperty;
- (struct CGRect)objectBounds;
- (struct CGPoint)locationInObject;
- (id)verboseBaseDescription;
- (void)_setGestureData:(id)arg1;
- (id)initWithController:(id)arg1 gestureData:(id)arg2;

@end
