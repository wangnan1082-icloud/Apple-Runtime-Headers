//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UITableView.h>

@class UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableView : UITableView
{
    UIKeyboardMenuView *_menu;
}

@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(int)arg3;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;

@end
