//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextFieldDelegate.h"

@class GKPlayer, GKSpeechBalloonBackgroundView, GKSpeechTextField, IKProfilePictureView, NSMutableArray, NSObject<GKPlayerWithSpeechBalloonViewDelegate>, NSString;

@interface GKPlayerWithSpeechBalloonView : NSView <NSTextFieldDelegate>
{
    BOOL _isEditing;
    GKPlayer *_player;
    NSObject<GKPlayerWithSpeechBalloonViewDelegate> *_delegate;
    GKSpeechTextField *_speechTextView;
    IKProfilePictureView *_photoView;
    GKSpeechBalloonBackgroundView *_balloonView;
    double _preferredMaxLayoutWidth;
    NSMutableArray *_replaceableConstraints;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSMutableArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) GKSpeechBalloonBackgroundView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) IKProfilePictureView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) GKSpeechTextField *speechTextView; // @synthesize speechTextView=_speechTextView;
@property BOOL isEditing; // @synthesize isEditing=_isEditing;
@property NSObject<GKPlayerWithSpeechBalloonViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)profilePictureView:(id)arg1 imageDidChange:(id)arg2;
@property(nonatomic) unsigned char tipDirection;
@property(retain, nonatomic) NSString *speechText;
- (void)_updateSpeechText:(id)arg1;
@property(nonatomic) unsigned char drawStyle;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)updatePhoto;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)setNeedsUpdateConstraints;
- (void)dealloc;
- (void)awakeFromNib;
- (id)metrics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
