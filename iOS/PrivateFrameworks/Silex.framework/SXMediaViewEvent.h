//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXMediaEvent.h>

@class NSArray;

@interface SXMediaViewEvent : SXMediaEvent
{
    unsigned long long _galleryImageCount;
    NSArray *_galleryImageIds;
}

@property(retain, nonatomic) NSArray *galleryImageIds; // @synthesize galleryImageIds=_galleryImageIds;
@property(nonatomic) unsigned long long galleryImageCount; // @synthesize galleryImageCount=_galleryImageCount;
- (void).cxx_destruct;

@end
