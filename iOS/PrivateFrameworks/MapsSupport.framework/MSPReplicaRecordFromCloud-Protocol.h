//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MSPReplicaRecordFromCloud <NSObject>
+ (id)tombstone;
@property(readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) _Bool tombstoneRepresentedByCloudRecord;
- (id)initWithCloudRecord:(id <MSPCloudRecord>)arg1;
@end
