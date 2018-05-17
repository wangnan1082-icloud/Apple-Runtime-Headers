//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject
{
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
}

+ (id)fakePaymentSetupProvisioningFields;
+ (id)defaultPaymentSetupProvisioningFields;
- (void).cxx_destruct;
- (void)resetAllPaymentSetupFieldValues;
- (id)secureSubmissionValuesForDestination:(id)arg1;
- (_Bool)hasFooterPaymentSetupField;
- (id)footerPaymentSetupField;
- (id)submissionValuesForDestination:(id)arg1;
- (_Bool)hasIncompletePaymentSetupFields;
- (id)incompletePaymentSetupFields;
- (id)paymentSetupFieldWithIdentifier:(id)arg1;
- (unsigned int)numberOfPaymentSetupFields;
- (id)paymentSetupFieldAtIndex:(unsigned int)arg1;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFields;
- (void)updateWithPaymentSetupFields:(id)arg1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1;
- (void)replaceAllPaymentSetupFields:(id)arg1;
- (id)initWithPaymentSetupFields:(id)arg1;

@end
