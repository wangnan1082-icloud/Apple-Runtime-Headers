//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBDeleteOperationResult : NSObject
{
    BOOL _didSucceed;
    unsigned long long _count;
}

@property BOOL didSucceed; // @synthesize didSucceed=_didSucceed;
@property unsigned long long count; // @synthesize count=_count;
- (id)initWithCount:(unsigned long long)arg1 andDidSucceed:(BOOL)arg2;

@end

