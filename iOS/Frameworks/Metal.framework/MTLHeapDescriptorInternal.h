//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLHeapDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLHeapDescriptorInternal : MTLHeapDescriptor
{
    struct MTLHeapDescriptorPrivate *_private;
}

- (_Bool)validateWithDevice:(id)arg1;
- (const struct MTLHeapDescriptorPrivate *)descriptorPrivate;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (unsigned long long)cpuCacheMode;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
