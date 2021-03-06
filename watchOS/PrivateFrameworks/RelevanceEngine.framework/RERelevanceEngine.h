//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RELoggable-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, REDataSourceCatalog, REDataSourceManager, REEngineLocationManager, REFeatureMapGenerator, REFeatureSet, REFeatureTransmuter, RELiveElementCoordinator, REMLModelManager, RERelevanceEngineConfiguration, RERelevanceEngineLogger, RERelevanceEnginePreferences, RERelevanceEnginePreferencesController, RETrainingManager, _REEngineDefaults;
@protocol OS_dispatch_queue;

@interface RERelevanceEngine : NSObject <RELoggable>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_subsystems;
    REFeatureSet *_rootFeatures;
    REFeatureSet *_mlFeatures;
    NSString *_name;
    RELiveElementCoordinator *_coordinator;
    REDataSourceManager *_dataSourceManager;
    REMLModelManager *_modelManager;
    REFeatureMapGenerator *_inputFeatureMapGenerator;
    REFeatureMapGenerator *_outputFeatureMapGenerator;
    REFeatureTransmuter *_featureTransmuter;
    RETrainingManager *_trainingManager;
    REDataSourceCatalog *_dataSourceCatalog;
    RERelevanceEnginePreferencesController *_preferenceController;
    REEngineLocationManager *_locationManager;
    RERelevanceEngineLogger *_logger;
    _REEngineDefaults *_defaults;
    NSMutableDictionary *_addedElementsByIdentifier;
    NSArray *_configurationSectionDescriptors;
    NSArray *_sectionDescriptors;
    NSArray *_historicSectionDescriptors;
    NSDictionary *_inflectionFeatureValues;
    _Bool _running;
    _Bool _automaticallyResumeEngine;
    RERelevanceEngineConfiguration *_configuration;
}

@property(nonatomic) _Bool automaticallyResumeEngine; // @synthesize automaticallyResumeEngine=_automaticallyResumeEngine;
@property(readonly, nonatomic) RERelevanceEngineConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)removePreferencesForObject:(id)arg1;
- (void)setPreferences:(id)arg1 forObject:(id)arg2;
@property(readonly, nonatomic) RERelevanceEnginePreferences *effectivePreferences;
- (void)_queue_pauseSubsystem:(id)arg1;
- (void)_queue_resumeSubsystem:(id)arg1;
- (void)pause;
- (void)resume;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (void)removeElement:(id)arg1;
- (void)addElement:(id)arg1 section:(id)arg2;
- (id)pathForElement:(id)arg1;
- (unsigned int)numberOfElementsInSection:(id)arg1;
- (id)elementAtPath:(id)arg1;
- (void)trainWithPendingEvents;
- (void)removeTrainingContext:(id)arg1;
- (void)addTrainingContext:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) REDataSourceCatalog *dataSourceCatalog;
@property(readonly, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)_validateSectionDescriptors:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 configuration:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)enumerateSectionDescriptorsWithOptions:(unsigned int)arg1 includeHistoric:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)sectionForHistoricSection:(id)arg1;
- (id)historicSectionForSection:(id)arg1;
- (_Bool)isSectionWithNameHistoric:(id)arg1;
@property(readonly, nonatomic) REFeatureSet *mlFeatures;
@property(readonly, nonatomic) REFeatureSet *rootFeatures;
- (id)dictionaryFromElement:(id)arg1;
- (id)elementFromDictionary:(id)arg1;
@property(readonly, nonatomic) _REEngineDefaults *defaults;
@property(readonly, nonatomic) _Bool wantsImmutableContent;
- (id)newOutputFeatureMap;
- (id)newInputFeatureMap;
@property(readonly, nonatomic) REFeatureTransmuter *featureTransmuter;
@property(readonly, nonatomic) NSDictionary *inflectionFeatureValues;
@property(readonly, nonatomic) NSArray *historicSectionDescriptors;
@property(readonly, nonatomic) NSArray *sectionDescriptors;
@property(readonly, nonatomic) RERelevanceEngineLogger *logger;
@property(readonly, nonatomic) REEngineLocationManager *locationManager;
@property(readonly, nonatomic) RETrainingManager *trainingManager;
@property(readonly, nonatomic) REMLModelManager *modelManager;
@property(readonly, nonatomic) REDataSourceManager *dataSourceManager;
@property(readonly, nonatomic) RELiveElementCoordinator *coordinator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *subsystemQueue;
- (void)_removeSubsystem:(id)arg1;
- (void)_addSubsystem:(id)arg1;
- (id)_newLogFilePath;
- (void)_captureAndStoreDiagnosticLogs:(CDUnknownBlockType)arg1;
- (void)storeDiagnosticLogsToFile:(CDUnknownBlockType)arg1;
- (void)storeDiagnosticLogs:(CDUnknownBlockType)arg1;
- (id)predictionForElementAtPath:(id)arg1;
- (void)resumeFromSimulation;
- (void)pauseForSimulation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

