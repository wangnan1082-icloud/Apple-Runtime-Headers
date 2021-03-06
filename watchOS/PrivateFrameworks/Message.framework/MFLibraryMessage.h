//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFMailMessage.h>

@class MFLock, NSMutableDictionary, NSMutableSet, NSString;

@interface MFLibraryMessage : MFMailMessage
{
    unsigned int _libraryID;
    NSString *_remoteID;
    unsigned long _uid;
    unsigned long long _uniqueRemoteId;
    unsigned int _size;
    unsigned int _mailboxID;
    unsigned int _originalMailboxID;
    NSString *_messageID;
    unsigned long long _conversationFlags;
    NSMutableDictionary *_metadata;
    NSMutableSet *_metadataChangedKeys;
    MFLock *_metadataLock;
}

+ (id)messageWithLibraryID:(unsigned int)arg1;
- (unsigned int)fileSize;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (id)attachmentStorageLocation;
- (id)_attachmentStorageLocation;
- (id)metadataValueOfClass:(Class)arg1 forKey:(id)arg2;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)_initializeMetadata;
- (id)copyMessageInfo;
- (_Bool)isLibraryMessage;
- (id)dataConsumerForMimePart:(id)arg1;
- (void)setMessageData:(id)arg1 isPartial:(_Bool)arg2;
- (void)setRemoteID:(const char *)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(unsigned int)arg4 originalMailboxID:(unsigned int)arg5;
- (unsigned long long)conversationFlags;
- (void)setConversationFlags:(unsigned long long)arg1;
- (id)preferredEmailAddressToReplyWith;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsNotFlagged;
- (void)markAsFlagged;
- (void)markAsNotViewed;
- (void)markAsViewed;
- (id)account;
- (id)dataPathForMimePart:(id)arg1;
- (id)path;
- (id)_privacySafeDescription;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)commit;
- (void)setSummary:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (int)compareByUidWithMessage:(id)arg1;
- (id)mailboxName;
- (void)setHasTemporaryUid:(_Bool)arg1;
- (_Bool)hasTemporaryUid;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (_Bool)isMessageContentsLocallyAvailable;
- (void)setIsPartial:(_Bool)arg1;
- (_Bool)isPartial;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (unsigned long long)uniqueRemoteId;
- (void)setUid:(unsigned long)arg1;
- (unsigned long)uid;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)remoteID;
- (void)setRemoteID:(id)arg1;
- (void)_updateUID;
- (id)mailbox;
- (id)messageStore;
- (void)setMessageSize:(unsigned int)arg1;
- (unsigned int)messageSize;
- (id)originalMailboxURL;
- (void)setOriginalMailboxID:(unsigned int)arg1;
- (unsigned int)originalMailboxID;
- (void)setMailboxID:(unsigned int)arg1;
- (unsigned int)mailboxID;
- (unsigned int)libraryID;
- (id)persistentID;
- (id)messageID;
- (id)library;
- (id)initWithLibraryID:(unsigned int)arg1;
- (void)dealloc;

@end

