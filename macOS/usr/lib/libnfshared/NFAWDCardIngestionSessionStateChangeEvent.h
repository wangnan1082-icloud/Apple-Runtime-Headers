//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFAWDEventProtocol.h"

@class AWDNFCCardIngestionSessionStateChangeEvent, NSString;

@interface NFAWDCardIngestionSessionStateChangeEvent : NSObject <NFAWDEventProtocol>
{
    unsigned int _state;
    unsigned int _technology;
    unsigned int _spStatusCode;
    unsigned int _cardValidationStatus;
    unsigned int _sessionStatus;
    AWDNFCCardIngestionSessionStateChangeEvent *_metric;
}

@property(retain, nonatomic) AWDNFCCardIngestionSessionStateChangeEvent *metric; // @synthesize metric=_metric;
@property(nonatomic) unsigned int sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property(nonatomic) unsigned int cardValidationStatus; // @synthesize cardValidationStatus=_cardValidationStatus;
@property(nonatomic) unsigned int spStatusCode; // @synthesize spStatusCode=_spStatusCode;
@property(nonatomic) unsigned int technology; // @synthesize technology=_technology;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
