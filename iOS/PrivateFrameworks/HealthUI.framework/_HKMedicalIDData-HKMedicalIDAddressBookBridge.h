//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_HKMedicalIDData.h"

@interface _HKMedicalIDData (HKMedicalIDAddressBookBridge)
+ (id)contactKeysToLoadForMedicalID;
- (id)_contactKeysToFetch;
- (_Bool)_updateIdentifierByPhoneNumberForEmergencyContact:(id)arg1 contactStore:(id)arg2;
- (_Bool)updateEmergencyContacts;
- (void)loadDataFromCNContact:(id)arg1;
@end
