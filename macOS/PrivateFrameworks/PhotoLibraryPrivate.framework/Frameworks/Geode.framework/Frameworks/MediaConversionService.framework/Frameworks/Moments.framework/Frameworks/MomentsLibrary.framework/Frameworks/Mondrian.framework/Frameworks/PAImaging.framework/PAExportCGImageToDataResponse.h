//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImagingCore/PAExportResponse.h>

#import <PAImaging/PAExportCGImageToDataResponse-Protocol.h>

@class NSData, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface PAExportCGImageToDataResponse : PAExportResponse <PAExportCGImageToDataResponse>
{
    NSData *_data;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_fulfillValidatedRequest:(id)arg1;
- (id)data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

