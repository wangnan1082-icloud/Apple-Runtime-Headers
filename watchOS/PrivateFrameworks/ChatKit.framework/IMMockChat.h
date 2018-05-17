//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMChat.h"

@class IMHandle, IMMessage, NSArray;

@interface IMMockChat : IMChat
{
    NSArray *_mockChatItems;
    IMHandle *_incomingHandle;
    IMHandle *_outgoingHandle;
    IMMessage *_lastMockIMMessage;
    unsigned int _mockUnreadMessageCount;
}

@property(nonatomic) unsigned int mockUnreadMessageCount; // @synthesize mockUnreadMessageCount=_mockUnreadMessageCount;
@property(retain, nonatomic) IMMessage *lastMockIMMessage; // @synthesize lastMockIMMessage=_lastMockIMMessage;
@property(retain, nonatomic) IMHandle *outgoingHandle; // @synthesize outgoingHandle=_outgoingHandle;
@property(retain, nonatomic) IMHandle *incomingHandle; // @synthesize incomingHandle=_incomingHandle;
@property(retain, nonatomic) NSArray *mockChatItems; // @synthesize mockChatItems=_mockChatItems;
- (void).cxx_destruct;
- (id)_chatItemFromMockItemInfo:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_messageFromMockItemInfo:(id)arg1;
- (void)appendMockItemWithInfo:(id)arg1;
- (void)setupWithMockItemInfoArray:(id)arg1;
- (void)deleteChatItems:(id)arg1;
- (_Bool)deleteAllHistory;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned int)arg2 loadImmediately:(_Bool)arg3;
- (unsigned int)unreadMessageCount;
- (unsigned int)messageCount;
- (id)lastMessage;
- (id)lastFinishedMessage;
- (id)lastFinishedMessageDate;
- (id)displayName;
- (id)chatItems;
- (id)recipient;
- (id)participants;
- (id)init;

@end
