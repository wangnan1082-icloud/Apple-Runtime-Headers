//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NFCallbackStore : NSObject
{
    NSMutableDictionary *_store;
}

@property(readonly, nonatomic) NSMutableDictionary *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)storeCallbackDefinition:(id)arg1 forKey:(id)arg2 scope:(id)arg3;
- (id)lookupForKey:(id)arg1 name:(id)arg2;
- (id)init;

@end
