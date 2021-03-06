//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

#import <Photos/PHAssetPropertySet-Protocol.h>

@class PHAsset, RDVersion;

@interface PHAssetPhotoIrisProperties : PHAssetPropertySet <PHAssetPropertySet>
{
    RDVersion *_version;
}

+ (void)fetchPropertiesForObjects:(id)arg1 photoLibrary:(id)arg2;
+ (id)propertiesToLoadFromPhotoLibrary:(id)arg1;
@property(retain, nonatomic) RDVersion *version; // @synthesize version=_version;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned char photoIrisVisibilityState;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration;
- (id)initWithAsset:(id)arg1 version:(id)arg2;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak PHAsset *asset;

@end

