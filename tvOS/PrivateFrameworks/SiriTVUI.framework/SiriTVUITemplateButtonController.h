//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class NSMutableDictionary, SiriTVUIButtonTemplateItem, SiriTVUITemplateButton;

@interface SiriTVUITemplateButtonController : SiriTVUITemplateItemViewController
{
    NSMutableDictionary *_cachedBackgroundImages;
}

@property(retain, nonatomic) NSMutableDictionary *cachedBackgroundImages; // @synthesize cachedBackgroundImages=_cachedBackgroundImages;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)prefersFocus;
- (id)_imageWithRightBorderOfColor:(id)arg1 fromImage:(id)arg2 forDisplayScale:(double)arg3;
- (void)_buttonPressed:(id)arg1;
- (void)_updateContentForTraitCollection:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(retain, nonatomic) SiriTVUIButtonTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateButton *view; // @dynamic view;

@end
