//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, NSUUID;

@interface UIAccessibilityCustomRotor : NSObject
{
    NSUUID *uuid;
    id targetElement;
    long long systemRotorType;
    NSAttributedString *_attributedName;
    CDUnknownBlockType _itemSearchBlock;
}

@property(copy, nonatomic) CDUnknownBlockType itemSearchBlock; // @synthesize itemSearchBlock=_itemSearchBlock;
@property(copy, nonatomic) NSAttributedString *attributedName; // @synthesize attributedName=_attributedName;
@property(nonatomic) long long systemRotorType; // @synthesize systemRotorType;
@property(nonatomic) __weak id targetElement; // @synthesize targetElement;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name;
- (id)initWithSystemType:(long long)arg1 itemSearchBlock:(CDUnknownBlockType)arg2;
- (id)initWithAttributedName:(id)arg1 itemSearchBlock:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 itemSearchBlock:(CDUnknownBlockType)arg2;

@end
