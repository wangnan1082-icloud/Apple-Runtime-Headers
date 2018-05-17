//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSStackView.h"

__attribute__((visibility("hidden")))
@interface OBIconBulletStackView : NSStackView
{
    double _itemSpacing;
    double _iconTextPadding;
}

@property(nonatomic) double iconTextPadding; // @synthesize iconTextPadding=_iconTextPadding;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 attributedText:(id)arg3;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 text:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
