//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CarouselUIServices/CUISSiriContextProvider-Protocol.h>

@class CUISAlertBackground, NSArray, NSString;
@protocol CUISBulletinClientViewControllerDelegate;

@interface CUISBulletinClientViewController : UIViewController <CUISSiriContextProvider>
{
    NSArray *_bulletins;
    id <CUISBulletinClientViewControllerDelegate> _delegate;
    CUISAlertBackground *_alertBackground;
}

@property(retain, nonatomic) CUISAlertBackground *alertBackground; // @synthesize alertBackground=_alertBackground;
@property(nonatomic) __weak id <CUISBulletinClientViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldPerformDefaultActionOnView:(id)arg1;
- (id)alertSuppressionContexts;
- (id)headerBlurContentView;
- (_Bool)wantsHeaderBlur;
- (id)createSiriContext;
- (id)initWithBulletins:(id)arg1;
- (_Bool)shouldReceiveAllContentOffsetChangeUpdates;
- (void)didFinishAnimatingToLongLook;
- (void)alertBackgroundDidChange;
- (void)didFinishScrollingAnimationsWithContentOffset:(struct CGPoint)arg1;
- (void)didEndDecelerating;
- (void)didEndDragging:(_Bool)arg1;
- (void)didEndDragging;
- (void)willBeginDragging;
- (struct CGPoint)contentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)contentOffsetDidChange:(struct CGPoint)arg1;
- (_Bool)_wantsDefaultHeaderBackgroundPlatterCompatibilityUnderlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

