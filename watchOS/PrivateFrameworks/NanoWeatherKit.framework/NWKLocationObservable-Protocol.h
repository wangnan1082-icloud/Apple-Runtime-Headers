//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSTimeZone, WFLocation;

@protocol NWKLocationObservable <NSObject>
- (void)locationServerUpdatedLocalLocation:(WFLocation *)arg1;
- (void)locationServerUpdatedSelectedLocation:(WFLocation *)arg1;
- (void)locationServerUpdatedStaticLocations:(NSArray *)arg1;
- (void)locationServerUpdatedLocation:(WFLocation *)arg1 updatedTimeZone:(NSTimeZone *)arg2;
- (void)locationServerUpdatedLocation:(WFLocation *)arg1 updatedDisplayName:(NSString *)arg2;
@end
