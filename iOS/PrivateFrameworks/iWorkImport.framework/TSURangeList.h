//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSURangeList : NSObject
{
    vector_b5e32e34 mRangeList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)stringValue;
- (void)consolidate;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (void)reverse;
- (void)replaceWithRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)removeRangeAtIndex:(unsigned long long)arg1;
- (void)insertRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;
- (void)addRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithString:(id)arg1;
- (id)initWithRangeList:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1;

@end
