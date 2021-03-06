//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Zoom/NSCopying-Protocol.h>

@class NSString;

@interface ZMKeyboardKey : NSObject <NSCopying>
{
    unsigned long long _keyCode;
    NSString *_charString;
    unsigned long long _flags;
}

+ (void)initialize;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *charString; // @synthesize charString=_charString;
@property(nonatomic) unsigned long long keyCode; // @synthesize keyCode=_keyCode;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1 flags:(unsigned long long)arg2;
- (id)initWithKeyCode:(unsigned long long)arg1 flags:(unsigned long long)arg2;
- (id)initWithCGEvent:(struct __CGEvent *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (SEL)selector;

@end

