//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface PFCloudKitErrorLog : NSObject
{
    NSMutableArray *_entries;
}

@property(readonly, nonatomic) NSArray *entries;
- (void)logEncounteredError:(id)arg1 withAnnotation:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end
