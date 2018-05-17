//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AVCaptionPositionInternal;

@interface AVCaptionPosition : NSObject <NSCopying, NSSecureCoding>
{
    AVCaptionPositionInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long cellY;
@property(readonly, nonatomic) long long cellX;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCellPositionX:(long long)arg1 andY:(long long)arg2;
- (id)init;

@end
