//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MKMapItemPhoto : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    id <GEOMapItemPhoto> _geoMapItemPhoto;
}

@property(retain, nonatomic) id <GEOMapItemPhoto> geoMapItemPhoto; // @synthesize geoMapItemPhoto=_geoMapItemPhoto;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool displayFullPhotoInline;
- (id)urlForBestPhotoForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) long long format;
@property(readonly, nonatomic) _Bool useGallery;
@property(readonly, nonatomic) NSString *photoID;
@property(readonly, nonatomic) NSURL *largestPhotoURL;
@property(readonly, nonatomic) NSString *license;
- (id)initWithGeoMapItemPhoto:(id)arg1;
- (id)initWithPictureItem:(id)arg1;
- (id)initWithGeoMapItemPhoto:(id)arg1 title:(id)arg2 subtitle:(id)arg3;

@end
