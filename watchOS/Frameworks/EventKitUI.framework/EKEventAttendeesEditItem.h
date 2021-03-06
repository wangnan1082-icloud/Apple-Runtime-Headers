//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

@class EKParticipant, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesEditItem : EKEventEditItem
{
    EKParticipant *_selfOrganizer;
    NSString *_searchAccountID;
    NSOperationQueue *_availabilityQueue;
    int _numberOfConflicts;
}

+ (id)_noneInviteesLocalizedString;
- (void).cxx_destruct;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (_Bool)forceRefreshInviteesItemOnSave;
- (_Bool)forceRefreshStartAndEndDatesOnSave;
- (_Bool)forceTableReloadOnSave;
- (id)injectableViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (id)attendeesWithoutSelfOrganizerAndLocations;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (void)dealloc;
- (id)init;

@end

