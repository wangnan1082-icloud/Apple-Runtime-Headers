//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@interface NTKCompanionSinglePHAssetEditor : NTKCompanionResourceDirectoryEditor
{
}

+ (id)_assetForResourceDirectoryForDevice:(id)arg1;
+ (id)_createResourceDirectoryForSinglePHAssetForDevice:(id)arg1 previewOnly:(_Bool)arg2;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool shouldFinalize;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 shouldFinalize:(_Bool)arg3;

@end
