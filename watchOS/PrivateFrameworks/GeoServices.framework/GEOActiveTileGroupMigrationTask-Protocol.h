//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSProgressReporting-Protocol.h>

@class GEOActiveTileGroup, NSDictionary, NSObject;
@protocol NSObject, OS_dispatch_queue;

@protocol GEOActiveTileGroupMigrationTask <NSProgressReporting>
@property(retain, nonatomic) id <NSObject> transaction;
@property(readonly) int estimatedWeight;
- (void)removeOldData:(GEOActiveTileGroup *)arg1;
- (void)populateTileGroup:(GEOActiveTileGroup *)arg1;
- (void)cancel;
- (void)startWithCompletionHandler:(void (^)(NSError *))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2;

@optional
- (NSDictionary *)stateWithHints:(struct os_state_hints_s *)arg1;
@end

