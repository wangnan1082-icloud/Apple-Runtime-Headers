//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PSIDateFilter;

@interface PSIParse : NSObject
{
    NSArray *_tokens;
    NSString *_string;
    PSIDateFilter *_dateFilter;
}

@property(copy, nonatomic) PSIDateFilter *dateFilter; // @synthesize dateFilter=_dateFilter;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithToken:(id)arg1;
- (id)parseByReplacingTokensInRange:(struct _NSRange)arg1 withTokens:(id)arg2;
- (id)parseByReplacingTokenAtIndex:(unsigned int)arg1 withToken:(id)arg2;
- (id)tokenAtIndex:(unsigned int)arg1;
- (void)enumerateTokensUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int numberOfTokens;
- (id)initWithTokens:(id)arg1 fromString:(id)arg2;
- (id)initWithToken:(id)arg1;

@end
