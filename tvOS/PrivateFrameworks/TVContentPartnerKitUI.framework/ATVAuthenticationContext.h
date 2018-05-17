//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSAccount, SSAuthenticationContext;

__attribute__((visibility("hidden")))
@interface ATVAuthenticationContext : NSObject
{
    SSAuthenticationContext *_authenticationContext;
    SSAccount *_account;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SSAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void).cxx_destruct;

@end
