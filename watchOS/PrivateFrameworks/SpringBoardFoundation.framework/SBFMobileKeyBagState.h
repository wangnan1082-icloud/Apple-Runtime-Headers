//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSString;

@interface SBFMobileKeyBagState : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSDictionary *_state;
}

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)publicDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEffectivelyLocked;
@property(readonly, nonatomic) long long escrowCount;
@property(readonly, nonatomic) _Bool recoveryEnabled;
@property(readonly, nonatomic) _Bool recoveryPossible;
@property(readonly, nonatomic) _Bool recoveryRequired;
@property(readonly, nonatomic) _Bool shouldWipe;
@property(readonly, nonatomic) _Bool permanentlyBlocked;
@property(readonly, nonatomic) unsigned int failedAttemptCount;
@property(readonly, nonatomic) double backOffTime;
@property(readonly, nonatomic) int lockState;
- (id)init;
- (id)initWithMKBLockStateInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
