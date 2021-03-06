//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class GKPlayer;

@interface GKDashboardPlayerPhotoView : UIImageView
{
    _Bool _useDarkerPlaceholder;
    _Bool _isUsingPlaceholder;
    _Bool _shouldBeFocused;
    GKPlayer *_player;
}

@property(nonatomic) _Bool shouldBeFocused; // @synthesize shouldBeFocused=_shouldBeFocused;
@property(nonatomic) _Bool isUsingPlaceholder; // @synthesize isUsingPlaceholder=_isUsingPlaceholder;
@property(nonatomic) _Bool useDarkerPlaceholder; // @synthesize useDarkerPlaceholder=_useDarkerPlaceholder;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)invalidatePhoto;
- (void)setFocused:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateFocusEffects;

@end

