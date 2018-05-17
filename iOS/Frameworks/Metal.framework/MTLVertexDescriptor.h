//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MTLVertexAttributeDescriptorArray, MTLVertexBufferLayoutDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (id)vertexDescriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly) MTLVertexAttributeDescriptorArray *attributes; // @dynamic attributes;
@property(readonly) MTLVertexBufferLayoutDescriptorArray *layouts; // @dynamic layouts;

@end
