//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCRUIElement;

__attribute__((visibility("hidden")))
@interface _SCRElementHashStackContainer : NSObject
{
    NSArray *tmpChildren;
    unsigned long long tmpChildIndex;
    unsigned long long tmpChildrenIndexOffset;
    unsigned long long childIndex;
    unsigned long long childCount;
    SCRUIElement *uiElement;
    unsigned long long roleHash;
}

- (void)dealloc;

@end

