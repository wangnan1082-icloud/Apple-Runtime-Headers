//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol HKDecimalPrecisionRule <NSObject>
- (id <HKNumberFormatter>)numberFormatter;
- (int)decimalPrecisionForValue:(double)arg1;
- (int)minimumDecimalPrecision;
- (int)maximumDecimalPrecision;
@end
