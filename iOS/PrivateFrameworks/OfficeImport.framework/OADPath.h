//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADPath : NSObject
{
    struct CGSize mSize;
    NSMutableArray *mElements;
    int mFillMode;
    _Bool mStroked;
}

- (id)description;
- (void)setStroked:(_Bool)arg1;
- (_Bool)stroked;
- (void)setFillMode:(int)arg1;
- (int)fillMode;
- (id)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCount;
- (void)addElement:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)dealloc;
- (id)init;

@end

