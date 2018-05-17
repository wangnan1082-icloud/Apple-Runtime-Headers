//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface ICStoreDialogResponseHandler : NSObject <NSCopying>
{
}

- (void)_handleGotoButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleBuyButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleAuthenticationStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_handleDefaultStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
