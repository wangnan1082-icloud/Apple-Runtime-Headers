//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareServicesCore/ICPMyPhotoStreamServiceClientObserver-Protocol.h>
#import <ShareServicesCore/RKImporterReceiver-Protocol.h>
#import <ShareServicesCore/iCloudPhotosClientObserver-Protocol.h>

@class NSMutableArray, NSString, PFDispatchQueue, iCloudPhotosClient;

@interface SBLMyPhotoStreamManager : NSObject <iCloudPhotosClientObserver, ICPMyPhotoStreamServiceClientObserver, RKImporterReceiver>
{
    iCloudPhotosClient *_photosClient;
    PFDispatchQueue *_autoUploadQueue;
    PFDispatchQueue *_importerMulticasterQueue;
    NSMutableArray *_pendingAutoUploadTasks;
    PFDispatchQueue *_dispatchQueue;
    PFDispatchQueue *_replyQueue;
}

@property(readonly) PFDispatchQueue *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(readonly) PFDispatchQueue *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly) NSMutableArray *pendingAutoUploadTasks; // @synthesize pendingAutoUploadTasks=_pendingAutoUploadTasks;
@property(readonly) PFDispatchQueue *importerMulticasterQueue; // @synthesize importerMulticasterQueue=_importerMulticasterQueue;
@property(readonly) PFDispatchQueue *autoUploadQueue; // @synthesize autoUploadQueue=_autoUploadQueue;
@property __weak iCloudPhotosClient *photosClient; // @synthesize photosClient=_photosClient;
- (void).cxx_destruct;
- (void)_processAutoUploadQueue;
- (void)processAutoUploadQueue;
- (void)queueVersionsForAutoUpload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)importedVersionUuids:(id)arg1 toDatabase:(id)arg2;
- (void)deleteMediaItemsForItemReferences:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)postVersions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)iCloudPhotosClientDidChangeState:(id)arg1;
- (void)updateForCurrentClientAndServiceState;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (void)shutdown:(CDUnknownBlockType)arg1;
- (void)initialize:(CDUnknownBlockType)arg1;
- (id)initWithiCloudPhotosClient:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

