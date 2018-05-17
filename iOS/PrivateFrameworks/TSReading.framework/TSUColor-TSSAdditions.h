//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSUColor.h"

#import "TSSPreset.h"
#import "TSSPresetSource.h"
#import "TSSThemeAsset.h"

@class NSString;

@interface TSUColor (TSSAdditions) <TSSPreset, TSSPresetSource, TSSThemeAsset>
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (id)p_defaultPresetColors:(int)arg1;
- (_Bool)isThemeEquivalent:(id)arg1;
@property(readonly, nonatomic) NSString *presetKind;
@end
