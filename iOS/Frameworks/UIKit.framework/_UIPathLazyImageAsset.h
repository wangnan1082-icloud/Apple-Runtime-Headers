//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImageAsset.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIPathLazyImageAsset : UIImageAsset
{
    _Bool _imagesHaveBeenLoaded;
    _Bool _haveCGCacheImages;
    NSArray *_imagePaths;
}

@property(nonatomic) _Bool haveCGCacheImages; // @synthesize haveCGCacheImages=_haveCGCacheImages;
@property(copy, nonatomic) NSArray *imagePaths; // @synthesize imagePaths=_imagePaths;
- (void).cxx_destruct;
- (_Bool)_containsImagesInPath:(id)arg1;
- (void)_clearResolvedImageResources;
- (id)imageWithTraitCollection:(id)arg1;

@end
