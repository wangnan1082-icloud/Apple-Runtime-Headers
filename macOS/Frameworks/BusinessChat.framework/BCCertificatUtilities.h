//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BCCertificatUtilities : NSObject
{
}

+ (struct __SecTrust *)trustReferenceWithCertificates:(id)arg1 forPolicy:(struct OpaqueSecPolicyRef *)arg2;
+ (_Bool)trustIncludesRevokedCertificate:(struct __SecTrust *)arg1;
+ (struct OpaqueSecPolicyRef *)sslPolicyForHost:(id)arg1 client:(BOOL)arg2;

@end
