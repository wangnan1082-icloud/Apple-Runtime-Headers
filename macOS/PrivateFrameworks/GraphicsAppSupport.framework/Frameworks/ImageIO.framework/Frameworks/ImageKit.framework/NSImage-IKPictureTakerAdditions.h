//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (IKPictureTakerAdditions)
- (id)IKIPPNGDataWithMaxSize:(double)arg1 compression:(double)arg2;
- (id)IKIPJPEGDataWithMaxSize:(double)arg1 compression:(float)arg2;
- (id)IKIPDataWithMaxSize:(double)arg1 type:(unsigned long long)arg2 compression:(double)arg3;
- (id)IKIPImageWithMaxSize:(int)arg1;
- (id)IKIPImageWithMaxSize:(int)arg1 withLeftPad:(int)arg2;
- (void)IKIPDrawNicelyScaledInRect:(struct CGRect)arg1 inView:(id)arg2 operation:(unsigned long long)arg3 fraction:(float)arg4;
- (void)IKIPDrawNicelyScaledInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(float)arg3;
- (struct CGSize)IKIPLargestRepSize;
@end

