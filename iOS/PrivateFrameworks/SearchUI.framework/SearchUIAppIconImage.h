//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUIImage.h>

#import "NSSecureCoding.h"

@class NSString;

@interface SearchUIAppIconImage : SearchUIImage <NSSecureCoding>
{
    unsigned long long _variant;
    NSString *_bundleID;
}

+ (double)cornerRadiusForSmallSpotlightIcons;
+ (double)cornerRadiusForHomeScreenIcons;
+ (double)iconCornerRadiusForFormat:(int)arg1;
+ (struct CGRect)visibleFrameForTinyIcons;
+ (struct CGRect)visibleFrameForSmallSpotlightIcons;
+ (struct CGRect)visibleFrameForHomeScreenIcons;
+ (struct CGSize)homeScreenIconSize;
+ (struct CGSize)tinyIconSize;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned long long variant; // @synthesize variant=_variant;
- (void).cxx_destruct;
- (id)generateImageWithFormat:(int)arg1;
@property(readonly) _Bool isValid;
- (id)loadImage;
- (void)setSize;
- (id)initWithBundleID:(id)arg1 variant:(unsigned long long)arg2;

@end
