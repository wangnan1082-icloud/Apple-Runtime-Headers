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
- (BOOL)execute:(id)arg1 error:(id *)arg2;
@property(nonatomic, readonly) long long totalChanges;
@property(nonatomic, readonly) long long changes;
@property(nonatomic, readonly) NSString *description;
- (void)closeConnection;
- (void)dealloc;
- (id)init:(id)arg1 readonly:(BOOL)arg2 error:(id *)arg3;
- (id)initWithReadonlyFlag:(BOOL)arg1 error:(id *)arg2;
@property(nonatomic, readonly) BOOL readonly;
@property(nonatomic, readonly) NSString *path; // @synthesize path;
@property(nonatomic, readonly) void *handle;

@end

