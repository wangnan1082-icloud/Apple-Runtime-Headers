//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Geode/MsgImageFilter.h>

@interface MsgDefinitionFilter : MsgImageFilter
{
}

+ (id)feelingsOn:(id)arg1 withRadius:(float)arg2 amount:(float)arg3;
+ (id)meaningOn:(id)arg1 withRadius:(float)arg2 amount:(float)arg3;
+ (id)structureBlur:(id)arg1 withBilateralRadius:(float)arg2 edgeDetail:(float)arg3 andAnisotropicDiffusionIterations:(int)arg4 withLimiter:(float)arg5;
+ (id)meaningfulBlur:(id)arg1 withRadius:(float)arg2;
+ (id)definitionOn:(id)arg1 withBilateralRadius:(float)arg2 edgeDetail:(float)arg3 andAnisotropicDiffusionIterations:(int)arg4 withLimiter:(float)arg5 amount:(float)arg6;
+ (id)definitionOn:(id)arg1 withGaussianBlurRadius:(float)arg2 amount:(float)arg3;
+ (id)definitionOn:(id)arg1 using:(id)arg2 withAmount:(float)arg3;
+ (id)anisotropicDiffusionOn:(id)arg1 iterations:(int)arg2 withLimiter:(float)arg3;
+ (id)kernelArray;
+ (id)filterName;
- (struct CGRect)roi3x3:(long long)arg1 destRect:(struct CGRect)arg2;

@end

