//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotificationCenter/NCTexturedView.h>

@class CALayer;

@interface _NCWidgetDragBackground : NCTexturedView
{
    BOOL _dark;
    CALayer *backgroundLayer1;
    CALayer *backgroundLayer2;
}

- (void).cxx_destruct;
- (void)layout;
- (id)makeBackingLayer;
- (id)initWithFrame:(struct CGRect)arg1 dark:(BOOL)arg2;

@end
