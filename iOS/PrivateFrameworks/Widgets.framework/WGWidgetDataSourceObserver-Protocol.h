//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WGWidgetDataSource, WGWidgetDatum;

@protocol WGWidgetDataSourceObserver <NSObject>
- (void)widgetDataSource:(WGWidgetDataSource *)arg1 removeDatum:(WGWidgetDatum *)arg2;
- (void)widgetDataSource:(WGWidgetDataSource *)arg1 replaceWithDatum:(WGWidgetDatum *)arg2;
@end
