//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, SASyncAppMetaData;

@interface AFSyncInfo : NSObject <NSSecureCoding>
{
    BOOL _targetIsLocal;
    BOOL _forVerification;
    NSString *_anchor;
    NSString *_validity;
    long long _count;
    NSString *_key;
    SASyncAppMetaData *_appMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL forVerification; // @synthesize forVerification=_forVerification;
@property(nonatomic) BOOL targetIsLocal; // @synthesize targetIsLocal=_targetIsLocal;
@property(copy, nonatomic) SASyncAppMetaData *appMetadata; // @synthesize appMetadata=_appMetadata;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithAnchor:(id)arg1 forcingReset:(BOOL)arg2;

@end
