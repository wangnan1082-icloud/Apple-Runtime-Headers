//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKModel-Protocol.h>

@class NSSet, TSSStylesheet;

@protocol TSSStyleClient <TSKModel>
- (void)replaceReferencedStylesUsingBlock:(TSSStyle * (^)(TSSStyle *))arg1;
- (NSSet *)referencedStyles;

@optional
- (void)afterReplacingReferencedStylesSetStylesheet:(TSSStylesheet *)arg1;
@end

