//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIImage, NSArray;

@interface PISelectiveColorFilter : CIFilter
{
    CIImage *_inputImage;
    NSArray *_inputCorrections;
}

+ (id)convertFromIPT:(id)arg1;
+ (id)convertToIPT:(id)arg1;
+ (id)selectiveColorKernels;
+ (double)iptHueAngleFromRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (float)hueAngleFrom:(const float *)arg1;
+ (void)iptFromLinearInto:(float *)arg1 fromRed:(float)arg2 green:(float)arg3 blue:(float)arg4;
@property(retain, nonatomic) NSArray *inputCorrections; // @synthesize inputCorrections=_inputCorrections;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (id)hueSatLumTable;

@end
