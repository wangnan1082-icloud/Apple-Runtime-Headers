//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTSyncOperation.h"

@class MTTrigger, NSDate, NSString;

@interface MTSyncActionOperation : NSObject <MTSyncOperation>
{
    _Bool _isFromSync;
    int _action;
    NSDate *_actionDate;
    NSString *_identifier;
    MTTrigger *_trigger;
    NSString *_uuid;
}

+ (id)_stringForAction:(int)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)operationFromMetaData:(id)arg1;
+ (id)operationWithAction:(int)arg1 actionDate:(id)arg2 identifier:(id)arg3 trigger:(id)arg4;
+ (id)operationWithAction:(int)arg1 identifier:(id)arg2 trigger:(id)arg3;
@property(nonatomic) _Bool isFromSync; // @synthesize isFromSync=_isFromSync;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) MTTrigger *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDate *actionDate; // @synthesize actionDate=_actionDate;
@property(nonatomic) int action; // @synthesize action=_action;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToOperation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)operationMetaData;
- (id)responseOperation;
- (_Bool)requiresResponse;
- (_Bool)shouldRetry;
- (_Bool)isEquivalentToOperation:(id)arg1;
@property(readonly, nonatomic) int priority;
- (id)initWithUUID:(id)arg1 fromSync:(_Bool)arg2 action:(int)arg3 actionDate:(id)arg4 identifier:(id)arg5 trigger:(id)arg6;
- (id)initWithAction:(int)arg1 actionDate:(id)arg2 identifier:(id)arg3 trigger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
