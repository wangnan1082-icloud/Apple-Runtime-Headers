//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVPlayerConnection, AVPlayerItem, AVPropertyStorage, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface AVPlayerItemInternal : NSObject
{
    NSURL *URL;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReference;
    AVPropertyStorage *propertyStorage;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *figPlaybackItemAccessorQueue;
    NSObject<OS_dispatch_queue> *seekQueue;
    struct OpaqueFigSimpleMutex *seekIDMutex;
    struct OpaqueVTPixelBufferAttributesMediator *pixelBufferAttributeMediator;
    struct OpaqueCMTimebase *proxyTimebase;
    NSArray *automaticallyLoadedAssetKeys;
    _Bool wasInitializedWithURL;
    AVAsset *asset;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSArray *cachedTracks;
    NSMutableArray *syncLayers;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSMutableDictionary *itemLegibleOutputsForKeys;
    NSMutableDictionary *itemMetadataOutputsForKeys;
    _Bool suppressesVideoLayers;
    struct OpaqueCMTimebase *figTimebase;
    _Bool didBecomeReadyForInspectionOfTracks;
    _Bool didBecomeReadyForInspectionOfPresentationSize;
    _Bool didBecomeReadyForInspectionOfDuration;
    _Bool didBecomeReadyForInspectionOfMediaSelectionOptions;
    AVAsset *assetWithFigPlaybackItem;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    _Bool needTimedMetadataNotification;
    _Bool didBecomeReadyForBasicInspection;
    id <AVPlayerItemDelegate> delegate;
    AVAudioMix *audioMix;
    int status;
    NSError *error;
    _Bool needToSeekAfterCreatingFigPlaybackItem;
    CDStruct_1b6d18a9 initialTime;
    unsigned int initialSetTimeFlags;
    CDStruct_1b6d18a9 initialMinSnapTime;
    CDStruct_1b6d18a9 initialMaxSnapTime;
    unsigned int nextSeekIDToGenerate;
    int pendingSeekID;
    CDUnknownBlockType seekCompletionHandler;
    AVPlayerItem *previousItem;
    AVPlayerItem *nextItem;
    AVPlayerConnection *playerConnection;
    _Bool initialLimitReadAhead;
    int initialPlaybackLikelyToKeepUpTrigger;
    _Bool initialWillNeverSeekBackwardsHint;
    _Bool initialAlwaysMonitorsPlayability;
    _Bool nonForcedSubtitlesEnabled;
    _Bool externalProtectionRequested;
    _Bool savesDownloadedDataToDiskWhenDone;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    CDStruct_1b6d18a9 forwardPlaybackEndTime;
    CDStruct_1b6d18a9 reversePlaybackEndTime;
    NSArray *imageQueueInterpolationCurve;
    _Bool imageQueueInterpolationCurveWasSet;
    _Bool blendsVideoFrames;
    _Bool blendsVideoFramesWasSet;
    _Bool reversesMoreVideoFramesInMemory;
    _Bool reversesMoreVideoFramesInMemoryWasSet;
    _Bool aggressivelyCachesVideoFrames;
    _Bool aggressivelyCachesVideoFramesWasSet;
    _Bool decodesAllFramesDuringOrdinaryPlayback;
    _Bool decodesAllFramesDuringOrdinaryPlaybackWasSet;
    _Bool initialContinuesPlayingDuringPrerollForSeek;
    _Bool initialContinuesPlayingDuringPrerollForRateChange;
    _Bool usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    _Bool usesIFrameOnlyPlaybackForHighRateScaledEdits;
    CDStruct_1b6d18a9 minimumIntervalForIFrameOnlyPlayback;
    _Bool minimumIntervalForIFrameOnlyPlaybackWasSet;
    float speedThresholdForIFrameOnlyPlayback;
    _Bool speedThresholdForIFrameOnlyPlaybackWasSet;
    AVVideoComposition *videoComposition;
    AVWeakReference *clientsOriginalVideoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    void *figVideoCompositor;
    _Bool seekingWaitsForVideoCompositionRendering;
    NSDictionary *gaplessInfo;
    int eqPreset;
    NSDictionary *rampInOutInfo;
    NSDictionary *audibleDRMInfo;
    float soundCheckVolumeNormalization;
    float volumeAdjustment;
    int initialVariantIndex;
    struct __CFString *initialFigTimePitchAlgorithm;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    NSArray *textStyleRules;
    NSString *mediaKind;
    unsigned int restrictions;
    NSString *serviceIdentifier;
    _Bool networkUsuallyExceedsMaxBitRate;
    _Bool allowProgressiveSwitchUp;
    _Bool allowProgressiveStartup;
    _Bool allowProgressiveResume;
    struct CGSize IFramePrefetchTargetDimensions;
    struct CGSize preferredMaximumResolution;
    double preferredPeakBitRate;
    CDStruct_1b6d18a9 maximumTrailingBufferDuration;
    CDStruct_1b6d18a9 maximumForwardBufferDuration;
    _Bool requiresAccessLog;
    _Bool suppressesAudioOnlyVariants;
    NSString *videoApertureMode;
    unsigned int RTCReportingFlags;
    NSArray *timedMetadata;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    _Bool haveInitialSamples;
    _Bool haveCPEProtector;
    _Bool didInformObserversAboutAvailabilityOfTracks;
    _Bool didFireKVOForAssetForNonStreamingItem;
    _Bool usesMinimalLatencyForVideoCompositionRendering;
    AVAudioMix *mostRecentlyAppliedAudioMix;
    id <NSObject><NSCopying> AVKitData;
    _Bool canUseExtraNetworking;
    NSArray *itemCollectors;
    NSMutableArray *itemMetadataCollectors;
    AVWeakReference *playerReference;
    _Bool didSetAssetToAssetWithFigPlaybackItem;
    struct OpaqueFigCPEProtector *figCPEProtector;
}

@end
