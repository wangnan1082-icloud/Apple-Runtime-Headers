//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying>
{
    int _mode;
    NSArray *_columnNames;
}

@property(readonly, copy, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColumnNames:(id)arg1 mode:(int)arg2;

@end
