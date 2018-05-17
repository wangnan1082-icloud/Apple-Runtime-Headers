//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICStoreDialogResponse, ICURLBag, NSArray, NSData, NSDate, NSDictionary, NSString;

@interface ICMediaRedownloadResponse : NSObject
{
    NSDate *_requestDate;
    ICURLBag *_urlBag;
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *subscriptionKeyBagData;
@property(readonly, copy, nonatomic) NSArray *items;
@property(readonly, copy, nonatomic) NSString *jingleAction;
@property(readonly, nonatomic) unsigned int downloadQueueItemCount;
@property(readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) _Bool shouldCancelPurchaseBatch;
@property(readonly, nonatomic) _Bool authorized;
- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3;

@end
