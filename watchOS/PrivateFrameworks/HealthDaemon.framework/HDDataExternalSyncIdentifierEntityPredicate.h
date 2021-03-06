//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSQLitePredicate.h>

@interface HDDataExternalSyncIdentifierEntityPredicate : HDSQLitePredicate
{
    HDSQLitePredicate *_valuePredicate;
    _Bool _matchObjectsWithoutKey;
}

+ (id)_valuePredicateForKey:(id)arg1 allowedValues:(id)arg2;
+ (id)_valuePredicateForKey:(id)arg1 value:(id)arg2 operatorType:(unsigned int)arg3;
+ (Class)_valueClassForKey:(id)arg1;
+ (id)_propertyForKey:(id)arg1;
+ (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned int)arg3;
+ (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
- (void).cxx_destruct;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)SQLForEntityClass:(Class)arg1;

@end

