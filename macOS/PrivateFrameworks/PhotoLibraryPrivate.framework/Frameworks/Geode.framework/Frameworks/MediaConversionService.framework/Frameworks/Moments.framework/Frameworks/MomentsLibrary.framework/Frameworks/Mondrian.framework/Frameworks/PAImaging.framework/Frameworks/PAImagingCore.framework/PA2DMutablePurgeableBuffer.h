//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImagingCore/PA2DMutableBuffer.h>

@interface PA2DMutablePurgeableBuffer : PA2DMutableBuffer
{
}

- (id)description;
- (void)beginAccess:(struct PFIntRect_st)arg1 refillProcessor:(CDUnknownBlockType)arg2;
- (void)accessROI:(struct PFIntRect_st)arg1 refillProcessor:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithBacking:(id)arg1;

@end

