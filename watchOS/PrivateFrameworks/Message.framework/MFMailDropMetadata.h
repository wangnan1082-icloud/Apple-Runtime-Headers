//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface MFMailDropMetadata : NSObject
{
    NSString *_uuid;
    _Bool _autoArchive;
    _Bool _isInvalid;
    NSString *_fileName;
    int _fileSize;
    NSString *_mimeType;
    NSURL *_directUrl;
    NSURL *_wrappedUrl;
    NSDate *_expiration;
    unsigned int _flags;
}

+ (id)mailDropMetadata;
@property _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSURL *wrappedUrl; // @synthesize wrappedUrl=_wrappedUrl;
@property(copy, nonatomic) NSURL *directUrl; // @synthesize directUrl=_directUrl;
@property _Bool autoArchive; // @synthesize autoArchive=_autoArchive;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property int fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(getter=UUID, setter=setUUID:) NSString *UUID;
- (void)merge:(id)arg1;
- (_Bool)isBannerWithMultiple;
- (_Bool)isExpired;
- (_Bool)isPhotoArchive;
- (_Bool)isBanner;
- (id)wrappedUrlString;
- (id)directUrlString;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;

@end
