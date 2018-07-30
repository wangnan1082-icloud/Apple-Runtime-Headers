//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXInboxModel.h"
#import "PXInboxPreviewItem.h"

@class NSArray, NSDate, NSString;

@interface PXSampleInboxModel : NSObject <PXInboxPreviewItem, PXInboxModel>
{
    _Bool _userIsSender;
    _Bool _seen;
    NSDate *_creationDate;
    long long _type;
    NSString *_inboxModelTitle;
    unsigned long long _assetsCount;
    NSArray *_senderNames;
    NSArray *_assetsForOneUp;
}

+ (id)oldDate;
@property(nonatomic, getter=isSeen) _Bool seen; // @synthesize seen=_seen;
@property(nonatomic) _Bool userIsSender; // @synthesize userIsSender=_userIsSender;
@property(copy, nonatomic) NSArray *senderNames; // @synthesize senderNames=_senderNames;
@property(nonatomic) unsigned long long assetsCount; // @synthesize assetsCount=_assetsCount;
@property(copy, nonatomic) NSString *inboxModelTitle; // @synthesize inboxModelTitle=_inboxModelTitle;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *assetsForOneUp; // @synthesize assetsForOneUp=_assetsForOneUp;
@property(readonly, nonatomic) NSArray *leftPreviewItems;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *keyCommentGUID;
@property(readonly, nonatomic) NSString *ownerEmail;
@property(readonly, nonatomic) NSString *ownerFirstName;
@property(readonly, nonatomic) NSString *ownerLastName;
@property(readonly) Class superclass;

@end
