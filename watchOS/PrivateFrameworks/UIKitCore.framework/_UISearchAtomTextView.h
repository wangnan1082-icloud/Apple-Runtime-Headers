//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIAtomTextView.h>

#import <UIKitCore/_UISearchAtomViewTappedStateProtocol-Protocol.h>
#import <UIKitCore/_UISearchBarTextFieldOrMailReplacement-Protocol.h>

@class NSString, _UIAtomSearchBar, _UISearchAtomFieldEditor, __UIAtomSearchBarFieldEditorBackgroundView;

__attribute__((visibility("hidden")))
@interface _UISearchAtomTextView : _UIAtomTextView <_UISearchBarTextFieldOrMailReplacement, _UISearchAtomViewTappedStateProtocol>
{
    __UIAtomSearchBarFieldEditorBackgroundView *_effectBackgroundBottom;
    __UIAtomSearchBarFieldEditorBackgroundView *_effectBackgroundTop;
    _Bool _tapped;
}

+ (Class)_backgroundViewClass;
+ (Class)_fieldEditorClass;
@property(nonatomic, getter=isTapped) _Bool tapped; // @synthesize tapped=_tapped;
- (void).cxx_destruct;
- (void)_setBackgroundViewsAlpha:(float)arg1;
- (void)_setForegroundViewsAlpha:(float)arg1;
- (void)_setAnimatesBackgroundCornerRadius:(_Bool)arg1;
- (void)setText:(id)arg1;
- (id)searchText;
- (void)updateForBackdropStyle:(unsigned int)arg1;
- (id)_createEffectsBackgroundViewWithStyle:(unsigned int)arg1 applyFilter:(id)arg2;
- (void)_updateBackgroundView:(id)arg1 withStyle:(unsigned int)arg2 filter:(id)arg3;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)textInputTraits;
@property(readonly, nonatomic, getter=_fieldEditor) _UISearchAtomFieldEditor *fieldEditor;
@property(readonly, nonatomic, getter=_searchBar) _UIAtomSearchBar *searchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

