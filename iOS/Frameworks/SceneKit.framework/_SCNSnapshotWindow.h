//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@interface _SCNSnapshotWindow : UIWindow
{
}

- (struct CGPoint)warpPoint:(struct CGPoint)arg1;
- (struct CGPoint)_warpPoint:(struct CGPoint)arg1 outOfBounds:(_Bool *)arg2;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (id)scnView;
- (_Bool)_canBecomeKeyWindow;
- (void)_setFirstResponder:(id)arg1;
- (_Bool)_isSettingFirstResponder;
- (void)dealloc;

@end
