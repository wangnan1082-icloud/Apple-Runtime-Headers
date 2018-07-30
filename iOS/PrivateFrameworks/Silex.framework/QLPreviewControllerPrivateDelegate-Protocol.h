//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPreviewControllerDelegate.h"

@class NSArray, NSError, NSString, NSURL, QLPreviewController, UIView;

@protocol QLPreviewControllerPrivateDelegate <QLPreviewControllerDelegate>

@optional
- (void)previewController:(QLPreviewController *)arg1 didFinishPlayingPreviewItem:(id <QLPreviewItem>)arg2;
- (void)previewController:(QLPreviewController *)arg1 didTransitionToState:(long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 willTransitionToState:(long long)arg2;
- (UIView *)previewController:(QLPreviewController *)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2 uncroppedSourceFrame:(struct CGRect *)arg3 realSize:(struct CGSize *)arg4;
- (void)previewController:(QLPreviewController *)arg1 didDismissPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 didPresentPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 willPresentPreviewItemAtIndex:(unsigned long long)arg2;
- (void)previewController:(QLPreviewController *)arg1 didLoadPreviewItemAtIndex:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)previewController:(QLPreviewController *)arg1 willLoadPreviewItemAtIndex:(unsigned long long)arg2;
- (NSArray *)excludedActivityTypesForPreviewController:(QLPreviewController *)arg1;
- (_Bool)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(QLPreviewController *)arg1;
- (_Bool)shouldAppendDefaultDismissActionsForPreviewController:(QLPreviewController *)arg1;
- (NSArray *)dismissActionsForPreviewController:(QLPreviewController *)arg1;
- (void)previewController:(QLPreviewController *)arg1 updatedContentsURL:(NSURL *)arg2 forEditedItem:(id <QLPreviewItem>)arg3;
- (void)previewController:(QLPreviewController *)arg1 didFailToSaveEditedItem:(id <QLPreviewItem>)arg2 withError:(NSError *)arg3;
- (void)previewController:(QLPreviewController *)arg1 willSaveEditedItem:(id <QLPreviewItem>)arg2;
- (_Bool)previewController:(QLPreviewController *)arg1 shouldSaveEditedItem:(id <QLPreviewItem>)arg2;
- (_Bool)previewController:(QLPreviewController *)arg1 canEditItem:(id <QLPreviewItem>)arg2;
- (_Bool)previewController:(QLPreviewController *)arg1 canShareItem:(id <QLPreviewItem>)arg2;
- (UIView *)previewController:(QLPreviewController *)arg1 transitionViewForPreviewItem:(id <QLPreviewItem>)arg2 uncroppedSourceFrame:(struct CGRect *)arg3;
- (void)previewController:(QLPreviewController *)arg1 customActionButtonWasTappedForPreviewItem:(id <QLPreviewItem>)arg2;
- (NSString *)previewController:(QLPreviewController *)arg1 customActionButtonTittleForPreviewItem:(id <QLPreviewItem>)arg2;
@end
