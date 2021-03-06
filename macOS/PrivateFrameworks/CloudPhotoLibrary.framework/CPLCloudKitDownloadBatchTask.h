//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLCloudKitTransportTask.h>

#import <CloudPhotoLibrary/CPLEngineTransportDownloadBatchTask-Protocol.h>

@class CKServerChangeToken, CPLCloudKitScope, CPLEngineScope, CPLLibraryInfo, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitDownloadBatchTask : CPLCloudKitTransportTask <CPLEngineTransportDownloadBatchTask>
{
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressHandler;
    CKServerChangeToken *_syncAnchor;
    CPLCloudKitScope *_cloudKitScope;
    CPLEngineScope *_scope;
    CPLLibraryInfo *_currentLibraryInfo;
}

@property(readonly, nonatomic) CPLLibraryInfo *currentLibraryInfo; // @synthesize currentLibraryInfo=_currentLibraryInfo;
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
@property(readonly, copy, nonatomic) CKServerChangeToken *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
- (void).cxx_destruct;
- (void)runOperations;
- (void)sendProgressBatch:(id)arg1 updatedLibraryInfo:(id)arg2 updatedLibraryState:(id)arg3 updatedSyncAnchor:(id)arg4;
- (void)run;
- (id)initWithController:(id)arg1 syncAnchor:(struct NSData *)arg2 cloudKitScope:(id)arg3 scope:(id)arg4 currentLibraryInfo:(id)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) BOOL backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) BOOL forcedTask;
@property(nonatomic) BOOL foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) BOOL highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end

