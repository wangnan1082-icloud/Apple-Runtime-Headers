//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@interface DNDBehaviorSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned int _interruptionBehaviorSetting;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int interruptionBehaviorSetting; // @synthesize interruptionBehaviorSetting=_interruptionBehaviorSetting;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)_initWithInterruptionBehaviorSetting:(unsigned int)arg1;
- (id)_initWithSettings:(id)arg1;
- (id)init;
@property(readonly, nonatomic) unsigned int interruptionBehavior; // @dynamic interruptionBehavior;

@end
