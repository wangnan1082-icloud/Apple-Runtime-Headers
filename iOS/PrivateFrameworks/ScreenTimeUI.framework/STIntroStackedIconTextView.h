//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface STIntroStackedIconTextView : UIView
{
    NSMutableArray *_entries;
}

@property(retain) NSMutableArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (double)_entrySpacing;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 title:(id)arg3 content:(id)arg4;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

