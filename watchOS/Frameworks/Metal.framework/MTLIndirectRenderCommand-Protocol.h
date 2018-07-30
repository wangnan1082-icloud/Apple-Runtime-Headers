//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MTLIndirectRenderCommand <NSObject>
- (void)reset;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id <MTLBuffer>)arg4 indexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6 baseVertex:(int)arg7 baseInstance:(unsigned int)arg8;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3 instanceCount:(unsigned int)arg4 baseInstance:(unsigned int)arg5;
- (void)setFragmentBuffer:(id <MTLBuffer>)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setVertexBuffer:(id <MTLBuffer>)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1;
@end
