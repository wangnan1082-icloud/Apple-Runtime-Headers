//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKInkOverlayView, PKDrawing, UITouch;

@protocol AKInkOverlayViewDelegate <NSObject>
- (void)inputView:(AKInkOverlayView *)arg1 didCollectDrawingForAnalysis:(PKDrawing *)arg2;
- (void)inputViewDidBeginStroke:(AKInkOverlayView *)arg1;
- (_Bool)inputViewCanBeginDrawing:(AKInkOverlayView *)arg1 withTouch:(UITouch *)arg2;
@end
