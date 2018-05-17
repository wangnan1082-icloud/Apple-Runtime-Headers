//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

#import "CNContactPickerDelegate.h"
#import "HKMedicalIDEditorCellEditDelegate.h"
#import "_HKEmergencyContactRelationshipPickerDelegate.h"

@class HKCoreTelephonyUtilities, NSString, UITableViewCell, _HKEmergencyContact;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, _HKEmergencyContactRelationshipPickerDelegate, CNContactPickerDelegate>
{
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    _Bool _selectedContactIsBeingAdded;
    HKCoreTelephonyUtilities *_coreTelephonyUtilities;
}

@property(retain, nonatomic) HKCoreTelephonyUtilities *coreTelephonyUtilities; // @synthesize coreTelephonyUtilities=_coreTelephonyUtilities;
- (void).cxx_destruct;
- (id)titleForHeader;
- (id)viewOnlyTitle;
- (id)titleForFooter;
- (id)_emergencyContactWithContact:(id)arg1 property:(id)arg2;
- (void)_didSelectContact:(id)arg1 property:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)_addEmergencyContactToData:(id)arg1;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (id)meContactIdentifier;
- (void)_presentEmergencyContactDeletionAlertIfNecessary;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (_Bool)canEditRowAtIndex:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (void)_presentEmergencyContactPicker;
- (_Bool)shouldHighlightRowAtIndex:(int)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)title;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (id)_dequeueAndConfigureContactEditCellForIndex:(int)arg1 inTableView:(id)arg2;
- (id)_dequeueAndConfigureContactViewCellForIndex:(int)arg1 inTableView:(id)arg2;
- (_Bool)refreshFromData;
- (int)numberOfRows;
- (void)callEmergencyContact:(id)arg1;
- (int)contactIndexForRowIndex:(int)arg1;
- (int)itemTypeForRowIndex:(int)arg1;
- (_Bool)hasPresentableData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
