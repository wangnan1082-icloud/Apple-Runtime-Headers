//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPAColorProfile, PAImageAssetType, PAImageItemController;
@protocol OS_dispatch_queue;

@interface PAImageItemSampler : NSObject
{
    PAImageAssetType *_assetType;
    IPAColorProfile *_colorProfile;
    PAImageItemController *_itemController;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _pendingHandler;
}

+ (id)renderedSamplerWithVersion:(id)arg1 colorProfile:(id)arg2 assetType:(id)arg3 renderDescription:(id)arg4 renderDescriptionFilter:(id)arg5;
+ (id)masterSamplerWithVersion:(id)arg1 colorProfile:(id)arg2 assetType:(id)arg3 renderDescription:(id)arg4 renderDescriptionFilter:(id)arg5;
- (void).cxx_destruct;
- (struct CGColor *)_newColorFromBuffer:(id)arg1 roi:(struct CGRect)arg2;
- (unsigned long long)_collectSamples:(double *)arg1 data:(const char *)arg2 bytesPerRow:(long long)arg3 format:(int)arg4 roi:(struct CGRect)arg5;
- (void)cancel;
- (void)sampleColorAt:(struct CGRect)arg1 scale:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithVersion:(id)arg1 colorProfile:(id)arg2 assetType:(id)arg3 renderDescription:(id)arg4 renderDescriptionFilter:(id)arg5;

@end

