//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFCopyOnWriteHolder : NSObject
{
    int _interestCount;
    id _object;
}

@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasMultipleInterests;
- (void)endInterest;
- (void)beginInterest;
- (id)initWithObject:(id)arg1;

@end

