//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFSQLiteConnectionConfiguration, MFSQLiteConnectionPool, NSString;

@interface MFSQLiteConnection : NSObject
{
    struct sqlite3 *_db;
    NSString *_databaseName;
    struct __CFDictionary *_statementCache;
    void *_ICUSearchContext;
    void *_CPSearchContext;
    int _transactionType;
    unsigned int _transactionCount;
    MFSQLiteConnectionPool *_pool;
    MFSQLiteConnectionConfiguration *_configuration;
}

@property(copy, nonatomic) MFSQLiteConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(nonatomic) __weak MFSQLiteConnectionPool *pool; // @synthesize pool=_pool;
- (void).cxx_destruct;
- (int)rollbackTransaction;
- (int)commitTransaction;
- (int)beginTransactionWithType:(int)arg1;
- (int)beginTransaction;
- (struct sqlite3_stmt *)preparedStatementForPattern:(id)arg1;
- (void)flush;
- (_Bool)isOpen;
- (void)close;
- (int)open;
- (void)_fixFilePermission;
- (void)_makeCompletePath;
- (const char *)_vfsModuleName;
- (id)initWithConfiguration:(id)arg1;
- (void)dealloc;

@end

