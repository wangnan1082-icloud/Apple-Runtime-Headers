//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class IKSlideshowElement;

__attribute__((visibility("hidden")))
@interface IKSlideshowItemLoadOperation : NSOperation
{
    IKSlideshowElement *_item;
    BOOL _display;
}

- (void)main;
- (void)finalize;
- (void)dealloc;
- (void)slideshowWillStop:(id)arg1;
- (void)cleanup;
- (id)initWithItem:(id)arg1 display:(BOOL)arg2;

@end

