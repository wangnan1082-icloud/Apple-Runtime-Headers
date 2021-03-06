//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBLSharedPhotoStreamManager;

@interface SBLCloudFeedEntriesManager : NSObject
{
    SBLSharedPhotoStreamManager *_sharedPhotoStreamManager;
}

@property(readonly) __weak SBLSharedPhotoStreamManager *sharedPhotoStreamManager; // @synthesize sharedPhotoStreamManager=_sharedPhotoStreamManager;
- (void).cxx_destruct;
- (void)notifyCloudFeedRebuildProgressUpdated:(double)arg1;
- (void)notifyCloudFeedEntriesUpdated:(id)arg1 added:(id)arg2 deleted:(id)arg3;
- (void)notifyCloudFeedChanged;
- (void)firstEntryWithType:(long long)arg1 albumGUID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)recentAssetsEntriesWithLimit:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)recentEntriesWithEarliestDate:(id)arg1 latestDate:(id)arg2 limit:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithSharedPhotoStreamManager:(id)arg1;
- (BOOL)_checkSharedStreamsState:(CDUnknownBlockType)arg1;

@end

