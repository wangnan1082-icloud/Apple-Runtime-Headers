//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, UIImage;

@interface BSUIMappedImageCacheFuture : NSObject
{
    UIImage *_cacheImage;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _waitBlock;
    NSObject<OS_dispatch_semaphore> *_waitableSemaphore;
    int _submitted;
    int _waited;
    int _workCompletionWasCalled;
}

- (id)cacheImage;
- (void)submitWorkBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
