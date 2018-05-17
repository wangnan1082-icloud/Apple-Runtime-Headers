//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNQuickAction, CNQuickActionsManager, NSArray, NSString, UIViewController;

@protocol CNQuickActionsManagerDelegate <NSObject>
- (UIViewController *)actionsManager:(CNQuickActionsManager *)arg1 presentingViewControllerForAction:(CNQuickAction *)arg2;

@optional
- (void)actionsManager:(CNQuickActionsManager *)arg1 actionDidPerform:(CNQuickAction *)arg2;
- (NSArray *)actionsManager:(CNQuickActionsManager *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
@end
