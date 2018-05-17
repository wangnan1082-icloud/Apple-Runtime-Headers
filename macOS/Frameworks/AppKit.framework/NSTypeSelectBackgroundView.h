//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface NSTypeSelectBackgroundView : NSView
{
    NSColor *_strokeColor;
    NSColor *_backgroundColor;
}

@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
