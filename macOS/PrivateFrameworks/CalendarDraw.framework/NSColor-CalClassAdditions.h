//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSColor.h>

@interface NSColor (CalClassAdditions)
+ (id)_adjustColor:(id)arg1 withCurrentLuminance:(double)arg2 toLuminance:(double)arg3 blendFraction:(double)arg4;
@property(readonly) double cal_luminance;
@property(readonly) BOOL cal_isLightColor;
@property(readonly) BOOL cal_isDarkColor;
- (id)cal_adjustedToAtMostLuminance:(double)arg1;
- (id)cal_adjustedToAtLeastLuminance:(double)arg1;
@end

