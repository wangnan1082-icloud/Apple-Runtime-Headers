//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_ICLexiconSourcing.h"
#import "_ICPredictionSourcing.h"

@class NSCondition, NSMutableArray, NSObject<OS_dispatch_semaphore>, PEXQuickTypeBroker;

@interface _ICPEXSource : NSObject <_ICPredictionSourcing, _ICLexiconSourcing>
{
    NSMutableArray *_contacts;
    NSObject<OS_dispatch_semaphore> *_pexContactsLoadedSemaphore;
    NSCondition *_pexBrokerLoadedCondition;
    PEXQuickTypeBroker *_pexBroker;
}

@property(retain) PEXQuickTypeBroker *pexBroker; // @synthesize pexBroker=_pexBroker;
- (void).cxx_destruct;
- (void)unregisterNameDelegate:(id)arg1;
- (void)registerNameDelegate:(id)arg1;
- (void)searchForMeCardEmailAddressesWithTimeout:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)searchForMeCardRegionsWithTimeout:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(float)arg4 handler:(CDUnknownBlockType)arg5;
- (BOOL)generateNoresultExplanation:(id *)arg1;
- (id)getPEXBroker;
- (id)init;

@end
