//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

#import "EKProtocolSharee.h"

@class NSDictionary, NSManagedObjectID, NSString, NSURL;

@interface EKFrozenSharee : EKFrozenObject <EKProtocolSharee>
{
    BOOL isCurrentUserForSharing;
    NSString *accessLevel;
    NSString *name;
    NSString *status;
    NSURL *URL;
}

+ (Class)meltedClass;
@property(readonly, nonatomic) BOOL isCurrentUserForSharing; // @synthesize isCurrentUserForSharing;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name;
@property(readonly, copy, nonatomic) NSString *accessLevel; // @synthesize accessLevel;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isCurrentUserForScheduling;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end
