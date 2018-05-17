//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPNetworkTaskOperation.h>

#import "IMAPFetchResponseHandler.h"

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, NSString;

@interface IMAPSyncUIDsFlagsAndLabelsOperation : IMAPNetworkTaskOperation <IMAPFetchResponseHandler>
{
    NSMutableArray *_fetchResponses;
    NSMutableIndexSet *_vanishedUIDs;
    BOOL _includeLabels;
    unsigned int _highestKnownUID;
    NSIndexSet *_messageNumbers;
    unsigned long long _changedSince;
    id <IMAPSyncUIDsFlagsAndLabelsOperationDelegate> _delegate;
}

@property(readonly, nonatomic) unsigned int highestKnownUID; // @synthesize highestKnownUID=_highestKnownUID;
@property(readonly, nonatomic) __weak id <IMAPSyncUIDsFlagsAndLabelsOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL includeLabels; // @synthesize includeLabels=_includeLabels;
@property(readonly, nonatomic) unsigned long long changedSince; // @synthesize changedSince=_changedSince;
@property(readonly, copy, nonatomic) NSIndexSet *messageNumbers; // @synthesize messageNumbers=_messageNumbers;
- (void).cxx_destruct;
- (BOOL)handleResponse:(id)arg1 forCommand:(id)arg2;
- (void)main;
- (id)_syncUIDsFlagsAndLabelsOperationDescription:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithMailboxName:(id)arg1;
- (void)_imapSyncUIDsFlagsAndLabelsOperationCommonInitIncludeLabels:(BOOL)arg1 delegate:(id)arg2;
- (id)initWithChangedSince:(unsigned long long)arg1 highestKnownUID:(unsigned int)arg2 includeLabels:(BOOL)arg3 mailboxName:(id)arg4 delegate:(id)arg5;
- (id)initWithMessageNumbers:(id)arg1 includeLabels:(BOOL)arg2 mailboxName:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
