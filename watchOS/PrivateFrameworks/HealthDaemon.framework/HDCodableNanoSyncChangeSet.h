//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "HDNanoSyncDescription.h"
#import "HDNanoSyncPersistentUserInfoCopying.h"
#import "NSCopying.h"

@class HDCodableError, NSData, NSMutableArray, NSString;

@interface HDCodableNanoSyncChangeSet : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying>
{
    double _sessionStartDate;
    NSMutableArray *_changes;
    HDCodableError *_sessionError;
    NSData *_sessionUUID;
    int _statusCode;
    struct {
        unsigned int sessionStartDate:1;
        unsigned int statusCode:1;
    } _has;
}

+ (Class)changesType;
+ (id)changeSetWithChanges:(id)arg1 sessionUUID:(id)arg2 startDate:(id)arg3 sessionError:(id)arg4 statusCode:(int)arg5;
+ (id)persistentUserInfoKey;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
@property(retain, nonatomic) HDCodableError *sessionError; // @synthesize sessionError=_sessionError;
@property(nonatomic) double sessionStartDate; // @synthesize sessionStartDate=_sessionStartDate;
@property(retain, nonatomic) NSData *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) NSMutableArray *changes; // @synthesize changes=_changes;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) _Bool hasSessionError;
@property(nonatomic) _Bool hasSessionStartDate;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (id)changesAtIndex:(unsigned int)arg1;
- (unsigned int)changesCount;
- (void)addChanges:(id)arg1;
- (void)clearChanges;
- (id)nanoSyncDescription;
- (id)decodedSessionError;
- (id)decodedSessionStartDate;
- (id)decodedSessionUUID;
- (void)_addChanges:(id)arg1;
- (id)copyForPersistentUserInfo;
- (void)addToPersistentUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
