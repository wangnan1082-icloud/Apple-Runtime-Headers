//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC13CoreKnowledge15CKSQLConnection : NSObject
{
    // Error parsing type: , name: _handle
    // Error parsing type: , name: path
    // Error parsing type: , name: queue
    // Error parsing type: , name: queueContext.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)interrupt;
- (_Bool)execute:(id)arg1 error:(id *)arg2;
@property(nonatomic, readonly) int totalChanges;
@property(nonatomic, readonly) int changes;
@property(nonatomic, readonly) NSString *description;
- (void)closeConnection;
- (void)dealloc;
- (id)init:(id)arg1 readonly:(_Bool)arg2 error:(id *)arg3;
- (id)initWithReadonlyFlag:(_Bool)arg1 error:(id *)arg2;
@property(nonatomic, readonly) _Bool readonly;
@property(nonatomic, readonly) NSString *path; // @synthesize path;
@property(nonatomic, readonly) void *handle;

@end

