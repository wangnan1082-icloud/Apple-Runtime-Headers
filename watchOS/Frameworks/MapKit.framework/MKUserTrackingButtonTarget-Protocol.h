//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol MKUserTrackingButtonTarget <NSObject>
+ (Class)_activityIndicatorClass;
- (int)_activityIndicatorStyle;
- (UIImage *)_imageForState:(int)arg1 controlState:(unsigned int)arg2;
- (void)_repositionViews;
- (_Bool)_isHighlightedForState:(int)arg1;
- (void)_updateForState:(int)arg1;
- (void)_setInternallyEnabled:(_Bool)arg1;
@end
