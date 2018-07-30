//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/HMEvent.h>

#import "HMCharacteristicEventProtocol.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class HMCharacteristic, HMNumberRange, NSString;

@interface HMCharacteristicThresholdRangeEvent : HMEvent <HMCharacteristicEventProtocol, NSSecureCoding, NSCopying, NSMutableCopying>
{
    HMNumberRange *_thresholdRange;
    HMCharacteristic *_characteristic;
}

+ (BOOL)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (BOOL)isSupportedForHome:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_updateThresholdRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateThresholdRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (void)setThresholdRange:(id)arg1;
@property(readonly, copy, nonatomic) HMNumberRange *thresholdRange; // @synthesize thresholdRange=_thresholdRange;
- (void)setCharacteristic:(id)arg1;
@property(readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)initWithDict:(id)arg1 characteristic:(id)arg2 thresholdRange:(id)arg3;
- (id)initWithCharacteristic:(id)arg1 thresholdRange:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
