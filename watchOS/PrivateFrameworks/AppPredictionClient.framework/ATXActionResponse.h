//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXAction, NSArray, NSData, NSDate, NSError, NSIndexSet, NSUUID;

@interface ATXActionResponse : NSObject <NSSecureCoding>
{
    NSIndexSet *_shownActionIndices;
    NSIndexSet *_explicitlyDismissedActionIndices;
    NSArray *_shownActionsCache;
    unsigned char _consumerSubType;
    NSUUID *_uuid;
    NSArray *_scoredActions;
    NSDate *_predictionDate;
    ATXAction *_engagedAction;
    ATXAction *_matchingIntentDonatedAction;
    unsigned int _feedbackStage;
    NSDate *_uiFeedbackDate;
    NSDate *_donatedIntentDate;
    NSData *_cacheFileData;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSData *cacheFileData; // @synthesize cacheFileData=_cacheFileData;
@property(readonly, nonatomic) NSDate *donatedIntentDate; // @synthesize donatedIntentDate=_donatedIntentDate;
@property(readonly, nonatomic) NSDate *uiFeedbackDate; // @synthesize uiFeedbackDate=_uiFeedbackDate;
@property(readonly, nonatomic) unsigned int feedbackStage; // @synthesize feedbackStage=_feedbackStage;
@property(readonly, nonatomic) ATXAction *matchingIntentDonatedAction; // @synthesize matchingIntentDonatedAction=_matchingIntentDonatedAction;
@property(readonly, nonatomic) ATXAction *engagedAction; // @synthesize engagedAction=_engagedAction;
@property(readonly, nonatomic) unsigned char consumerSubType; // @synthesize consumerSubType=_consumerSubType;
@property(readonly, nonatomic) NSDate *predictionDate; // @synthesize predictionDate=_predictionDate;
@property(readonly, nonatomic) NSArray *scoredActions; // @synthesize scoredActions=_scoredActions;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDescription;
- (id)jsonData;
- (id)json;
- (unsigned int)hash;
- (_Bool)isEqualToActionResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)sessionId;
@property(readonly, nonatomic) NSArray *explicitlyDismissedActions;
@property(readonly, nonatomic) NSArray *shownActions;
- (_Bool)indexWasShown:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (void)updateWithMatchingIntentDonatedAction:(id)arg1 intentDonationDate:(id)arg2;
- (void)updateConsumerSubType:(unsigned char)arg1 engagedAction:(id)arg2 shownActions:(id)arg3 feedbackStage:(unsigned int)arg4 explicitlyDismissedActions:(id)arg5;
- (id)initWithScoredActions:(id)arg1 cacheFileData:(id)arg2 consumerSubType:(unsigned char)arg3 error:(id)arg4;

@end

