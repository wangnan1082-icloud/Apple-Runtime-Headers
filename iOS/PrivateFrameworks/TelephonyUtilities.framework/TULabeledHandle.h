//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, TUHandle;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding>
{
    TUHandle *_handle;
    NSString *_label;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToLabeledHandle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithHandle:(id)arg1 label:(id)arg2;

@end
