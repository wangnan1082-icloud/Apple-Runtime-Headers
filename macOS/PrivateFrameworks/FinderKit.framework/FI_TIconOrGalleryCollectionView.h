//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TCollectionView.h>

#import "TShrinkToFitDelegateProtocol.h"

__attribute__((visibility("hidden")))
@interface FI_TIconOrGalleryCollectionView : FI_TCollectionView <TShrinkToFitDelegateProtocol>
{
    struct TNSRef<FI_TShrinkToFitController, void> _stfController;
    struct TFENode _nodeBeingEdited;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)hitTestInIconViewIconOrText:(const struct CGPoint *)arg1;
- (id)hitTestInIconViewText:(const struct CGPoint *)arg1;
- (id)hitTestInIconViewIcon:(const struct CGPoint *)arg1;
- (id)viewAtLocalPoint:(const struct CGPoint *)arg1;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (id)iconOrGalleryCollectionViewDelegate;
- (const struct TFENode *)nodeBeingEdited;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2 afterDelay:(_Bool)arg3;

@end
