//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView, UITapGestureRecognizer;

@interface _PUICAppContextRightSideImageView : UIView
{
    UIImageView *_imageView;
    UIImage *_stagedImage;
    _Bool _hasStagedImageChanges;
    UIImageView *_animatingInImageView;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(nonatomic) __weak UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)commitChanges:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stageNewImage:(id)arg1;
@property(readonly, nonatomic) UIImage *image;
- (id)initWithImage:(id)arg1;

@end
