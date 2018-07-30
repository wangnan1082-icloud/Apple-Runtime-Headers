//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCKZoneStore.h"

@class CKServerChangeToken, NSArray, NSDate, NSString;

@interface SCKZoneJSONStore : NSObject <SCKZoneStore>
{
    NSArray *_serverRecords;
    NSArray *_pendingCommands;
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSString *_zoneName;
}

@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate; // @synthesize lastDirtyDate=_lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(copy, nonatomic) NSArray *pendingCommands; // @synthesize pendingCommands=_pendingCommands;
@property(copy, nonatomic) NSArray *serverRecords; // @synthesize serverRecords=_serverRecords;
- (void).cxx_destruct;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
- (void)addPendingCommands:(id)arg1;
- (void)applyServerRecordsDiff:(id)arg1;
- (id)initWithZoneName:(id)arg1 serverRecords:(id)arg2 lastSyncDate:(id)arg3 lastDirtyDate:(id)arg4 serverChangeToken:(id)arg5 pendingCommands:(id)arg6;

@end
