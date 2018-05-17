//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RKMontrealModel, RKNLEventTokenizer;

@interface RKEventIdentifier : NSObject
{
    RKMontrealModel *_model;
    RKNLEventTokenizer *_tokenizer;
    const struct IOMappings *_ioMappings;
    int _outputPermutation[5];
}

- (void).cxx_destruct;
- (id)identifyMessage:(id)arg1;
- (id)identifyText:(id)arg1;
- (id)identifyStrings:(id)arg1;
- (id)_identifyStrings:(id)arg1 otherDateCount:(unsigned int)arg2 otherDates:(struct RKEventIdentifierRange *)arg3;
- (id)_identifyOwnedTokenSequences:(id)arg1;
- (id)initWithLanguageID:(id)arg1;
- (id)init;

@end
