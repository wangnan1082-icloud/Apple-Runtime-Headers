//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UIImageView;

@interface CKAcknowledgmentIconCollectionReusableView : UICollectionReusableView
{
    UIImageView *_glyphImageView;
}

+ (id)supplementaryViewKind;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UIImageView *glyphImageView; // @synthesize glyphImageView=_glyphImageView;
- (void).cxx_destruct;
- (void)configureWithAcknowledgmentTally:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
