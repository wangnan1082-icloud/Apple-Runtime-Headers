//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetInspectorLoader, AVWeakReference, NSArray, NSObject<OS_dispatch_queue>;

@interface AVDataDelegateAssetInternal : NSObject
{
    AVWeakReference *_weakReferenceToDataDelegate;
    AVAssetInspectorLoader *_loader;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSArray *_tracks;
}

@end
