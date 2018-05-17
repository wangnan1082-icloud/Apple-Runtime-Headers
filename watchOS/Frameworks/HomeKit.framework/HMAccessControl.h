//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HMUser, NSObject<OS_dispatch_queue>;

@interface HMAccessControl : NSObject <NSSecureCoding>
{
    HMUser *_user;
    unsigned int _cachedHash;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned int cachedHash; // @synthesize cachedHash=_cachedHash;
@property __weak HMUser *user; // @synthesize user=_user;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithUser:(id)arg1;
- (id)init;

@end
