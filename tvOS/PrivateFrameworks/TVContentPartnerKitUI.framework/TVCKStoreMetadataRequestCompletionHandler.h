//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVCKStoreMetadataRequestCompletionHandler : NSObject
{
    CDUnknownBlockType _block;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)invokeWithResponse:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
