//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TNFormulaIDWrapper : NSObject <NSCopying>
{
    CDStruct_ed6d627d mID;
}

@property(readonly) CDStruct_ed6d627d formulaID; // @synthesize formulaID=mID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTNFormulaIDWrapper:(id)arg1;
- (CDStruct_ed6d627d)chartFormulaID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTNChartFormulaID:(CDStruct_ed6d627d)arg1;

@end
