//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureConnection, AVCaptureSession, CALayer, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoPreviewLayerInternal : NSObject
{
    AVCaptureSession *session;
    AVCaptureConnection *connection;
    CALayer *sublayer;
    struct CGSize sourceSize;
    NSString *gravity;
    BOOL disableActions;
    BOOL isPresentationLayer;
    BOOL visible;
    struct __CFDictionary *videoPreviewSynchronizerUnits;
    struct __CFDictionary *videoPreviewOutputUnits;
    NSDictionary *pixelBufferAttributes;
}

@end

