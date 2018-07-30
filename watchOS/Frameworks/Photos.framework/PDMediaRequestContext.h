//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHAdjustmentDataRequestDelegate.h"
#import "PHImageRequestDelegate.h"
#import "PHRecyclableObject.h"
#import "PHResourceAvailabilityChangeRequestDelegate.h"
#import "PHVideoChoosingAndAvailabilityRequestDelegate.h"
#import "PHVideoRequestDelegate.h"

@class NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSProgress, NSString, PDVideoRequest, PHAsset, PHImageDisplaySpec, PHImageRequestOptions, PHImageResult, PHLivePhotoRequestOptions, PHMediaRequest, PHVideoRequestOptions;

@interface PDMediaRequestContext : NSObject <PHImageRequestDelegate, PHResourceAvailabilityChangeRequestDelegate, PHVideoRequestDelegate, PHAdjustmentDataRequestDelegate, PHVideoChoosingAndAvailabilityRequestDelegate, PHRecyclableObject>
{
    unsigned long long _nextID;
    struct os_unfair_lock_s _lock;
    PHMediaRequest *_initialRequest;
    NSMutableArray *_requests;
    NSMutableArray *_jobs;
    NSMutableDictionary *_requestedResourcesByTaskIdentifier;
    CDUnknownBlockType _resultHandler;
    _Bool _isCancelled;
    PDVideoRequest *_outboundVideoRequest;
    _Bool _finalImageReceived;
    _Bool _finalVideoReceived;
    PHImageResult *_result;
    NSError *_error;
    NSDictionary *_info;
    NSMutableDictionary *_progressByTaskIdentifier;
    NSArray *_allProgresses;
    NSProgress *_totalProgress;
    id <PHMediaRequestContextDelegate> _delegate;
    int _requestID;
    int _type;
    PHAsset *_asset;
    PHImageDisplaySpec *_displaySpec;
    PHImageRequestOptions *_imageOptions;
    PHVideoRequestOptions *_videoOptions;
    PHLivePhotoRequestOptions *_livePhotoOptions;
    unsigned long long _managerID;
}

+ (id)livePhotoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 livePhotoRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (id)videoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 videoRequestOptions:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
+ (id)imageRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 imageRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (void)initialize;
@property(retain, nonatomic) PHLivePhotoRequestOptions *livePhotoOptions; // @synthesize livePhotoOptions=_livePhotoOptions;
@property(retain, nonatomic) PHVideoRequestOptions *videoOptions; // @synthesize videoOptions=_videoOptions;
@property(retain, nonatomic) PHImageRequestOptions *imageOptions; // @synthesize imageOptions=_imageOptions;
@property(readonly, nonatomic) PHImageDisplaySpec *displaySpec; // @synthesize displaySpec=_displaySpec;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) unsigned long long managerID; // @synthesize managerID=_managerID;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(nonatomic) __weak id <PHMediaRequestContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recycleRequests;
- (void)cancel;
- (void)_startRequest:(id)arg1;
- (void)start;
- (void)adjustmentDataRequest:(id)arg1 didFinishWithResultInfo:(id)arg2 error:(id)arg3;
- (void)adjustmentDataRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)videoRequest:(id)arg1 didFinishLoadingVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)videoRequest:(id)arg1 isRequestingVideoChoosingForSize:(struct CGSize)arg2;
- (void)imageRequest:(id)arg1 didFinishLoadingImageResult:(id)arg2 info:(id)arg3 error:(id)arg4;
- (_Bool)imageRequestIsInitialRequestOfMultistageRequest:(id)arg1;
- (void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(CDUnknownBlockType)arg2;
- (void)imageRequest:(id)arg1 didProcessHintsWithLocallyAvailable:(_Bool)arg2 isDegraded:(_Bool)arg3;
- (void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(_Bool *)arg2 didFindImage:(_Bool *)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)mediaRequest:(id)arg1 isRequestingLocalAvailabilityChangeForResource:(id)arg2;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didLoadData:(id)arg2;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(_Bool)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)prepareForReuse;
- (void)_availabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(id)arg4;
- (void)_makeAvailabilityRequest:(id)arg1 forResource:(id)arg2 mediaRequest:(id)arg3;
- (void)_setupProgressIfNeeded;
- (id)_adjustmentRequest;
- (id)_initialVideoRequest;
- (id)_initialImageRequest;
- (CDUnknownBlockType)_progressHandler;
- (_Bool)_isSynchronous;
- (_Bool)_isNetworkAccessAllowed;
- (int)_imageVersion;
- (int)_imageDeliveryMode;
- (void)_spawnNewImageRequestWithBehaviorSpec:(id)arg1;
- (id)_requestWithIdentifier:(id)arg1;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
