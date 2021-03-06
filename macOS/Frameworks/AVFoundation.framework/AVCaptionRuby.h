//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>
#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVCaptionRubyInternal, NSString;

@interface AVCaptionRuby : NSObject <NSCopying, NSSecureCoding>
{
    AVCaptionRubyInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
- (id)description;
@property(readonly, nonatomic) NSString *text;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)init;

@end

