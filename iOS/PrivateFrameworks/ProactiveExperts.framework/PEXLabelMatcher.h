//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PEXLabelMatcher : NSObject
{
    struct NSDictionary *_map;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSDictionary *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (struct NSDictionary *)_generateMap;
- (unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2;
- (id)init;

@end
