//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableOrderedSet;

@interface CUISNotificationCenterCellCache : NSObject
{
    NSMutableArray *_cache;
    NSMutableOrderedSet *_cacheOrderedByUsage;
}

+ (id)sharedLabelCache;
- (void).cxx_destruct;
- (void)reset;
- (void)cacheLabelImage:(id)arg1;
- (id)labelImageOfType:(unsigned int)arg1 withColor:(id)arg2 text:(id)arg3;
- (id)init;

@end
