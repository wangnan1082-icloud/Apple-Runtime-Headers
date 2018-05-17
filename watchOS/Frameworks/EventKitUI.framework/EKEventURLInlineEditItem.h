//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventEditItem.h>

#import "EKCalendarItemInlineEditItem.h"
#import "UITextFieldDelegate.h"

@class NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventURLInlineEditItem : EKEventEditItem <UITextFieldDelegate, EKCalendarItemInlineEditItem>
{
    UITableViewCell *_cell;
    _Bool _tokenized;
    _Bool _hasChanges;
}

- (void).cxx_destruct;
- (id)searchStringForEventAutocomplete;
- (_Bool)isSaveable;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldStartEditing:(id)arg1;
- (void)_setTokenized:(_Bool)arg1;
- (void)refreshFromCalendarItemAndStore;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)isInline;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (void)reset;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
