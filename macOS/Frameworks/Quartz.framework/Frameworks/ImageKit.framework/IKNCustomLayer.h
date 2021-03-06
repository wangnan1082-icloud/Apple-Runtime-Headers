//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface IKNCustomLayer : CALayer
{
    BOOL _ignoresMouseDown;
    BOOL _centersX;
    BOOL _centersY;
}

@property BOOL centersY; // @synthesize centersY=_centersY;
@property BOOL centersX; // @synthesize centersX=_centersX;
@property BOOL ignoresMouseDown; // @synthesize ignoresMouseDown=_ignoresMouseDown;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)resizeWithOldSuperlayerSize:(struct CGSize)arg1;
- (id)init;

@end

