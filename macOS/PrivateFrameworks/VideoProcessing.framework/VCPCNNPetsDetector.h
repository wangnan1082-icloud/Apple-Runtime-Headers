//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPCNNPetsDetector : NSObject
{
}

+ (id)detector:(int)arg1;
- (int)petsDetection:(struct __CVBuffer *)arg1 petsRegions:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)generatePetsRegions:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 maxNumRegions:(int)arg5;
- (void)nonMaxSuppression:(id)arg1;
- (int)generatePetsBoxes:(id)arg1 cancel:(CDUnknownBlockType)arg2;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)initWithImage:(float *)arg1 image:(struct __CVBuffer *)arg2 forChunk:(int)arg3;

@end

