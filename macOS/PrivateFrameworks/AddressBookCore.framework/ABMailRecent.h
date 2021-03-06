//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookCore/ABRecord.h>

@interface ABMailRecent : ABRecord
{
}

+ (void)globalAPIUnlockForAddressBook:(id)arg1 inFile:(const char *)arg2 line:(unsigned long long)arg3;
+ (void)globalAPILockForAddressBook:(id)arg1 inFile:(const char *)arg2 line:(unsigned long long)arg3;
+ (id)managedObjectContextForAddressBook:(id)arg1;
+ (id)builtInProperties;
- (void)unlock;
- (void)lock;
- (id)remoteLocation;
- (BOOL)isSubscribed;
- (id)parentGroupsIncludingSubscriptions;
- (id)parentGroups;
- (id)account;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3 account:(id)arg4;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(id)arg2;
- (id)description;
- (BOOL)_shouldAssignNewDatabaseImplToPrimaryStore;
- (id)_table;

@end

