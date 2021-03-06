//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFDropTarget, NSArray;
@protocol UIDropSession;

@protocol MFDropTargetDelegate <NSObject>

@optional
- (long long)dropTarget:(MFDropTarget *)arg1 dataOwnerForSession:(id <UIDropSession>)arg2;
- (void)dropTargetDragExited:(MFDropTarget *)arg1;
- (void)dropTarget:(MFDropTarget *)arg1 dragEnteredAtPoint:(struct CGPoint)arg2;
- (void)dropTarget:(MFDropTarget *)arg1 dragDidMoveToPoint:(struct CGPoint)arg2;
- (_Bool)dropTarget:(MFDropTarget *)arg1 canDropDraggedItemsAtPoint:(struct CGPoint)arg2;
- (void)dropTarget:(MFDropTarget *)arg1 didDropDragItems:(NSArray *)arg2 atPoint:(struct CGPoint)arg3;
@end

