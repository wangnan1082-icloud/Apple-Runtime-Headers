//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TView.h>

__attribute__((visibility("hidden")))
@interface FI_TFakeTagsMenuItemView : FI_TView
{
    _Bool _selected;
    struct TNSRef<NSView, void> _selectionView;
    struct TNSRef<FI_TTextField, void> _titleField;
}

+ (id)fakeMenuItemViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)layout;
- (void)initCommon;

@end
