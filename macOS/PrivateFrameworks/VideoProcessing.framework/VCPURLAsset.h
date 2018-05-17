//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPAsset.h>

@class NSDictionary, NSURL;

@interface VCPURLAsset : VCPAsset
{
    NSURL *_imageURL;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    BOOL _onceExif;
    NSDictionary *_cachedExif;
}

+ (id)imageAssetWithURL:(id)arg1;
- (void).cxx_destruct;
- (struct __CVBuffer *)imageWithPreferredDimension:(unsigned long long)arg1;
- (id)exif;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)initWithImageURL:(id)arg1;

@end
