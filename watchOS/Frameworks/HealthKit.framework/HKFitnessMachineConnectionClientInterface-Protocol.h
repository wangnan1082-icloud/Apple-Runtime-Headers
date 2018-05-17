//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSUUID, _HKFitnessMachine;

@protocol HKFitnessMachineConnectionClientInterface <NSObject>
- (void)clientRemote_deliverFailedWithError:(NSError *)arg1;
- (void)clientRemote_deliverConnectionChangedToState:(unsigned int)arg1 fromState:(unsigned int)arg2 fitnessMachineSessionUUID:(NSUUID *)arg3 error:(NSError *)arg4;
- (void)clientRemote_deliverMachineChangedToState:(unsigned int)arg1 fromState:(unsigned int)arg2 fitnessMachineSessionUUID:(NSUUID *)arg3 date:(NSDate *)arg4;
- (void)clientRemote_deliverMachineInformationUpdated:(_HKFitnessMachine *)arg1;
- (void)clientRemote_deliverDetectedNFC:(NSUUID *)arg1;
@end
