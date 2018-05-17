//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FAInviteViewProtocol.h"

@class NSString, UILabel;

@interface FAChildTransferInviteView : UIView <FAInviteViewProtocol>
{
    UILabel *_titleLabel;
    UILabel *_primaryLabel;
    UILabel *_detailsLabel;
}

- (void).cxx_destruct;
- (double)_heightForTitle:(id)arg1 width:(double)arg2;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (id)_labelWithCenteredText:(id)arg1;
- (double)desiredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithInvite:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
