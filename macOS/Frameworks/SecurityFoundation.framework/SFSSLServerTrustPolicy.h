//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SecurityFoundation/SFTrustPolicy.h>

#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding>
{
    id _sslServerTrustPolicyInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *serverName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerName:(id)arg1;

@end
