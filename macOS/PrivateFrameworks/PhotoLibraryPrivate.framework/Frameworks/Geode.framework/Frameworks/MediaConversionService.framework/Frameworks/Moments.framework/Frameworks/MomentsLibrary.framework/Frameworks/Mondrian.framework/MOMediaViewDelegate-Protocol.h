//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mondrian/NSObject-Protocol.h>

@class MOMediaItem, MOMediaSection, MOMediaView, MOMediaViewCell, MOMediaViewSupplementary, NSArray, NSEvent, NSIndexPath, NSString;

@protocol MOMediaViewDelegate <NSObject>

@optional
- (void)mediaViewDidExitModalSelectionMode:(MOMediaView *)arg1;
- (void)mediaViewWillExitModalSelectionMode:(MOMediaView *)arg1;
- (void)mediaViewDidEnterModalSelectionMode:(MOMediaView *)arg1;
- (void)mediaViewWillEnterModalSelectionMode:(MOMediaView *)arg1;
- (void)mediaView:(MOMediaView *)arg1 itemWasRightClickedAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)mediaView:(MOMediaView *)arg1 itemWasDoubleClickedAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)mediaView:(MOMediaView *)arg1 mouseDownWithEvent:(NSEvent *)arg2;
- (void)mediaViewDidEndScrolling:(MOMediaView *)arg1;
- (void)mediaViewDidScroll:(MOMediaView *)arg1;
- (void)mediaViewWillBeginScrolling:(MOMediaView *)arg1;
- (void)mediaViewBackgroundWasRightClicked:(MOMediaView *)arg1 withEvent:(NSEvent *)arg2;
- (void)mediaViewBackgroundWasClicked:(MOMediaView *)arg1 withEvent:(NSEvent *)arg2;
- (void)mediaView:(MOMediaView *)arg1 indexPathsForSelectedItemsDidAdd:(NSArray *)arg2 remove:(NSArray *)arg3 animated:(BOOL)arg4;
- (void)mediaView:(MOMediaView *)arg1 indexPathsForSelectedItemsWillAdd:(NSArray *)arg2 remove:(NSArray *)arg3 animated:(BOOL)arg4;
- (void)mediaViewSelectionDidChange:(MOMediaView *)arg1;
- (void)mediaViewSelectionWillChange:(MOMediaView *)arg1;
- (void)mediaView:(MOMediaView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)mediaView:(MOMediaView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)mediaView:(MOMediaView *)arg1 shouldDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)mediaView:(MOMediaView *)arg1 shouldSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)mediaView:(MOMediaView *)arg1 didUpdateSupplementaryView:(MOMediaViewSupplementary *)arg2 ofKind:(NSString *)arg3 withMediaSection:(MOMediaSection *)arg4 atIndexPath:(NSIndexPath *)arg5;
- (void)mediaView:(MOMediaView *)arg1 willUpdateSupplementaryView:(MOMediaViewSupplementary *)arg2 ofKind:(NSString *)arg3 withMediaSection:(MOMediaSection *)arg4 atIndexPath:(NSIndexPath *)arg5;
- (void)mediaView:(MOMediaView *)arg1 didUpdateCell:(MOMediaViewCell *)arg2 withMediaItem:(MOMediaItem *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)mediaView:(MOMediaView *)arg1 willUpdateCell:(MOMediaViewCell *)arg2 withMediaItem:(MOMediaItem *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (struct CGPoint)mediaView:(MOMediaView *)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
@end

