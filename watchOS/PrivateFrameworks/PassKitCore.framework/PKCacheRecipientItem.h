//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding>
{
    NSDate *_insertDate;
    PKPeerPaymentRecipient *_item;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PKPeerPaymentRecipient *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isNewerThan:(id)arg1;
- (_Bool)hasExpired;
- (id)initWithItem:(id)arg1;

@end
