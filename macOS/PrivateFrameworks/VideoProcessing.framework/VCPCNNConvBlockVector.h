//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoProcessing/VCPCNNConvBlock.h>

@interface VCPCNNConvBlockVector : VCPCNNConvBlock
{
    CDUnknownFunctionPointerType CalculateDotProductOfChunk;
}

- (int)forward;
- (int)chunkFourForward;
- (int)straightForwardForChunkFour;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (BOOL)isFilterSizeSupported:(int)arg1;
- (int)initializeRest;

@end

