//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKResizingLayer.h>

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface _MKCalloutLayer : _MKResizingLayer
{
    struct CGImage *_contentImage;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    int _arrowPosition;
    float _arrowOffset;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) float arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) int arrowPosition; // @synthesize arrowPosition=_arrowPosition;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setContentsScale:(float)arg1;
- (id)init;
- (struct CGImage *)_newContentImage;
- (struct CGSize)_contentSize;

@end

