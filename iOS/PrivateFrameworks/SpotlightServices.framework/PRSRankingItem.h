//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSDataCollectible.h"

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString, PRSL2FeatureVector, PRSL3FeatureVector, PRSRankingSpanCalculator;

@interface PRSRankingItem : NSObject <SSDataCollectible>
{
    _Bool _eligibleForDemotion;
    _Bool _needsDemotion;
    _Bool _isPrepared;
    float _rawScore;
    float _feedbackScore;
    float _score;
    float _quality_score;
    NSString *_identifier;
    NSString *_sectionBundleIdentifier;
    PRSL2FeatureVector *_L2FeatureVector;
    PRSL3FeatureVector *_L3FeatureVector;
    NSDictionary *_serverFeatures;
    double _mostRecentUsedDate;
    double _closestUpComingDate;
    NSMapTable *_attributes;
    PRSRankingSpanCalculator *_spanCalculator;
    NSMutableArray *_matchedSenders;
    NSMutableArray *_matchedVipSenders;
    NSMutableArray *_matchedRecipients;
    NSArray *_emailAddresses;
    unsigned long long _importantPropertiesPrefixMatched;
    unsigned long long _importantPropertiesWordMatched;
    unsigned long long _playCount;
    struct ranking_index_score_t _indexScore;
    // Error parsing type: T, name: _inputToModelScore
}

+ (unsigned long long)featureFromVirtualIdx:(unsigned long long)arg1;
+ (id)rankingDescriptorForBundleFeature:(unsigned long long)arg1;
+ (id)defaultBundleFeatureArrValues;
+ (id)defaultArrForBundleFeature:(unsigned long long)arg1;
+ (id)deviceClass;
+ (id)requiredContactAttributes;
+ (id)requiredMailAttributes;
+ (id)requiredOtherAttributes;
+ (id)requiredTextFeatureAttributes;
+ (id)requiredAttributes;
+ (void)initialize;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) unsigned long long importantPropertiesWordMatched; // @synthesize importantPropertiesWordMatched=_importantPropertiesWordMatched;
@property(nonatomic) unsigned long long importantPropertiesPrefixMatched; // @synthesize importantPropertiesPrefixMatched=_importantPropertiesPrefixMatched;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) NSMutableArray *matchedRecipients; // @synthesize matchedRecipients=_matchedRecipients;
@property(retain, nonatomic) NSMutableArray *matchedVipSenders; // @synthesize matchedVipSenders=_matchedVipSenders;
@property(retain, nonatomic) NSMutableArray *matchedSenders; // @synthesize matchedSenders=_matchedSenders;
// Error parsing type for property inputToModelScore:
// Property attributes: TT,N,V_inputToModelScore

@property(retain, nonatomic) PRSRankingSpanCalculator *spanCalculator; // @synthesize spanCalculator=_spanCalculator;
@property(nonatomic) struct ranking_index_score_t indexScore; // @synthesize indexScore=_indexScore;
@property(retain, nonatomic) NSMapTable *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) double closestUpComingDate; // @synthesize closestUpComingDate=_closestUpComingDate;
@property(nonatomic) double mostRecentUsedDate; // @synthesize mostRecentUsedDate=_mostRecentUsedDate;
@property(nonatomic) _Bool needsDemotion; // @synthesize needsDemotion=_needsDemotion;
@property(nonatomic) _Bool eligibleForDemotion; // @synthesize eligibleForDemotion=_eligibleForDemotion;
@property(retain, nonatomic) NSDictionary *serverFeatures; // @synthesize serverFeatures=_serverFeatures;
@property(retain, nonatomic) PRSL3FeatureVector *L3FeatureVector; // @synthesize L3FeatureVector=_L3FeatureVector;
@property(retain, nonatomic) PRSL2FeatureVector *L2FeatureVector; // @synthesize L2FeatureVector=_L2FeatureVector;
@property(retain, nonatomic) NSString *sectionBundleIdentifier; // @synthesize sectionBundleIdentifier=_sectionBundleIdentifier;
@property(nonatomic) float quality_score; // @synthesize quality_score=_quality_score;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) float feedbackScore; // @synthesize feedbackScore=_feedbackScore;
@property(nonatomic) float rawScore; // @synthesize rawScore=_rawScore;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (long long)passesRecencyTest;
- (id)dataCollectionBundle;
- (id)dataCollectionRepresentation;
@property(readonly, copy) NSString *description;
- (id)likelyDisplayTitle;
- (long long)compare:(id)arg1;
- (long long)compareWithDates:(id)arg1;
- (id)moreRecentDateFromDate1:(id)arg1 date2:(id)arg2;
- (id)interestingDate;
- (id)dedupeIdentifier;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(id)arg2 withEvaluator:(id)arg3 withContext:(struct prs_feature_population_ctx_t *)arg4 fuzzyEvaluator:(id)arg5 propertyCanFuzzyMatch:(_Bool)arg6;
- (void)populateFeaturesWithEvaluator:(id)arg1 updatingBundleFeatures:(float *)arg2 withContext:(struct prs_feature_population_ctx_t *)arg3 fuzzyEvaluator:(id)arg4;
- (void)populateOtherFeatures;
- (void)inferDateBinsFromDates:(id)arg1 intoBins:(int *)arg2;
- (void)populateMailFeatures;
- (void)populateBundleSpecificFeatures;
- (void)populateCrossAttributeDerivedFeaturesWithContext:(struct prs_feature_population_ctx_t *)arg1;
- (void)updateBundleFeatures:(float *)arg1 withArrValues:(id)arg2;
- (void)updateAccumulatedBundleFeatures:(float *)arg1 values:(id)arg2 feature:(unsigned long long)arg3;
- (void)updateScoreDescriptorBundleFeatures:(float *)arg1 values:(id)arg2 feature:(unsigned long long)arg3;
- (void)updateNumScoreDescriptorBundleFeatures:(float *)arg1 values:(id)arg2 feature:(unsigned long long)arg3;
- (void)populateContactFeatures;
- (_Bool)didMatchRankingDescriptor:(id)arg1;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
