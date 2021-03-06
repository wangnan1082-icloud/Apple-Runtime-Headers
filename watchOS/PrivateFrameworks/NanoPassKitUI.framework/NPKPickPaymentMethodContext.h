//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKitUI/NPKPickPaymentApplicationControllerDelegate-Protocol.h>

@class NPKPickPaymentApplicationController, PKPaymentPass, UIViewController;

@interface NPKPickPaymentMethodContext : NSObject <NPKPickPaymentApplicationControllerDelegate>
{
    _Bool _needsShowUIAfterDismiss;
    PKPaymentPass *_paymentPass;
    UIViewController *_presentingViewController;
    NPKPickPaymentApplicationController *_pickPaymentApplicationController;
}

@property(nonatomic) _Bool needsShowUIAfterDismiss; // @synthesize needsShowUIAfterDismiss=_needsShowUIAfterDismiss;
@property(retain, nonatomic) NPKPickPaymentApplicationController *pickPaymentApplicationController; // @synthesize pickPaymentApplicationController=_pickPaymentApplicationController;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
- (void).cxx_destruct;
- (void)pickPaymentApplicationController:(id)arg1 didPickPaymentApplication:(id)arg2;
- (void)showSelectionUI;
- (id)initWithPaymentPass:(id)arg1 presentingViewController:(id)arg2;

@end

