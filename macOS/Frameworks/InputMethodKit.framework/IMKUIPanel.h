//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class NSView;

@interface IMKUIPanel : NSPanel
{
    NSView *_accessibilityHitTestView;
    NSView *_clipView;
}

@property(retain, nonatomic) NSView *clipView; // @synthesize clipView=_clipView;
@property(nonatomic) __weak NSView *accessibilityHitTestView; // @synthesize accessibilityHitTestView=_accessibilityHitTestView;
- (void).cxx_destruct;
- (id)accessibilityTitle;
- (id)accessibilitySubroleAttribute;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)setWindowFrame:(struct CGRect)arg1 animation:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)animateWindowFrameForExtension:(struct CGRect)arg1;
- (id)initWithUpdateLayerUsingFrame:(struct CGRect)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end
