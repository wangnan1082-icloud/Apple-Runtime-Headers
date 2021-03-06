//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCharacteristicEventBase.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDCharacteristicEvent : HMDCharacteristicEventBase <NSSecureCoding>
{
    id _eventValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
- (void).cxx_destruct;
- (id)metricData;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createPayload;
- (id)dumpState;
- (_Bool)_compareEventValue:(id)arg1;
- (_Bool)_evaluateNewValue:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (id)emptyModelObject;
- (id)description;
- (id)initWithModel:(id)arg1 home:(id)arg2;

@end

