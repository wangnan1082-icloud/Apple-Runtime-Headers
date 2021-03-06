//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class ASPolicy, NSDictionary, NSString;

@interface ASProvisionTask : ASTask
{
    _Bool _accountOnlyRemoteWipeSuccess;
    NSDictionary *_deviceInfo;
    int _type;
    ASPolicy *_policy;
    NSString *_key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) ASPolicy *policy; // @synthesize policy=_policy;
@property(nonatomic) _Bool accountOnlyRemoteWipeSuccess; // @synthesize accountOnlyRemoteWipeSuccess=_accountOnlyRemoteWipeSuccess;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (int)taskStatusForExchangeStatus:(int)arg1;
- (id)requestBody;
- (_Bool)requiresEASVersionUpdate;
- (id)_provisioningType;
- (int)commandCode;
- (id)_policyID;
- (id)initWithAccountOnlyRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2 accountOnlyRemoteWipeSuccess:(_Bool)arg3;
- (id)initWithRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2;
- (id)initWithPolicyAcknowledgement:(id)arg1 withKey:(id)arg2;
- (id)initWithOriginalKeyForPolicyRequest:(id)arg1;
- (id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3 accountOnlyRemoteWipeSuccess:(_Bool)arg4;
- (id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3;

@end

