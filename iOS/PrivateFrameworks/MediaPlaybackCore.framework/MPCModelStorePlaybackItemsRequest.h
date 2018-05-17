//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPModelRequest.h"

#import "MPCModelPlaybackRequestEnvironmentConsuming.h"
#import "MPCModelPlaybackRequesting.h"
#import "MPCModelRequestRTCReporting.h"
#import "MPCModelStorePreviousRequestStoring.h"
#import "MPModelRequestDetailedKeepLocalStatusRequesting.h"

@class MPCPlaybackRequestEnvironment, MPModelResponse, MPSectionedCollection, NSArray, NSString;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequesting, MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring>
{
    _Bool _shouldBatchResultsWithPlaceholderObjects;
    _Bool _wantsDetailedKeepLocalRequestableResponse;
    _Bool _allowLocalEquivalencies;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPModelResponse *_previousResponse;
    NSString *_clientIdentifier;
    MPSectionedCollection *_sectionedModelObjects;
    NSArray *_storeIDs;
    NSArray *_playbackPrioritizedIndexPaths;
}

+ (_Bool)supportsSecureCoding;
+ (void)MPC_consumeSiriAssetInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSArray *playbackPrioritizedIndexPaths; // @synthesize playbackPrioritizedIndexPaths=_playbackPrioritizedIndexPaths;
@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy, nonatomic) MPSectionedCollection *sectionedModelObjects; // @synthesize sectionedModelObjects=_sectionedModelObjects;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) _Bool allowLocalEquivalencies; // @synthesize allowLocalEquivalencies=_allowLocalEquivalencies;
@property(nonatomic) _Bool wantsDetailedKeepLocalRequestableResponse; // @synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse;
@property(nonatomic) _Bool shouldBatchResultsWithPlaceholderObjects; // @synthesize shouldBatchResultsWithPlaceholderObjects=_shouldBatchResultsWithPlaceholderObjects;
@property(retain, nonatomic) MPModelResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property(copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (void)setAllowsPlaybackResponseBatching:(_Bool)arg1;
@property(readonly, nonatomic) MPSectionedCollection *playbackSourceModelObjects;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
