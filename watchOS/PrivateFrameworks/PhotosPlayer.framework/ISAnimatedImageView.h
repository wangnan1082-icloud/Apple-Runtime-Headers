//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ISAnimatedImagePlayerDestination.h"

@class ISAnimatedImage, ISAnimatedImagePlayer, NSString, UIImageView;

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination>
{
    UIImageView *_placeholderImageView;
    ISAnimatedImagePlayer *_player;
}

@property(retain, nonatomic) ISAnimatedImagePlayer *player; // @synthesize player=_player;
@property(nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void).cxx_destruct;
- (void)displayLayer:(id)arg1;
@property(nonatomic) unsigned int displayedFrameIndex;
@property(nonatomic, getter=isPlaying) _Bool playing;
@property(retain, nonatomic) ISAnimatedImage *image;
- (void)didBeginAnimating;
- (_Bool)isReadyToDisplay;
- (void)frameDidChange;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(float)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithAnimatedImagePlayer:(id)arg1;
- (id)initWithAnimatedImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
