//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@interface HDCloudSyncOwnerIdentifier : NSObject
{
    NSString *_deviceIdentifier;
    NSUUID *_databaseIdentifier;
    NSString *_ownerDifferentiator;
    NSString *_ownerIdentifierString;
}

+ (id)_databaseUUIDForProfile:(id)arg1 error:(id *)arg2;
+ (void)ownerIdentifierForSyncContainer:(id)arg1 profile:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *string;
- (id)initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;

@end
