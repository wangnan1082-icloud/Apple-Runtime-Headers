//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>
@property(readonly, nonatomic) long long ptpTrashedState;
@property(readonly, retain, nonatomic) NSString *exifTimestampString;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailWidth;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailOffset;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailLength;
@property(readonly, retain, nonatomic) NSNumber *embeddedThumbnailHeight;
@property(readonly, copy, nonatomic) NSString *originatingAssetIdentifier;
@end
