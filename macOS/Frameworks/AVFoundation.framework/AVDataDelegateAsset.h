//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@class AVDataDelegateAssetInternal;

@interface AVDataDelegateAsset : AVAsset
{
    AVDataDelegateAssetInternal *_dataDelegateAsset;
}

+ (BOOL)supportsPlayerItems;
+ (id)assetWithDataDelegate:(id)arg1 contentType:(id)arg2 contentSize:(long long)arg3 options:(id)arg4;
- (id)tracks;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (void)dealloc;
@property(readonly, nonatomic) __weak id <AVAssetDataDelegate> dataDelegate;
- (id)initWithDataDelegate:(id)arg1 contentType:(id)arg2 contentSize:(long long)arg3 options:(id)arg4;

@end
