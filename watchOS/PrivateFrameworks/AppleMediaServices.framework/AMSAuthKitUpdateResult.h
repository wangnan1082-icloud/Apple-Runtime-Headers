//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount;

@interface AMSAuthKitUpdateResult : NSObject
{
    ACAccount *_account;
    unsigned int _credentialSource;
}

@property(readonly, nonatomic) unsigned int credentialSource; // @synthesize credentialSource=_credentialSource;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 credentialSource:(unsigned int)arg2;

@end
