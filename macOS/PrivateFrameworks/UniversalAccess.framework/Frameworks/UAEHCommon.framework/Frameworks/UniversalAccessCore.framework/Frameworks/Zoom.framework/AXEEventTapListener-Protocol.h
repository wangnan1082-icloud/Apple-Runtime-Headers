//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Zoom/NSObject-Protocol.h>

@protocol AXEEventTapListener <NSObject>

@optional
- (struct __CGEvent *)processActiveEventTapEvent:(struct __CGEvent *)arg1 type:(unsigned int)arg2 withProxy:(struct __CGEventTapProxy *)arg3;
- (void)processPassiveEventTapEvent:(struct __CGEvent *)arg1 type:(unsigned int)arg2 withProxy:(struct __CGEventTapProxy *)arg3;
@end

