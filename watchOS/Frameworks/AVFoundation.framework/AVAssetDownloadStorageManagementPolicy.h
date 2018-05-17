//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class AVAssetDownloadStorageManagementPolicyInternal, NSDate, NSString;

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying>
{
    AVAssetDownloadStorageManagementPolicyInternal *_storageManagementPolicy;
}

@property(readonly, copy, nonatomic) NSString *priority;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (void)setPriority:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (id)_policyDictionary;
- (void)_setPolicyDictionary:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
