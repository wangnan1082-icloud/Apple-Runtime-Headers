//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFMessageStore.h>

@class MFLibraryStoreMessageConsumer, MFMessageCriterion, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MFLibraryStore : MFMessageStore
{
    id _openOptionsLock;
    unsigned int _openOptions;
    NSMutableSet *_memberMessageIDs;
    id _allMessagesDuringOpeningLock;
    NSMutableArray *_allMessagesDuringOpening;
    id _consumerLock;
    MFLibraryStoreMessageConsumer *_consumer;
    NSMutableDictionary *_libraryFetchLockMap;
    NSString *_url;
    MFMessageCriterion *_criterion;
}

+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (id)filterMessages:(id)arg1 throughSmartMailbox:(id)arg2;
+ (id)sharedInstance;
+ (unsigned int)defaultLoadOptions;
+ (void)initialize;
@property(retain) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
@property(copy) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)hasCacheFileForMessage:(id)arg1;
- (BOOL)messageHasBeenDeleted:(id)arg1;
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (void)moveMessagesToRecoveredMail:(id)arg1;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (id)_setOrGetValue:(id)arg1 forKey:(id)arg2 inCache:(id *)arg3;
- (void)_invalidateObjectCachesForKey:(id)arg1;
- (unsigned long long)_numberOfMessagesToCache;
- (void)_rebuildTableOfContentsSynchronously;
- (void)rebuildTableOfContentsAsynchronously;
- (void)_flushAllMessageData;
- (void)_cancelAutosave;
- (void)_setNeedsAutosave;
- (void)updateMetadata;
- (void)writeUpdatedMessageDataToDisk;
- (id)messagesForDocumentID:(id)arg1;
- (id)recentMessageWithValue:(id)arg1 forHeader:(id)arg2;
- (void)deleteLastMessageWithHeaders:(id)arg1 compactWhenDone:(BOOL)arg2;
- (id)lastMessageWithHeaders:(id)arg1 inMailbox:(id)arg2;
- (id)duplicateCopiesOfMessages:(id)arg1 withDocumentIDs:(id)arg2 excludingMessageIDs:(id)arg3;
- (id)duplicateCopiesOfMessages:(id)arg1;
- (void)doCompact;
- (BOOL)shouldCallCompactWhenClosing;
- (BOOL)canCompact;
- (long long)undoAppendOfLibraryIDs:(id)arg1;
- (long long)appendMessages:(id)arg1 missedMessages:(id)arg2 newMessages:(id)arg3 newDocumentIDsByOld:(id)arg4 flagsToSet:(id)arg5 appendReason:(long long)arg6 userInitiated:(BOOL)arg7 error:(id *)arg8;
- (long long)updateMessages:(id)arg1 withLibraryIDs:(id)arg2 newMessages:(id)arg3;
- (BOOL)allowsOverwrite;
- (BOOL)allowsAppend;
- (void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(BOOL)arg2;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)messageForMessageID:(id)arg1;
- (void)_cancelQueryAndClearConsumer:(BOOL)arg1;
- (void)cancelQuery;
- (void)dealloc;
- (void)_invalidate;
- (void)_messagesUpdated:(id)arg1;
- (void)_messagesCompacted:(id)arg1;
- (void)_messageFlagsChanged:(id)arg1;
- (void)messagesWereAdded:(id)arg1 secondaryMessages:(id)arg2 duringOpen:(BOOL)arg3;
- (void)_messagesAddedToLibrary:(id)arg1;
- (void)_setFlagsAndColorForMessages:(id)arg1;
- (void)setFlagsAndColorForMessages:(id)arg1;
- (id)async_setLocalFlagsForMessages:(id)arg1;
- (void)updateGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2 async:(BOOL)arg3;
- (id)setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 async:(BOOL)arg3;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)saveSnippetsForMessages:(id)arg1;
- (id)filterMessagesByMembership:(id)arg1;
- (id)mutableCopyOfAllMessages;
- (void)_asynchronousCopyOfAllMessagesWithOptions:(id)arg1;
- (void)asynchronousCopyOfAllMessagesWithOptions:(id)arg1;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfAllMessages;
- (unsigned long long)totalCount;
- (unsigned int)_openOptions;
- (id)openSynchronouslyUpdatingMetadata:(BOOL)arg1 returnRetainedMessages:(BOOL)arg2;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (BOOL)_shouldUpdateColorsAndAttachmentsAfterOpening;
- (void)openAsynchronouslyWithOptions:(unsigned int)arg1;
- (void)libraryFinishedSendingMessagesToLibraryStoreMessageConsumer:(id)arg1;
@property(readonly, copy) NSArray *notificationMessagesFromOpen;
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromLibraryStoreMessageConsumer:(id)arg3 fromUpdate:(id)arg4;
- (void)_updateCriterionFromMailbox:(id)arg1;
@property(readonly, nonatomic) long long mailboxID;
- (void)reset;
- (id)initWithAccount:(id)arg1;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 createEmptyStore:(BOOL)arg3;
- (id)initWithMailbox:(id)arg1;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2;
- (id)initWithCriterion:(id)arg1;
- (id)init;
- (BOOL)_criterionContainsGmailLabelCriterion:(id)arg1;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;
- (id)objectSpecifierForMessage:(id)arg1;

@end

