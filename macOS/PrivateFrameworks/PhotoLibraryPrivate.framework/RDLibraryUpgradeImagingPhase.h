//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDLibraryUpgradePhaseProcessorCommon.h>

@class NSFileManager;

@interface RDLibraryUpgradeImagingPhase : RDLibraryUpgradePhaseProcessorCommon
{
    NSFileManager *_fm;
}

- (void).cxx_destruct;
- (void)phaseRemoveInvalidPreviewsForVersions:(id)arg1 mastersById:(id)arg2 ipsList:(id)arg3;
- (void)phaseVersionResourcesWithProxyList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupDefaults;
- (id)initWithDatabase:(id)arg1 fromSchema:(long long)arg2 delegate:(id)arg3;

@end

