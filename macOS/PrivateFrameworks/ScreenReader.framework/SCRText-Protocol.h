//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/NSObject-Protocol.h>

@class SCROutputRequest, SCRUIElement;

@protocol SCRText <NSObject>
- (void)addLastWordToOutputRequest:(SCROutputRequest *)arg1;
- (void)addFirstWordToOutputRequest:(SCROutputRequest *)arg1;
- (void)addReachedEndOfTextDescriptionToOutputRequest:(SCROutputRequest *)arg1;
- (void)addReachedBeginningOfTextDescriptionToOutputRequest:(SCROutputRequest *)arg1;
- (void)addReachedBoundarySoundToOutputRequest:(SCROutputRequest *)arg1;
- (void)addTextBoundaryToOutputRequest:(SCROutputRequest *)arg1 uiElement:(SCRUIElement *)arg2 edge:(int)arg3;
- (BOOL)isSelectedTextRangeSettable;
- (BOOL)isTextElement;
@end

