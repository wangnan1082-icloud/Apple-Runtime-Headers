//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureConnection, AVCaptureSession, AVWeakReference, CALayer, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface AVCaptureVideoPreviewLayerInternal : NSObject
{
    NSString *sinkID;
    AVCaptureSession *session;
    AVCaptureConnection *connection;
    struct OpaqueFigCaptureSession *figCaptureSession;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    CALayer *sublayer;
    struct CGSize sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    unsigned int imageQueueSlot;
    struct CGSize previewSize;
    double previewRotationDegrees;
    NSString *gravity;
    _Bool disableActions;
    AVWeakReference *weakReference;
    long long orientation;
    _Bool automaticallyAdjustsMirroring;
    _Bool mirrored;
    _Bool isPresentationLayer;
    _Bool visible;
    _Bool isPaused;
    _Bool chromaNoiseReductionEnabled;
    int changeSeed;
    struct CGAffineTransform captureDeviceTransform;
    double rollAdjustment;
    _Bool depthDataDeliverySupported;
    _Bool depthDataDeliveryEnabled;
    _Bool filterRenderingEnabled;
    _Bool unoptimizedFilterRenderingEnabled;
    NSArray *videoPreviewFilters;
    double oddScreenWidth;
    double oddScreenScale;
}

@end

