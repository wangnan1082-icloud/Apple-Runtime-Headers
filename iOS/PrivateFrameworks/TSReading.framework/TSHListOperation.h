//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TSReading/TSHListPropertiesOperation.h>

@class NSMutableArray;

@interface TSHListOperation : TSHListPropertiesOperation
{
    NSMutableArray *mSubPaths;
}

- (void)parserDidEndDocument:(id)arg1;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;
- (id)subPaths;
- (void)dealloc;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;

@end
