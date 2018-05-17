//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ICDClientResourceManager : NSObject
{
    NSMutableArray *_clientResources;
}

@property(retain) NSMutableArray *clientResources; // @synthesize clientResources=_clientResources;
- (id)clientsInterestedInNotification:(id)arg1;
- (void)setClientWithPID:(id)arg1 usingDevice:(BOOL)arg2;
- (id)clientUsingDevice;
- (void)invalidateAllClients;
- (unsigned int)invalidateAndRemoveClientWithPID:(id)arg1;
- (void)setCallbackInfo:(id)arg1 forClientWithPID:(id)arg2 andTransactionID:(id)arg3;
- (void)remNotificationsFromClientWithPID:(id)arg1 withNoteDictionary:(id)arg2;
- (void)addNotificationsToClientWithPID:(id)arg1 fromNoteDictionary:(id)arg2;
- (void)sendMessage:(id)arg1 withConnection:(id)arg2;
- (void)sendMessage:(id)arg1 forClientWithPID:(id)arg2;
- (id)findClientResourceWithPID:(id)arg1;
- (unsigned int)currentClientCount;
- (void)addNewClientResourceWithPID:(id)arg1 andConnection:(id)arg2;
- (void)dealloc;
- (id)init;

@end
