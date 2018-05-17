//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SXDataTableBlueprint;

@interface SXDataTableLayouter : NSObject
{
    id <SXDataTableDataSource> _dataSource;
    double _currentWidth;
    SXDataTableBlueprint *_blueprint;
    NSMutableDictionary *_minimumColumnWidths;
    NSMutableDictionary *_intendedColumnWidths;
}

@property(retain, nonatomic) NSMutableDictionary *intendedColumnWidths; // @synthesize intendedColumnWidths=_intendedColumnWidths;
@property(retain, nonatomic) NSMutableDictionary *minimumColumnWidths; // @synthesize minimumColumnWidths=_minimumColumnWidths;
@property(retain, nonatomic) SXDataTableBlueprint *blueprint; // @synthesize blueprint=_blueprint;
@property(readonly, nonatomic) double currentWidth; // @synthesize currentWidth=_currentWidth;
@property(readonly, nonatomic) id <SXDataTableDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (struct UIEdgeInsets)tableInsets;
- (double)minimumWidthForColumnAtIndex:(unsigned long long)arg1;
- (double)intendedPercentualWidthForColumnAtIndex:(unsigned long long)arg1;
- (double)totalColumnDividerWidth;
- (double)totalTableBorderHeight;
- (double)totalTableBorderWidth;
- (id)rowHeightsForColumnWidths:(id)arg1;
- (id)columnWidthsForWidth:(double)arg1 resultingTableWidth:(double *)arg2;
- (id)blueprintUsingRowHeights:(id)arg1 columnWidths:(id)arg2 andTableWidth:(double)arg3;
- (id)layoutDataTableForWidth:(double)arg1;
- (void)reset;
- (id)blueprintForWidth:(double)arg1;
- (id)initWithDataSource:(id)arg1;

@end
