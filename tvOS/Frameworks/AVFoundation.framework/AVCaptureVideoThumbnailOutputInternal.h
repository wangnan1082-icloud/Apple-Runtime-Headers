//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, NSArray;

@interface AVCaptureVideoThumbnailOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakReference *delegateWeakReference;
    _Bool didPropagateContents;
    NSArray *filters;
    struct CGSize thumbnailSize;
}

- (void)dealloc;
- (id)init;

@end
