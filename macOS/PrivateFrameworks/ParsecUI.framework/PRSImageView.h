//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

#import <ParsecUI/NSDraggingSource-Protocol.h>
#import <ParsecUI/NSPasteboardItemDataProvider-Protocol.h>

@class NSString;

@interface PRSImageView : NSImageView <NSPasteboardItemDataProvider, NSDraggingSource>
{
    BOOL _dragEnabled;
}

@property(getter=isDragEnabled) BOOL dragEnabled; // @synthesize dragEnabled=_dragEnabled;
- (BOOL)isAccessibilityElement;
- (void)mouseDown:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (struct CGSize)fittingSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

