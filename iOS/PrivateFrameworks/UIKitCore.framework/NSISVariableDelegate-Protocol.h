//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSISEngine, NSISVariable, NSString;

@protocol NSISVariableDelegate <NSObject>
- (_Bool)nsis_valueOfVariableIsUserObservable:(NSISVariable *)arg1;
- (NSString *)nsis_descriptionOfVariable:(NSISVariable *)arg1;
- (void)nsis_valueOfVariable:(NSISVariable *)arg1 didChangeInEngine:(NSISEngine *)arg2;

@optional
- (int)nsis_orientationHintForVariable:(NSISVariable *)arg1;
@end
