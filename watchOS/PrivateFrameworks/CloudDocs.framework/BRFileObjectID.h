//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "PQLValuable.h"

@class NSNumber, NSString;

@interface BRFileObjectID : NSObject <NSSecureCoding, NSCopying, PQLValuable>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)fileObjectIDForURL:(id)arg1 allocateDocID:(_Bool)arg2 error:(id *)arg3;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (id)fileObjectIDWithString:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFileObjectID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long rawID;
@property(readonly, nonatomic) NSString *asString;
@property(readonly, nonatomic) NSNumber *documentID;
@property(readonly, nonatomic) NSNumber *folderID;
@property(readonly, nonatomic) _Bool isDocumentID;
@property(readonly, nonatomic) _Bool isFolderOrAliasID;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
