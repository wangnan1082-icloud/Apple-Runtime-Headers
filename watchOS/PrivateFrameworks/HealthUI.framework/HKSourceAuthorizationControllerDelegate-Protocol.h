//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKObjectType, HKSourceAuthorizationController, NSSet;

@protocol HKSourceAuthorizationControllerDelegate <NSObject>
- (void)authorizationController:(HKSourceAuthorizationController *)arg1 subTypesEnabled:(NSSet *)arg2 forType:(HKObjectType *)arg3 inSection:(int)arg4;
- (void)authorizationController:(HKSourceAuthorizationController *)arg1 parentTypeIsDisabled:(HKObjectType *)arg2 forType:(HKObjectType *)arg3 inSection:(int)arg4;
@end
