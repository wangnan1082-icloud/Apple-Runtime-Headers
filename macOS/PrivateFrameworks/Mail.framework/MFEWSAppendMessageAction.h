//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSLocalMessageAction.h>

@class MFLibraryMessage, NSString;

@interface MFEWSAppendMessageAction : MFEWSLocalMessageAction
{
    MFLibraryMessage *_message;
    long long _flags;
    NSString *_createdItemID;
}

@property(copy, nonatomic) NSString *createdItemID; // @synthesize createdItemID=_createdItemID;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) MFLibraryMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)newSyncOperation;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4;
- (id)initWithMessageActionID:(long long)arg1 activityType:(id)arg2 mailbox:(id)arg3 userInitiated:(BOOL)arg4 messageToAppend:(id)arg5 flags:(long long)arg6;

@end
