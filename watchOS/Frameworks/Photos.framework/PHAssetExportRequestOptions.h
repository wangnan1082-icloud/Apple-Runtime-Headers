//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHAssetExportRequestOptions : NSObject
{
    _Bool _treatLivePhotoAsStill;
    _Bool _flattenSlomoVideos;
    _Bool _dontAllowRAW;
    int _variant;
}

@property(nonatomic) _Bool dontAllowRAW; // @synthesize dontAllowRAW=_dontAllowRAW;
@property(nonatomic) _Bool flattenSlomoVideos; // @synthesize flattenSlomoVideos=_flattenSlomoVideos;
@property(nonatomic) _Bool treatLivePhotoAsStill; // @synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill;
@property(nonatomic) int variant; // @synthesize variant=_variant;
- (id)description;

@end

