//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDDatabaseTransaction, HDSQLiteDatabase;

@protocol HDSQLiteDatabaseProvider <NSObject>
- (void)checkInDatabase:(HDSQLiteDatabase *)arg1 type:(int)arg2;
- (HDSQLiteDatabase *)databaseTransaction:(HDDatabaseTransaction *)arg1 checkOutDatabaseWithType:(int)arg2 options:(unsigned int)arg3 error:(id *)arg4;
@end
