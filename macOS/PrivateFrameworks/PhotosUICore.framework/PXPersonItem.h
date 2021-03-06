//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSNumber, NSString, PHPerson;

@interface PXPersonItem : NSObject
{
    int _faceImageRequestID;
    NSString *_name;
    NSString *_displayName;
    unsigned long long _photosCount;
    PHPerson *_modelObject;
    NSNumber *_personTypeNumber;
    CDUnknownBlockType _faceImageLoadingCompletionBlock;
    CDUnknownBlockType _fastDisplayBlock;
    NSImage *_faceImage;
}

@property __weak NSImage *faceImage; // @synthesize faceImage=_faceImage;
@property(copy) CDUnknownBlockType fastDisplayBlock; // @synthesize fastDisplayBlock=_fastDisplayBlock;
@property(copy) CDUnknownBlockType faceImageLoadingCompletionBlock; // @synthesize faceImageLoadingCompletionBlock=_faceImageLoadingCompletionBlock;
@property int faceImageRequestID; // @synthesize faceImageRequestID=_faceImageRequestID;
@property(retain, nonatomic) NSNumber *personTypeNumber; // @synthesize personTypeNumber=_personTypeNumber;
@property(retain, nonatomic) PHPerson *modelObject; // @synthesize modelObject=_modelObject;
@property(nonatomic) unsigned long long photosCount; // @synthesize photosCount=_photosCount;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(nonatomic) long long personType;
- (void)updateWithModel:(id)arg1;
- (id)initWithPerson:(id)arg1;

@end

