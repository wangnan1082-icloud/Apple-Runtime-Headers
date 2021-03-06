//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityEvents/NSCopying-Protocol.h>

@class NSString;

@interface AXEEventTapKeyboardEvent : NSObject <NSCopying>
{
    BOOL _isDown;
    BOOL _isRepeat;
    BOOL _isModifierChangedEvent;
    BOOL _isCommandDown;
    BOOL _isOptionDown;
    BOOL _isControlDown;
    BOOL _isShiftDown;
    BOOL _isFnDown;
    unsigned short _keyCode;
    NSString *_unicodeCharacter;
}

+ (id)keyboardEventFromCGEvent:(struct __CGEvent *)arg1;
@property(readonly, nonatomic) BOOL isFnDown; // @synthesize isFnDown=_isFnDown;
@property(readonly, nonatomic) BOOL isShiftDown; // @synthesize isShiftDown=_isShiftDown;
@property(readonly, nonatomic) BOOL isControlDown; // @synthesize isControlDown=_isControlDown;
@property(readonly, nonatomic) BOOL isOptionDown; // @synthesize isOptionDown=_isOptionDown;
@property(readonly, nonatomic) BOOL isCommandDown; // @synthesize isCommandDown=_isCommandDown;
@property(readonly, nonatomic) BOOL isModifierChangedEvent; // @synthesize isModifierChangedEvent=_isModifierChangedEvent;
@property(readonly, nonatomic) BOOL isRepeat; // @synthesize isRepeat=_isRepeat;
@property(readonly, nonatomic) BOOL isDown; // @synthesize isDown=_isDown;
@property(readonly, copy, nonatomic) NSString *unicodeCharacter; // @synthesize unicodeCharacter=_unicodeCharacter;
@property(readonly, nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithKeyCode:(unsigned short)arg1 unicodeCharacter:(id)arg2 isDown:(BOOL)arg3 isRepeat:(BOOL)arg4 isModifierChangedEvent:(BOOL)arg5 isCommandDown:(BOOL)arg6 isOptionDown:(BOOL)arg7 isControlDown:(BOOL)arg8 isShiftDown:(BOOL)arg9 isFnDown:(BOOL)arg10;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

