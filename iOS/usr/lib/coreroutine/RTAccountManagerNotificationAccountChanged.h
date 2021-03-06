//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class RTAccount;

@interface RTAccountManagerNotificationAccountChanged : RTNotification
{
    RTAccount *_latestAccount;
    RTAccount *_oldAccount;
}

@property(readonly, nonatomic) RTAccount *oldAccount; // @synthesize oldAccount=_oldAccount;
@property(readonly, nonatomic) RTAccount *latestAccount; // @synthesize latestAccount=_latestAccount;
- (void).cxx_destruct;
- (id)initWithLatestAccount:(id)arg1 oldAccount:(id)arg2;
- (id)init;

@end

