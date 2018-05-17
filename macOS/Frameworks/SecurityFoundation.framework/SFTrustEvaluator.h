//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, SFRevocationPolicy, SFTrustPolicy;

__attribute__((visibility("hidden")))
@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding>
{
    id _trustEvaluatorInternal;
    BOOL _allowCertificateFetching;
    BOOL _trustSystemAnchorCertificates;
    SFTrustPolicy *_trustPolicy;
    SFRevocationPolicy *_revocationPolicy;
    NSArray *_applicationAnchorCertificates;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL trustSystemAnchorCertificates; // @synthesize trustSystemAnchorCertificates=_trustSystemAnchorCertificates;
@property(nonatomic) BOOL allowCertificateFetching; // @synthesize allowCertificateFetching=_allowCertificateFetching;
@property(copy, nonatomic) NSArray *applicationAnchorCertificates; // @synthesize applicationAnchorCertificates=_applicationAnchorCertificates;
@property(copy, nonatomic) SFRevocationPolicy *revocationPolicy; // @synthesize revocationPolicy=_revocationPolicy;
@property(copy, nonatomic) SFTrustPolicy *trustPolicy; // @synthesize trustPolicy=_trustPolicy;
- (void).cxx_destruct;
- (void)evaluateCertificateChain:(id)arg1 forDate:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 applicationAnchorCertificates:(id)arg3 allowCertificateFetching:(BOOL)arg4 trustSystemAnchorCertificates:(BOOL)arg5;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2;
- (id)initWithTrustPolicy:(id)arg1;
- (id)init;

@end
