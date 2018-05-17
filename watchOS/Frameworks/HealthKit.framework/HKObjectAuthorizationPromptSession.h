//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString, NSUUID;

@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding>
{
    NSUUID *_sessionIdentifier;
    NSString *_bundleIdentifier;
    NSArray *_samplesRequiringAuthorization;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *samplesRequiringAuthorization; // @synthesize samplesRequiringAuthorization=_samplesRequiringAuthorization;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForBundleIdentifier:(id)arg1 samples:(id)arg2 sessionIdentifier:(id)arg3;

@end
