//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLRenderPassDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor
{
    struct MTLRenderPassDescriptorPrivate _private;
}

+ (id)renderPassDescriptor;
- (const struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;
- (_Bool)validate:(id)arg1 width:(unsigned int *)arg2 height:(unsigned int *)arg3;
- (unsigned int)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned int)arg2;
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned int)arg2;
- (_Bool)fineGrainedBackgroundVisibilityEnabled;
- (void)setFineGrainedBackgroundVisibilityEnabled:(_Bool)arg1;
- (unsigned int)renderTargetHeight;
- (void)setRenderTargetHeight:(unsigned int)arg1;
- (unsigned int)renderTargetWidth;
- (void)setRenderTargetWidth:(unsigned int)arg1;
- (id)visibilityResultBuffer;
- (void)setVisibilityResultBuffer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)stencilAttachment;
- (void)setStencilAttachment:(id)arg1;
- (id)depthAttachment;
- (void)setDepthAttachment:(id)arg1;
- (id)colorAttachments;
- (id)init;

@end
