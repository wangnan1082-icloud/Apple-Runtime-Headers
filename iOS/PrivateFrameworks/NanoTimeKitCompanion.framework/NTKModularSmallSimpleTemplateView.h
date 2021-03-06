//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView
{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_label;
    long long _maxDynamicFontSize;
}

+ (void)load;
+ (id)supportedTemplateClasses;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (double)_maxTextWidthForDynamicFontSize:(long long)arg1;
- (void)_configureWithImageTemplate:(id)arg1;
- (void)_configureWithTextTemplate:(id)arg1;
- (void)_layoutContentView;
- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;

@end

