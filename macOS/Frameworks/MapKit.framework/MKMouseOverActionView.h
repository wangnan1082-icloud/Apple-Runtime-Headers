//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKViewWithHairline.h>

@class NSTrackingArea;

@interface MKMouseOverActionView : MKViewWithHairline
{
    NSTrackingArea *_trackingArea;
    CDUnknownBlockType _onMouseEnter;
    CDUnknownBlockType _onMouseExit;
}

@property(copy) CDUnknownBlockType onMouseExit; // @synthesize onMouseExit=_onMouseExit;
@property(copy) CDUnknownBlockType onMouseEnter; // @synthesize onMouseEnter=_onMouseEnter;
- (void).cxx_destruct;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;

@end
