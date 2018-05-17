//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentValidating.h"

@class NSString, PKPaymentContentItem;

@interface PKPaymentContentItemValidator : NSObject <PKPaymentValidating>
{
    PKPaymentContentItem *_item;
}

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
@property(readonly, nonatomic) PKPaymentContentItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)isValidWithError:(id *)arg1;
- (id)initWithContentItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
