//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class ACAccount, NSString;

@protocol EMAccount <NSObject>
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *hostname;
- (void)savePersistentAccount;
- (BOOL)hasPasswordCredential;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (ACAccount *)systemAccount;
@end

