//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOPictureItem.h"

@class NSString;

@interface GEOPictureItem : NSObject <GEOPictureItem>
{
    id <GEOMapItemPhoto> _photo;
    int _pictureItemPhotoType;
    NSString *_primaryText;
    NSString *_secondaryText;
}

@property(readonly, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, nonatomic) int pictureItemPhotoType; // @synthesize pictureItemPhotoType=_pictureItemPhotoType;
@property(readonly, nonatomic) id <GEOMapItemPhoto> photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (id)initWithPictureItem:(id)arg1;
- (id)initWithPhoto:(id)arg1 pictureItemPhotoType:(int)arg2 primaryText:(id)arg3 secondaryText:(id)arg4;

@end
