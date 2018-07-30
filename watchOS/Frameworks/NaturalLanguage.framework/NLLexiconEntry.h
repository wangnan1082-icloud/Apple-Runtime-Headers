//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NLLexiconEntry : NSObject
{
    NSString *_string;
    unsigned int _tokenID;
    unsigned int _flags;
    double _probability;
}

+ (id)entryWithString:(id)arg1 tokenID:(unsigned int)arg2 flags:(unsigned int)arg3 probability:(double)arg4;
- (void).cxx_destruct;
@property(readonly) double probability;
@property(readonly) unsigned int flags;
- (unsigned int)tokenID;
@property(readonly, copy) NSString *string;
- (id)initWithString:(id)arg1 tokenID:(unsigned int)arg2 flags:(unsigned int)arg3 probability:(double)arg4;

@end
