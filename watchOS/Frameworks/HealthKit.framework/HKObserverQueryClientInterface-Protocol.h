//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKQueryClientInterface.h"

@class NSNumber, NSUUID;

@protocol HKObserverQueryClientInterface <HKQueryClientInterface>
- (void)client_dataUpdatedInDatabaseWithAnchor:(NSNumber *)arg1 query:(NSUUID *)arg2;
@end
