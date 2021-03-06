//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    int _availability;
    unsigned int _supportedAvailabilities;
    NSArray *_choices;
    unsigned int _availabilityIndexInChoices;
}

- (void).cxx_destruct;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end

