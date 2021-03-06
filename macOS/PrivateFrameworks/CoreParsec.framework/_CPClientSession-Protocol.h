//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPFeedbackPayload, _CPImagesUsagePropensity, _CPNewsUsagePropensity, _CPSafariUsagePropensity, _CPSpotlightUsagePropensity, _CPUsageSinceLookback;

@protocol _CPClientSession <NSObject>
@property(readonly, nonatomic) unsigned long long whichPropensity;
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *feedbacks;
@property(copy, nonatomic) NSData *jsonFeedback;
@property(retain, nonatomic) _CPImagesUsagePropensity *imagesPropensity;
@property(retain, nonatomic) _CPNewsUsagePropensity *newsPropensity;
@property(retain, nonatomic) _CPSpotlightUsagePropensity *spotlightPropensity;
@property(retain, nonatomic) _CPSafariUsagePropensity *safariPropensity;
@property(retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
@property(copy, nonatomic) NSString *locale;
@property(copy, nonatomic) NSString *countryCode;
@property(nonatomic) BOOL duEnabled;
@property(copy, nonatomic) NSString *parsecDeveloperID;
@property(nonatomic) BOOL removeTimestamps;
@property(nonatomic) double firstUseDate;
@property(nonatomic) BOOL firstUseOfTheDay;
@property(nonatomic) int previousSessionEndReason;
@property(nonatomic) double sessionStart;
@property(copy, nonatomic) NSDictionary *resourceVersions;
@property(copy, nonatomic) NSString *userGuidString;
@property(copy, nonatomic) NSString *agent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPFeedbackPayload *)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (void)addFeedback:(_CPFeedbackPayload *)arg1;
- (void)clearFeedback;
- (void)setResourceVersions:(NSString *)arg1 forKey:(NSString *)arg2;
- (BOOL)getResourceVersions:(id *)arg1 forKey:(NSString *)arg2;
@end

