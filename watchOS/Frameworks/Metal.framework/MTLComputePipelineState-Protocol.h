//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MTLComputePipelineState <NSObject>
@property(readonly) unsigned int staticThreadgroupMemoryLength;
@property(readonly) unsigned int threadExecutionWidth;
@property(readonly) unsigned int maxTotalThreadsPerThreadgroup;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
@end
