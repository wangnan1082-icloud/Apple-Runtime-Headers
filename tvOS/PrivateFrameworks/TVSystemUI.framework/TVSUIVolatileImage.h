//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, _UIAssetManager;

@interface TVSUIVolatileImage : NSObject
{
    _UIAssetManager *_assetManager;
    UIImage *_image;
}

+ (id)volatileImageWithImage:(id)arg1 fromAssetManager:(id)arg2;
+ (id)volatileImageWithImage:(id)arg1;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)_init;
- (id)init;

@end

