//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/PFDiskCache.h>

@interface PADiskCache : PFDiskCache
{
}

- (void)setCacheBuffer:(id)arg1 forKey:(id)arg2 preparationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)cacheBufferForKey:(id)arg1 purgeLevel:(int)arg2;
- (void)_writeCacheBuffer:(id)arg1 checksum:(id)arg2 preparationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_readCacheBuffer:(id)arg1 purgeLevel:(int)arg2;

@end

