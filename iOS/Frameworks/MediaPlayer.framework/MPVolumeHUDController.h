//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface MPVolumeHUDController : NSObject
{
    NSMutableSet *_displays;
    NSMutableSet *_categories;
    _Bool _needsUpdate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateVisibility;
- (void)_addCategory:(id)arg1;
- (void)unregisterView:(id)arg1 inContext:(id)arg2;
- (void)registerView:(id)arg1 inContext:(id)arg2;
@property(readonly, nonatomic) id mainContext;
- (void)setNeedsUpdate;
- (void)removeVolumeDisplay:(id)arg1;
- (void)addVolumeDisplay:(id)arg1;
- (id)init;

@end

