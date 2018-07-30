//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMDeviceActivationLockBypassCodeCommand_Status : CEMPayloadBase
{
    NSString *_statusActivationLockBypassCode;
}

+ (id)buildRequiredOnlyWithActivationLockBypassCode:(id)arg1;
+ (id)buildWithActivationLockBypassCode:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSString *statusActivationLockBypassCode; // @synthesize statusActivationLockBypassCode=_statusActivationLockBypassCode;
- (void).cxx_destruct;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
