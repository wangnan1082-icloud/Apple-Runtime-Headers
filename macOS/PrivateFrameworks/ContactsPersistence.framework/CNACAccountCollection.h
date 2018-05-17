//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNAccountCollection.h"

@class CNAccountCollectionUpdateWatcher, CNPublishingSubject, NSArray, NSString, NSURL;

@interface CNACAccountCollection : NSObject <CNAccountCollection>
{
    NSArray *_accounts;
    NSURL *_baseURL;
    CNPublishingSubject *_enabledAccountsObservable;
    BOOL _includeLocalAccount;
    NSString *_tag;
    CNAccountCollectionUpdateWatcher *_updateWatcher;
}

@property(retain) CNAccountCollectionUpdateWatcher *updateWatcher; // @synthesize updateWatcher=_updateWatcher;
@property(copy) NSString *tag; // @synthesize tag=_tag;
@property(retain) CNPublishingSubject *enabledAccountsObservable; // @synthesize enabledAccountsObservable=_enabledAccountsObservable;
@property(copy) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain) NSArray *accounts; // @synthesize accounts=_accounts;
@property(readonly, copy) NSArray *persistentAccounts;
@property(readonly) BOOL includeLocalAccount;
@property(readonly, copy) NSArray *enabledAccounts;
@property(readonly) id <CNAccountDescription> defaultAccount;
@property(readonly, copy) NSArray *allAccounts;
- (id)accountWithIdentifier:(id)arg1;
- (void)accountsUpdated:(id)arg1;
- (void)dealloc;
- (id)initWithBaseURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
