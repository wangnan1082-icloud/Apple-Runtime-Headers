//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface NSSliderKnob : NSView
{
    CDStruct_5a39c0a2 _drawingState;
    BOOL _maskOnly;
}

- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)focusRingMaskBounds;
- (void)drawFocusRingMask;
@property BOOL maskOnly;
@property CDStruct_5a39c0a2 drawingState;
- (BOOL)isFlipped;

@end

