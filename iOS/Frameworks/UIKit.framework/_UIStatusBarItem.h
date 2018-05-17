//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSSet, NSString;

@interface _UIStatusBarItem : NSObject
{
    _Bool _needsUpdate;
    NSString *_identifier;
    NSMutableDictionary *_displayItems;
}

+ (id)createItemForIdentifier:(id)arg1 visualProvider:(id)arg2;
+ (Class)itemClassForIdentifier:(id)arg1 visualProvider:(id)arg2;
+ (id)defaultDisplayIdentifier;
+ (id)identifier;
+ (id)itemIdentifierForDisplayItemIdentifier:(id)arg1;
+ (id)displayItemIdentifierFromIdentifier:(id)arg1 string:(id)arg2;
+ (id)displayItemIdentifierFromString:(id)arg1;
+ (id)itemIdentifierFromString:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *displayItems; // @synthesize displayItems=_displayItems;
@property(readonly) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (id)displayItemForIdentifier:(id)arg1;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)_applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (void)setNeedsUpdate;
@property(readonly) NSSet *dependentEntryKeys;
- (id)description;
- (id)init;

@end
