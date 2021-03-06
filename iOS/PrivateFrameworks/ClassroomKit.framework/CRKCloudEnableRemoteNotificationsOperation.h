//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassroomKit/CRKCloudEncapsulatedOperation.h>

@class CKContainer, CKRecordZoneID;
@protocol APSConnectionDelegate;

@interface CRKCloudEnableRemoteNotificationsOperation : CRKCloudEncapsulatedOperation
{
    _Bool _subscribedToConatiner;
    id <APSConnectionDelegate> _connectionDelegate;
    CKRecordZoneID *_zoneId;
    CKContainer *_container;
}

@property(nonatomic) _Bool subscribedToConatiner; // @synthesize subscribedToConatiner=_subscribedToConatiner;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;
@property(readonly, nonatomic) id <APSConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
- (void).cxx_destruct;
- (void)createPushConnectionOperationDidFinish:(id)arg1;
- (void)createPushConnection;
- (void)subscribeToZoneOperationDidFinish:(id)arg1;
- (void)main;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2 container:(id)arg3 zoneId:(id)arg4 subscribedToContainer:(_Bool)arg5 connectionDelegate:(id)arg6;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;

@end

