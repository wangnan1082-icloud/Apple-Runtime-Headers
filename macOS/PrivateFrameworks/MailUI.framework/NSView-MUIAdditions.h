//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSString;

@interface NSView (MUIAdditions)
- (id)_briefDescriptionWithoutPII;
- (id)_subtreeDescriptionWithoutPIIWithDepth:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *subtreeDescriptionWithoutPII;
- (void)mui_cancelSynchronousLayout;
- (void)mui_performLayoutSynchronously;
- (void)mui_prepareToLayoutSynchronously:(CDUnknownBlockType)arg1;
- (void)mui_cancelAnimation;
- (void)mui_performAnimation;
- (void)mui_prepareToAnimate:(CDUnknownBlockType)arg1;
- (void)mui_didCacheDisplayInRect;
- (void)mui_prepareToCacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mui_cacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end
