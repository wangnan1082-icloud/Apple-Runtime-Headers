//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@interface TKPickerTableRowView : NSTableRowView
{
    double _selectionAlphaOverride;
}

+ (id)defaultAnimationForKey:(id)arg1;
@property(nonatomic) double selectionAlphaOverride; // @synthesize selectionAlphaOverride=_selectionAlphaOverride;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (long long)interiorBackgroundStyle;
- (void)setSelected:(BOOL)arg1;

@end
