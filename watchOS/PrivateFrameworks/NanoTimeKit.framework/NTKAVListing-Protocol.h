//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLKVideo, UIImage;

@protocol NTKAVListing <NSObject>
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) CLKVideo *video;
- (void)discardAssets;
- (_Bool)snapshotDiffers:(id <NTKAVListing>)arg1;
@end
