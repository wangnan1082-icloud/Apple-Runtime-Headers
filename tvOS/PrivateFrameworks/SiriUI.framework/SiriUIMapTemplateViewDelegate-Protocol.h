//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLPlacemark, SiriUIMapTemplateView;

@protocol SiriUIMapTemplateViewDelegate <NSObject>
- (void)mapTemplateViewDidSelectMap:(SiriUIMapTemplateView *)arg1;
- (void)mapTemplateView:(SiriUIMapTemplateView *)arg1 didModifyPlacemark:(CLPlacemark *)arg2;
@end
