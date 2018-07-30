//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBDataString, _INPBDateTime, _INPBTask;

@protocol _INPBTaskList <NSObject>
+ (Class)tasksType;
@property(readonly, nonatomic) BOOL hasTitle;
@property(retain, nonatomic) _INPBDataString *title;
@property(readonly, nonatomic) unsigned long long tasksCount;
@property(copy, nonatomic) NSArray *tasks;
@property(readonly, nonatomic) BOOL hasModifiedDateTime;
@property(retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(retain, nonatomic) _INPBDataString *groupName;
@property(readonly, nonatomic) BOOL hasCreatedDateTime;
@property(retain, nonatomic) _INPBDateTime *createdDateTime;
- (_INPBTask *)tasksAtIndex:(unsigned long long)arg1;
- (void)addTasks:(_INPBTask *)arg1;
- (void)clearTasks;
@end
