//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTitlebarAccessoryViewController.h>

@class KeyLoopSplicingContainerView, NSBox, NSView;

__attribute__((visibility("hidden")))
@interface ExtensionBarViewController : NSTitlebarAccessoryViewController
{
    NSBox *_topSeparatorView;
    NSView *_contentView;
}

@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)loadView;

// Remaining properties
@property(retain) KeyLoopSplicingContainerView *view; // @dynamic view;

@end

