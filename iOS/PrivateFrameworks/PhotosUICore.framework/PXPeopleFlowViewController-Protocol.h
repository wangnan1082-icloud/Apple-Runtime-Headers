//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol PXPeopleFlowViewController <NSObject>
@property(retain, nonatomic) id context;

@optional
@property(nonatomic) __weak id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)willTransitionToPreviousInFlow;
- (void)willTransitionToNextInFlow;
@end
