//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class CLKFont, NSArray, NTKColoringLabel, NTKUpNextAccessoryView, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextMultilineCell : NTKUpNextBaseCell
{
    UILayoutGuide *_contentLayoutGuide;
    UILayoutGuide *_descriptionTextLayoutGuide;
    UILayoutGuide *_bodyImageSizingLayoutGuide;
    _Bool _showingHeader;
    _Bool _showingHeaderImage;
    _Bool _showingThreeLineLayout;
    _Bool _showingAccessory;
    _Bool _showingDescriptionImage;
    _Bool _usingStretchableImage;
    unsigned int _headerImageEdge;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKColoringLabel *_descriptionLine2Label;
    NTKUpNextImageView *_headerImage;
    NTKUpNextAccessoryView *_accessoryView;
    NTKUpNextImageView *_descriptionImageView;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescriptionAccessoryConstraints;
    NSArray *_withoutDescriptionAccessoryConstraints;
    NSArray *_withDescriptionImageViewConstraints;
    NSArray *_withStretchableDescriptionImageViewConstraints;
    NSArray *_withoutDescriptionImageViewConstraints;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
