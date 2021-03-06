//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKExpressTransactionState : NSObject <NSSecureCoding>
{
    _Bool _processing;
    int _technologyType;
    NSString *_paymentApplicationIdentifier;
    NSString *_passUniqueIdentifier;
    unsigned int _receivedEvents;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int receivedEvents; // @synthesize receivedEvents=_receivedEvents;
@property(nonatomic, getter=isProcessing) _Bool processing; // @synthesize processing=_processing;
@property(retain, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(copy, nonatomic) NSString *paymentApplicationIdentifier; // @synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier;
@property(nonatomic) int technologyType; // @synthesize technologyType=_technologyType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

