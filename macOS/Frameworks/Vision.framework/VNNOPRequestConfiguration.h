//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNSupportedImageSize;

__attribute__((visibility("hidden")))
@interface VNNOPRequestConfiguration : VNImageBasedRequestConfiguration
{
    BOOL _detectorWantsAnisotropicScaling;
    VNSupportedImageSize *_detectorPreferredImageSize;
    double _detectorExecutionTimeInterval;
}

@property(nonatomic) double detectorExecutionTimeInterval; // @synthesize detectorExecutionTimeInterval=_detectorExecutionTimeInterval;
@property(nonatomic) BOOL detectorWantsAnisotropicScaling; // @synthesize detectorWantsAnisotropicScaling=_detectorWantsAnisotropicScaling;
@property(copy, nonatomic) VNSupportedImageSize *detectorPreferredImageSize; // @synthesize detectorPreferredImageSize=_detectorPreferredImageSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

