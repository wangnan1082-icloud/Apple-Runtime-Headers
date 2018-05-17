//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFAtomTextView.h"

@class NSString, SearchUIKeyboardableTableViewController;

@interface SearchUISearchField : MFAtomTextView
{
    SearchUIKeyboardableTableViewController *_tableViewController;
}

@property __weak SearchUIKeyboardableTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)nextResponder;
- (id)textFromMarkedTextRange:(struct _NSRange)arg1 markedTextReplacement:(id)arg2;
@property(readonly) NSString *searchText;
- (struct _NSRange)_markedTextNSRange;
- (void)setText:(id)arg1;
- (id)text;

@end
