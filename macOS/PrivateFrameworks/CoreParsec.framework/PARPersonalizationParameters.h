//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, PARRankerCentroidParameters, PARRankerSearchRequestParameters, PARRankerUpdateModelParameters, PARURLToTopicsMaps;

@interface PARPersonalizationParameters : NSObject
{
    PARURLToTopicsMaps *_urlToTopicsMap;
    PARRankerCentroidParameters *_centroidParameters;
    PARRankerUpdateModelParameters *_modelUpdateParameters;
    PARRankerSearchRequestParameters *_searchRequestParameters;
    NSDictionary *_rankingAlgorithms;
}

+ (id)responseFromJSON:(id)arg1 includeURLTopics:(BOOL)arg2;
@property(retain, nonatomic) NSDictionary *rankingAlgorithms; // @synthesize rankingAlgorithms=_rankingAlgorithms;
@property(retain, nonatomic) PARRankerSearchRequestParameters *searchRequestParameters; // @synthesize searchRequestParameters=_searchRequestParameters;
@property(readonly, nonatomic) PARRankerUpdateModelParameters *modelUpdateParameters; // @synthesize modelUpdateParameters=_modelUpdateParameters;
@property(retain, nonatomic) PARRankerCentroidParameters *centroidParameters; // @synthesize centroidParameters=_centroidParameters;
@property(retain, nonatomic) PARURLToTopicsMaps *urlToTopicsMap; // @synthesize urlToTopicsMap=_urlToTopicsMap;
- (void).cxx_destruct;

@end
