//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIKBRTMutableOrderIndexSet : NSObject
{
    _Bool _reversed;
    NSMutableIndexSet *_indexSet;
}

@property(nonatomic) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) NSMutableIndexSet *indexSet; // @synthesize indexSet=_indexSet;
- (void).cxx_destruct;
- (id)description;
- (void)removeIndexes:(id)arg1;
- (void)removeIndex:(unsigned int)arg1;
- (void)addIndex:(unsigned int)arg1;
@property(readonly) unsigned int endingIndex;
@property(readonly) unsigned int beginningIndex;
@property(readonly) unsigned int highestIndex;
@property(readonly) unsigned int lowestIndex;
@property(readonly) unsigned int count;
- (id)initWithIndexesInRange:(struct _NSRange)arg1;
- (id)init;

@end
