//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SiriUISiriStatusView;

@protocol SiriUISiriStatusViewDelegate <NSObject>
- (struct UIEdgeInsets)safeAreaInsetsForSiriStatusView:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidEnd:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewHoldDidBegin:(SiriUISiriStatusView *)arg1;
- (void)siriStatusViewWasTapped:(SiriUISiriStatusView *)arg1;
- (float)audioLevelForSiriStatusView:(SiriUISiriStatusView *)arg1;
@end
