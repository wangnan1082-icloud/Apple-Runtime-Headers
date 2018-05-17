//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSCKDatabase, NSObject<OS_dispatch_queue>;

@interface IDSCloudKitGroupServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCKDatabase *_database;
}

@property(retain, nonatomic) IDSCKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)q_groupFromRecord:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchGroupsWithStableGroupID:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchGroupWithID:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveGroup:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;

@end
