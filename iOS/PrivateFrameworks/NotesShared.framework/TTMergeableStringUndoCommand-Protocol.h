//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>
#import <NotesShared/TTMergeableStringIDTracker-Protocol.h>

@class TTMergeableStringUndoGroup, TTMergeableUndoString;

@protocol TTMergeableStringUndoCommand <NSObject, TTMergeableStringIDTracker>
- (_Bool)addToGroup:(TTMergeableStringUndoGroup *)arg1;
- (void)applyToString:(TTMergeableUndoString *)arg1;
@end

