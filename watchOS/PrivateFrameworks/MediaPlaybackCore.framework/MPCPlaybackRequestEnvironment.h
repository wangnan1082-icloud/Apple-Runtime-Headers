//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class ICUserIdentity, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, NSString;

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_clientIdentifier;
    NSString *_clientVersion;
    MPCPlaybackDelegationProperties *_delegationProperties;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    MPCPrivateListeningStateSource *_privateListeningStateSource;
    ICUserIdentity *_userIdentity;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(readonly, copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // @synthesize privateListeningStateSource=_privateListeningStateSource;
@property(readonly, copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties; // @synthesize delegationProperties=_delegationProperties;
@property(readonly, copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1;
- (id)_createStoreRequestContext;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
