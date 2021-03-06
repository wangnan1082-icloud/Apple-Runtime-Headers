//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage, NSData, NSString, NSURL;

@interface PVImage : NSObject
{
    struct CGImage *_CGImage;
    CIImage *_CIImage;
    NSURL *_imageURL;
    NSData *_imageData;
    unsigned long long _assetWidth;
    unsigned long long _assetHeight;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _orientedWidth;
    unsigned long long _orientedHeight;
    unsigned long long _bytesPerRow;
    unsigned long long _orientation;
    long long _modelId;
    NSString *_adjustmentVersion;
}

+ (id)imageWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4;
+ (id)imageWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4;
+ (id)imageWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned long long)arg4;
+ (id)imageWithCGImage:(struct CGImage *)arg1 orientation:(unsigned long long)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1 orientation:(unsigned long long)arg2 modelId:(long long)arg3 adjustmentVersion:(id)arg4;
@property(copy, nonatomic) NSString *adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property(readonly, nonatomic) long long modelId; // @synthesize modelId=_modelId;
@property(readonly, nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) unsigned long long orientedHeight; // @synthesize orientedHeight=_orientedHeight;
@property(readonly, nonatomic) unsigned long long orientedWidth; // @synthesize orientedWidth=_orientedWidth;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned long long assetHeight; // @synthesize assetHeight=_assetHeight;
@property(readonly, nonatomic) unsigned long long assetWidth; // @synthesize assetWidth=_assetWidth;
@property(readonly, retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (struct CGRect)imageRectForNormalizedRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
@property(readonly, retain, nonatomic) CIImage *CIImage; // @synthesize CIImage=_CIImage;
- (void)dealloc;
- (id)initWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4;
- (id)initWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4;
- (id)initWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned long long)arg4;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(unsigned long long)arg2 modelId:(long long)arg3 adjustmentVersion:(id)arg4;

@end

