//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;
@protocol EKEventDetailNotesCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventNotesDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    _Bool _cellNeedsUpdate;
    id <EKEventDetailNotesCellDelegate> _noteDelegate;
}

@property(nonatomic) __weak id <EKEventDetailNotesCellDelegate> noteDelegate; // @synthesize noteDelegate=_noteDelegate;
- (void).cxx_destruct;
- (unsigned int)maximumNumberOfSubItems;
- (_Bool)requiresLayoutForSubitemCount;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (void)_updateCellIfNeeded;
- (unsigned int)numberOfSubitems;
- (void)setCellPosition:(int)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end

