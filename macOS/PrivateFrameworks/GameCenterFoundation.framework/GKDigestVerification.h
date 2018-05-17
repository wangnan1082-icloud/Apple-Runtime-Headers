//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKDigestVerification : NSObject
{
}

+ (BOOL)digest:(id)arg1 matchesHash:(id)arg2;
+ (id)computeVerificationHashForDigest:(id)arg1;
+ (id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(BOOL)arg3 eligibleChallenges:(id)arg4;
+ (id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(BOOL)arg3 eligibleChallenges:(id)arg4;
+ (BOOL)verifyHash:(id)arg1 forDigest:(id)arg2 withSugar:(id)arg3;
+ (id)computeHashForDigest:(id)arg1 withSugar:(id)arg2;

@end
