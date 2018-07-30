//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>;

@interface PSITopAssetsResult : NSObject
{
    id <PSITopAssetsResultDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSArray *_assetUUIDs;
    const struct __CFArray *_assetIds;
}

@property(nonatomic) __weak id <PSITopAssetsResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) const struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
- (void).cxx_destruct;
- (void)fetchAssetUUIDsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *assetUUIDs;
@property(readonly, nonatomic) unsigned long long assetMatchCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
