//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDate, NSUUID;

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate
@property(readonly, nonatomic) NSUUID *deviceUUID;
- (NSArray *)deletedEventIDsSinceDate:(NSDate *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned int)arg3 endDate:(id *)arg4 error:(id *)arg5;
- (NSArray *)sortedEventsWithCreationDateBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 streamNames:(NSArray *)arg3 limit:(unsigned int)arg4 fetchOrder:(int)arg5 error:(id *)arg6;
@end
