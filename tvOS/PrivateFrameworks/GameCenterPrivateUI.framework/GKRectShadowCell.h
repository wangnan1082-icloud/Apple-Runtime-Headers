//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class _UIFloatingContentView;

@interface GKRectShadowCell : UICollectionViewCell
{
    _UIFloatingContentView *_floatingView;
}

@property(nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)awakeFromNib;

@end
