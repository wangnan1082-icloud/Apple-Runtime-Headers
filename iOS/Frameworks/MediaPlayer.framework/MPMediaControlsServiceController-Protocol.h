//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPMediaControlsConfiguration;

@protocol MPMediaControlsServiceController <NSObject>
@property(retain, nonatomic) MPMediaControlsConfiguration *configuration;
- (void)viewWillTransitionToSize:(struct CGSize)arg1;
- (void)stopPrewarming;
- (void)startPrewarming;
@end

