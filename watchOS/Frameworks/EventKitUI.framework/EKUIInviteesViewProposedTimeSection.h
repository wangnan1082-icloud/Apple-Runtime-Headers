//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKUIInviteesViewConflictResolutionSection.h"

@class EKEvent, EKInviteeAlternativeTimeSearcher, NSArray, NSMutableOrderedSet, NSMutableSet, NSString;

@interface EKUIInviteesViewProposedTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection>
{
    _Bool _conflictFound;
    EKEvent *_event;
    NSString *_title;
    NSArray *_busyParticipants;
    NSMutableSet *_rowsShowingAllParticipants;
    NSString *_cachedCellReuseIdentifier;
    unsigned int _reuseIdentifierVersion;
    CDUnknownBlockType _tableViewCellHook;
    CDUnknownBlockType _newTimeChosen;
    CDUnknownBlockType _showPreviewOfEventAtTime;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
    NSMutableOrderedSet *_proposedTimes;
    NSArray *_proposedTimeResults;
    int _checkedRow;
}

@property(nonatomic) int checkedRow; // @synthesize checkedRow=_checkedRow;
@property(retain, nonatomic) NSArray *proposedTimeResults; // @synthesize proposedTimeResults=_proposedTimeResults;
@property(retain, nonatomic) NSMutableOrderedSet *proposedTimes; // @synthesize proposedTimes=_proposedTimes;
@property(retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
@property(copy, nonatomic) CDUnknownBlockType showPreviewOfEventAtTime; // @synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime;
@property(copy, nonatomic) CDUnknownBlockType newTimeChosen; // @synthesize newTimeChosen=_newTimeChosen;
@property(copy, nonatomic) CDUnknownBlockType tableViewCellHook; // @synthesize tableViewCellHook=_tableViewCellHook;
@property(nonatomic) unsigned int reuseIdentifierVersion; // @synthesize reuseIdentifierVersion=_reuseIdentifierVersion;
@property(retain, nonatomic) NSString *cachedCellReuseIdentifier; // @synthesize cachedCellReuseIdentifier=_cachedCellReuseIdentifier;
@property(nonatomic) _Bool conflictFound; // @synthesize conflictFound=_conflictFound;
@property(retain, nonatomic) NSMutableSet *rowsShowingAllParticipants; // @synthesize rowsShowingAllParticipants=_rowsShowingAllParticipants;
@property(retain, nonatomic) NSArray *busyParticipants; // @synthesize busyParticipants=_busyParticipants;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (_Bool)_isValidRow:(int)arg1;
- (_Bool)isRowChecked:(int)arg1;
- (id)busyParticipantsForDate:(id)arg1;
- (id)namesForParticipantsProposingDate:(id)arg1;
- (void)refreshCellsAfterStateChange;
- (void)availabilitySearcherChangedState:(int)arg1;
- (_Bool)injectNewRowsBeforeLastExistingRow;
- (void)clearCheckmark;
- (void)cancelOutstandingOperations;
- (float)estimatedHeightForRow:(id)arg1;
- (void)commitEditingStyle:(int)arg1 forRow:(id)arg2;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (int)editingStyleForRow:(id)arg1;
- (_Bool)canEditRow:(id)arg1;
- (void)setChecked:(int)arg1;
- (void)selectRow:(id)arg1;
- (_Bool)canSelectRow:(id)arg1;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (unsigned int)numberOfRows;
- (_Bool)sectionShouldBeShown;
- (id)headerTitle;
- (id)debugTitle;
- (void)updateWithEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
