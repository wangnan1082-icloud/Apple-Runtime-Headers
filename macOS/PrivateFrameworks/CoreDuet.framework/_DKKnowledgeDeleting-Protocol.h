//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSObject<OS_dispatch_queue>;

@protocol _DKKnowledgeDeleting
- (void)deleteObjects:(NSArray *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (BOOL)deleteObjects:(NSArray *)arg1 error:(id *)arg2;
@end
