//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, TSULRUCache;

__attribute__((visibility("hidden")))
@interface TSWPFontCache : NSObject
{
    TSULRUCache *_fontCache;
    NSMutableSet *_missingFonts;
    NSMutableArray *_familyNames;
    NSMutableDictionary *_familyDisplayNames;
    NSMutableDictionary *_familyNameToFontNameMap;
    NSMutableArray *_familyFonts;
    NSMutableArray *_cachedAvailableMembers;
    NSString *_cachedMembersFamilyName;
    NSArray *_cachedRecentFontNames;
}

+ (id)recentFonts;
+ (id)p_fontNameForFamilyName:(id)arg1;
+ (id)p_excludedFamilyNames;
+ (id)sharedCache;
- (void).cxx_destruct;
- (void)removeMissingFonts:(id)arg1;
- (_Bool)isFontMissing:(id)arg1;
- (void)addMissingFonts:(id)arg1;
@property(readonly, nonatomic) NSSet *missingFonts;
- (_Bool)registerRecentFont:(id)arg1;
- (id)recentFonts;
- (id)recentFontNames;
- (id)availableMembersOfFontFamily:(id)arg1;
- (id)fontNameForFamilyName:(id)arg1;
- (id)displayNameForFontFamily:(id)arg1;
- (id)sortedFontFamilies;
- (const struct __CTFont *)createFontWithName:(id)arg1 size:(double)arg2 options:(unsigned long long)arg3;
- (id)init;

@end
