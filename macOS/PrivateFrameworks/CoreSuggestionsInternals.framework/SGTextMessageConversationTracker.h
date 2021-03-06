//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLRUCache;

@interface SGTextMessageConversationTracker : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    _PASLRUCache *_conversations;
    _PASLRUCache *_conversationFeaturizations;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)clear;
- (id)addMessage:(id)arg1;
- (id)conversationFeaturizationForIdentifier:(id)arg1;
- (id)conversationForIdentifier:(id)arg1;
- (id)init;

@end

