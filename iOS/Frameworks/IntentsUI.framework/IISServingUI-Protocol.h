//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IISServing.h"

@class INImage, UITraitCollection;

@protocol IISServingUI <IISServing>
- (void)loadUIImageForINImage:(INImage *)arg1 traitCollection:(UITraitCollection *)arg2 reply:(void (^)(UIImage *, NSError *))arg3;
@end
