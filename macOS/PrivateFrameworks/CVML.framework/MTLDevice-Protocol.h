//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLCompileOptions, MTLComputePipelineDescriptor, MTLDepthStencilDescriptor, MTLHeapDescriptor, MTLRenderPipelineDescriptor, MTLSamplerDescriptor, MTLTextureDescriptor, NSArray, NSBundle, NSObject<OS_dispatch_data>, NSString, NSURL;

@protocol MTLDevice <NSObject>
@property(readonly, getter=areProgrammableSamplePositionsSupported) BOOL programmableSamplePositionsSupported;
@property(readonly) unsigned long long maxThreadgroupMemoryLength;
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly, getter=areRasterOrderGroupsSupported) BOOL rasterOrderGroupsSupported;
@property(readonly) unsigned long long argumentBuffersSupport;
@property(readonly) unsigned long long readWriteTextureSupport;
@property(readonly, getter=isDepth24Stencil8PixelFormatSupported) BOOL depth24Stencil8PixelFormatSupported;
@property(readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(readonly, getter=isRemovable) BOOL removable;
@property(readonly, getter=isHeadless) BOOL headless;
@property(readonly, getter=isLowPower) BOOL lowPower;
@property(readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property(readonly) unsigned long long registryID;
@property(readonly) NSString *name;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithArguments:(NSArray *)arg1;
- (void)getDefaultSamplePositions:(CDStruct_b2fbf00d *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (BOOL)supportsTextureSampleCount:(unsigned long long)arg1;
- (BOOL)supportsFeatureSet:(unsigned long long)arg1;
- (id <MTLFence>)newFence;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLComputePipelineState>, MTLComputePipelineReflection *, NSError *))arg3;
- (void)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLComputePipelineState>)newComputePipelineStateWithFunction:(id <MTLFunction>)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (void)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithDescriptor:(MTLRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 completionHandler:(void (^)(id <MTLLibrary>, NSError *))arg3;
- (id <MTLLibrary>)newLibraryWithSource:(NSString *)arg1 options:(MTLCompileOptions *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithData:(NSObject<OS_dispatch_data> *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithFile:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibraryWithBundle:(NSBundle *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newDefaultLibrary;
- (id <MTLSamplerState>)newSamplerStateWithDescriptor:(MTLSamplerDescriptor *)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLDepthStencilState>)newDepthStencilStateWithDescriptor:(MTLDepthStencilDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(void (^)(void *, unsigned long long))arg4;
- (id <MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id <MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id <MTLHeap>)newHeapWithDescriptor:(MTLHeapDescriptor *)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id <MTLCommandQueue>)newCommandQueue;
@end
