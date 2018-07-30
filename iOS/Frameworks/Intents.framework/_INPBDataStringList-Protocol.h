//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBCondition, _INPBDataString;

@protocol _INPBDataStringList <NSObject>
+ (Class)dataStringType;
@property(readonly, nonatomic) unsigned long long dataStringsCount;
@property(copy, nonatomic) NSArray *dataStrings;
@property(readonly, nonatomic) _Bool hasConditionType;
@property(retain, nonatomic) _INPBCondition *conditionType;
- (_INPBDataString *)dataStringAtIndex:(unsigned long long)arg1;
- (void)addDataString:(_INPBDataString *)arg1;
- (void)clearDataStrings;
@end
