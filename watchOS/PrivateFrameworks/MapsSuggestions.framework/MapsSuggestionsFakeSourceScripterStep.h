//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MapsSuggestionsFakeSourceScripterStep : NSObject
{
    struct NSArray *_entries;
    unsigned int _type;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntries:(struct NSArray *)arg1 type:(unsigned int)arg2;

@end
