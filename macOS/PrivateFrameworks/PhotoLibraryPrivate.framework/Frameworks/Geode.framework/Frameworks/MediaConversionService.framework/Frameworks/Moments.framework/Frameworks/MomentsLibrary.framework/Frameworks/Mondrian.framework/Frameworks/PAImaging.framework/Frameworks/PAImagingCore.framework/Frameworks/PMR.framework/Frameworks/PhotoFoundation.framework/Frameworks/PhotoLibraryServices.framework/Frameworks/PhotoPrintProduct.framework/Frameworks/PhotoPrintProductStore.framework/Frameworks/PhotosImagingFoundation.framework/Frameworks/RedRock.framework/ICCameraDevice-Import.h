//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ImageCaptureCore/ICCameraDevice.h>

@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ICCameraDevice (Import)
@property(nonatomic) BOOL isEjecting;
- (void)setEjectQueue:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *ejectQueue;
@property BOOL ejectAfterDelete;
- (void)addItemToDelete:(id)arg1;
- (void)setItemsToDelete:(id)arg1;
@property(readonly) NSMutableSet *itemsToDelete;
@property(copy) CDUnknownBlockType openSessionHandler;
@property unsigned long long openSessionCount;
@property(retain) NSArray *avchdAssets;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)prepare;
@end

