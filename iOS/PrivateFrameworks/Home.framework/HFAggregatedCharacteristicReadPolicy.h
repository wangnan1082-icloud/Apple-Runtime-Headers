//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFCharacteristicReadPolicy.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray, NSString;

@interface HFAggregatedCharacteristicReadPolicy : NSObject <HFCharacteristicReadPolicy, NSCopying, NSMutableCopying>
{
    NSArray *_policies;
}

@property(readonly, nonatomic) NSArray *policies; // @synthesize policies=_policies;
- (void).cxx_destruct;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPolicies:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
