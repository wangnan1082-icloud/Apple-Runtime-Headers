//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

#import <EventKitUI/EKCalendarItemInlineEditItem-Protocol.h>
#import <EventKitUI/UITextViewDelegate-Protocol.h>

@class CalendarNotesCell, NSString;

__attribute__((visibility("hidden")))
@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate, EKCalendarItemInlineEditItem>
{
    CalendarNotesCell *_cell;
    NSString *_lastTextChange;
}

- (void).cxx_destruct;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)searchStringForEventAutocomplete;
- (_Bool)isSaveable;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (_Bool)isInline;
- (void)reset;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

