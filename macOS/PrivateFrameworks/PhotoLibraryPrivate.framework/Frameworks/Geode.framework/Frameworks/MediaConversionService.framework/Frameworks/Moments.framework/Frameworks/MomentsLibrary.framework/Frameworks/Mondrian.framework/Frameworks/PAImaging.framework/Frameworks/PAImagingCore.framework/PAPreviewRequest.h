//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImagingCore/PAImageRequest.h>

@class IPAImageSizePolicy;
@protocol PAInputFormat, PAVersion;

@interface PAPreviewRequest : PAImageRequest
{
    struct CGColorSpace *_colorSpace;
    BOOL _subsampleOnly;
    BOOL _forceOutOfDate;
    BOOL _bakeOrientation;
    BOOL _doNotRegenerate;
    BOOL _resolveSmaller;
    BOOL _forGridView;
    BOOL _canLoadRAWMaster;
    unsigned short _highestImageStyle;
    unsigned short _loadImageStyle;
    int _interpolationQuality;
    id <PAVersion> _version;
    IPAImageSizePolicy *_size;
    id <PAInputFormat> _format;
}

+ (id)requestWithVersion:(id)arg1;
+ (id)requestWithVersion:(id)arg1 size:(id)arg2;
+ (id)probeCache:(id)arg1;
@property BOOL canLoadRAWMaster; // @synthesize canLoadRAWMaster=_canLoadRAWMaster;
@property BOOL forGridView; // @synthesize forGridView=_forGridView;
@property BOOL resolveSmaller; // @synthesize resolveSmaller=_resolveSmaller;
@property BOOL doNotRegenerate; // @synthesize doNotRegenerate=_doNotRegenerate;
@property BOOL bakeOrientation; // @synthesize bakeOrientation=_bakeOrientation;
@property BOOL forceOutOfDate; // @synthesize forceOutOfDate=_forceOutOfDate;
@property(retain) id <PAInputFormat> format; // @synthesize format=_format;
@property int interpolationQuality; // @synthesize interpolationQuality=_interpolationQuality;
@property unsigned short loadImageStyle; // @synthesize loadImageStyle=_loadImageStyle;
@property unsigned short highestImageStyle; // @synthesize highestImageStyle=_highestImageStyle;
@property BOOL subsampleOnly; // @synthesize subsampleOnly=_subsampleOnly;
@property(retain) IPAImageSizePolicy *size; // @synthesize size=_size;
@property(retain) id <PAVersion> version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)submitSynchronous:(id)arg1;
@property struct CGColorSpace *colorSpace;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithVersion:(id)arg1;
- (id)initWithVersion:(id)arg1 size:(id)arg2;

@end

