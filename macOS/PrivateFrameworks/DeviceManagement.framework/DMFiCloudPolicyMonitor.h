//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject
{
    long long _iCloudLogoutPolicy;
    NSUUID *_policyMonitorIdentifier;
}

+ (BOOL)automaticallyNotifiesObserversOfICloudLogoutPolicy;
@property(readonly, nonatomic) NSUUID *policyMonitorIdentifier; // @synthesize policyMonitorIdentifier=_policyMonitorIdentifier;
@property(nonatomic) long long iCloudLogoutPolicy; // @synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy;
- (void).cxx_destruct;
- (void)_updateiCloudLogoutFromPolicies:(id)arg1;
- (void)_updateiCloudLogout;
- (void)dealloc;
- (id)init;

@end

