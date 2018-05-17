//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSOrderedSet, NSString, TDImageStackAsset, TDThemeCompressionType;

@interface TDLayerStackRenditionSpec : TDRenditionSpec
{
    struct CGSize primitiveCanvasSize;
}

@property(nonatomic) struct CGSize primitiveCanvasSize; // @synthesize primitiveCanvasSize;
- (void)prepareForDeletion;
- (void)awakeFromFetch;
@property(nonatomic) struct CGSize canvasSize; // @dynamic canvasSize;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)canBePackedWithDocument:(id)arg1;

// Remaining properties
@property(retain, nonatomic) TDImageStackAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSString *canvasSizeString; // @dynamic canvasSizeString;
@property(retain, nonatomic) TDThemeCompressionType *compressionType; // @dynamic compressionType;
@property(retain, nonatomic) NSOrderedSet *layerReferences; // @dynamic layerReferences;

@end
