//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, TSKSettingGroup;

@protocol TSKSettingGroupDelegate <NSObject>
- (void)settingGroup:(TSKSettingGroup *)arg1 willRemoveItems:(NSArray *)arg2;
- (void)settingGroup:(TSKSettingGroup *)arg1 didInsertItems:(NSArray *)arg2;
@end
