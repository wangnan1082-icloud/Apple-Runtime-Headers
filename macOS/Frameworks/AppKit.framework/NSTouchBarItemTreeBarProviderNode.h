//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTouchBarItemTreeNode.h>

#import "NSTouchBarItemTreeParentNode.h"

@class NSString, NSTouchBar;

@interface NSTouchBarItemTreeBarProviderNode : NSTouchBarItemTreeNode <NSTouchBarItemTreeParentNode>
{
    NSTouchBar *_touchBar;
}

+ (id)nodeForTouchBar:(id)arg1;
@property(readonly) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property(readonly, copy) NSString *description;
@property(readonly) long long touchBarLayoutDirection;
@property(readonly) NSTouchBar *touchBarContainingChildNodes;
- (void)dealloc;
- (id)initWithNode:(id)arg1 children:(id)arg2;
- (id)itemIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
