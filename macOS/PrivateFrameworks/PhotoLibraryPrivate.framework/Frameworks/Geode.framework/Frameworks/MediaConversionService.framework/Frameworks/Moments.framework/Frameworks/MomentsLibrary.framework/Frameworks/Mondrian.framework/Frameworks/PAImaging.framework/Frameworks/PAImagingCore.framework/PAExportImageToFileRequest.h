//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImagingCore/PAExportImageRequest.h>

#import <PAImagingCore/PAExportSubmittable-Protocol.h>
#import <PAImagingCore/PAExportToFileRequest-Protocol.h>

@class NSDictionary, NSString, NSURL, PAExportImageFormat;
@protocol PFCanceler;

@interface PAExportImageToFileRequest : PAExportImageRequest <PAExportSubmittable, PAExportToFileRequest>
{
    BOOL createIntermediateDirectories;
    BOOL includeImageInResponse;
    NSURL *destinationURL;
    unsigned long long collisionPolicy;
    PAExportImageFormat *format;
    NSDictionary *metadata;
}

@property BOOL includeImageInResponse; // @synthesize includeImageInResponse;
@property(retain) NSDictionary *metadata; // @synthesize metadata;
@property(retain) PAExportImageFormat *format; // @synthesize format;
@property BOOL createIntermediateDirectories; // @synthesize createIntermediateDirectories;
@property unsigned long long collisionPolicy; // @synthesize collisionPolicy;
@property(retain) NSURL *destinationURL; // @synthesize destinationURL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)validateIntoArray:(id)arg1;
- (unsigned long long)bitsPerChannel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)submitWithResponseQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)synchronouslySubmitOnQueue:(id)arg1;

// Remaining properties
@property(retain) id <PFCanceler> canceler;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property double progressUpdateInterval;
@property(readonly) Class superclass;
@property BOOL wantsProgress;

@end

