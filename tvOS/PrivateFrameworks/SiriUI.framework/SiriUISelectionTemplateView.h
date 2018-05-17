//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUI/SiriUISettingTemplateView.h>

@class UIButton, UIImageView;

@interface SiriUISelectionTemplateView : SiriUISettingTemplateView
{
    UIImageView *_checkmarkImageView;
    UIButton *_selectionButton;
}

- (void).cxx_destruct;
- (void)removeTargetForSelectionEvent:(id)arg1 action:(SEL)arg2;
- (void)addTargetForSelectionEvent:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (void)reloadData;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SiriUISelectionTemplateModel> dataSource; // @dynamic dataSource;

@end
