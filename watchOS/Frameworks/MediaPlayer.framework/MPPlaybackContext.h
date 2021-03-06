//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPAVItem, NSData, NSDictionary, NSString;

@interface MPPlaybackContext : NSObject <NSSecureCoding>
{
    MPAVItem *_playerCurrentItem;
    _Bool _shouldStartPlayback;
    _Bool _requireFinalTracklist;
    _Bool _shouldRestartPlayback;
    int _startIndex;
    int _shuffleType;
    int _repeatType;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    NSString *_siriAssetInfo;
    NSString *_siriReferenceIdentifier;
    NSDictionary *_siriWHAMetricsInfo;
}

+ (_Bool)supportsSecureCoding;
+ (Class)queueFeederClass;
@property(copy, nonatomic) NSDictionary *siriWHAMetricsInfo; // @synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo;
@property(copy, nonatomic) NSString *siriReferenceIdentifier; // @synthesize siriReferenceIdentifier=_siriReferenceIdentifier;
@property(copy, nonatomic) NSString *siriAssetInfo; // @synthesize siriAssetInfo=_siriAssetInfo;
@property(copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property(nonatomic) int repeatType; // @synthesize repeatType=_repeatType;
@property(nonatomic) int shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) _Bool shouldRestartPlayback; // @synthesize shouldRestartPlayback=_shouldRestartPlayback;
@property(nonatomic) _Bool requireFinalTracklist; // @synthesize requireFinalTracklist=_requireFinalTracklist;
@property(nonatomic) _Bool shouldStartPlayback; // @synthesize shouldStartPlayback=_shouldStartPlayback;
@property(nonatomic) int startIndex; // @synthesize startIndex=_startIndex;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) MPAVItem *playerCurrentItem;

@end

