//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, RTHintManager, RTLearnedLocationManager, RTLocationAwarenessManager, RTLocationManager, RTMetricManager, RTVisitMonitorState;

@interface RTVisitMonitor : NSObject
{
    BOOL _monitoringVisitIncidents;
    BOOL _monitoringLeechedVisitIncidents;
    BOOL _monitoringLowConfidenceVisitIncidents;
    id <RTVisitMonitorDelegate> _delegate;
    RTLocationManager *_locationManager;
    RTLearnedLocationManager *_learnedLocationManager;
    RTHintManager *_hintManager;
    RTMetricManager *_metricManager;
    RTLocationAwarenessManager *_locationAwarenessManager;
    RTVisitMonitorState *_state;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _engineDependentCount;
}

+ (double)evalMaxUncFromMotionDevMotionInducedDev:(double)arg1 andMeasInducedDev:(double)arg2;
+ (double)evaluateMotionInducedDeviationFromDataPtCnt:(long long)arg1 sumLat_deg:(double)arg2 sumLat2_deg:(double)arg3 sumLon_deg:(double)arg4 sumLon2_deg:(double)arg5;
+ (double)evaluateClustThresFromClustThresSlv:(double)arg1 motionInducedDev:(double)arg2 adaptionBasis:(double)arg3 adaptionSampleCnt:(long long)arg4 adaptionRate:(double)arg5;
+ (double)convertLongitudeInto180Format:(double)arg1;
+ (double)convertLongitudeAtDateLineFromSum:(double)arg1 fromLongitude:(double)arg2;
+ (double)LocationHeartbeatWhileAwake;
+ (double)MinStaticIntervalForSLVArrivalWithHint;
+ (double)MinStaticIntervalForSLVArrival;
@property(nonatomic) unsigned long long engineDependentCount; // @synthesize engineDependentCount=_engineDependentCount;
@property(nonatomic) BOOL monitoringLowConfidenceVisitIncidents; // @synthesize monitoringLowConfidenceVisitIncidents=_monitoringLowConfidenceVisitIncidents;
@property(nonatomic) BOOL monitoringLeechedVisitIncidents; // @synthesize monitoringLeechedVisitIncidents=_monitoringLeechedVisitIncidents;
@property(nonatomic) BOOL monitoringVisitIncidents; // @synthesize monitoringVisitIncidents=_monitoringVisitIncidents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTVisitMonitorState *state; // @synthesize state=_state;
@property(retain, nonatomic) RTLocationAwarenessManager *locationAwarenessManager; // @synthesize locationAwarenessManager=_locationAwarenessManager;
@property(retain, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property(retain, nonatomic) RTHintManager *hintManager; // @synthesize hintManager=_hintManager;
@property(retain, nonatomic) RTLearnedLocationManager *learnedLocationManager; // @synthesize learnedLocationManager=_learnedLocationManager;
@property(retain, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) __weak id <RTVisitMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleLowConfidenceVisitIncident:(id)arg1;
- (void)handleVisitMonitorStateChange;
- (void)handleLeechedVisitIncident:(id)arg1;
- (void)handleVisitIncident:(id)arg1;
- (void)fetchVisitMonitorState:(CDUnknownBlockType)arg1;
- (void)fetchLastLowConfidenceVisitIncidentWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLastVisitIncidentWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLowConfidenceVisitMonitorStatusWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchVisitMonitorStatusWithHandler:(CDUnknownBlockType)arg1;
- (double)horizontalUncertaintyFromSampleSize:(long long)arg1 sumLat_deg:(double)arg2 sumLat2_deg:(double)arg3 sumLon_deg:(double)arg4 sumLon2_deg:(double)arg5;
- (void)considerLowConfidenceVisitIncidentExitAtLocation:(id)arg1;
- (void)considerLowConfidenceVisitIncidentEntryAtLocation:(id)arg1;
- (void)processLeechedLocations:(id)arg1;
- (void)onLeechedLocationsNotification:(id)arg1;
- (void)stopEngine;
- (void)startEngine;
- (void)stopMonitoringLowConfidenceVisitIncidents;
- (void)startMonitoringLowConfidenceVisitIncidents;
- (void)stopMonitoringLeechedVisitIncidents;
- (void)startMonitoringLeechedVisitIncidents;
- (void)stopMonitoringVisitIncidents;
- (void)startMonitoringVisitIncidents;
- (void)fetchNumberOfSamplesForAdaptationWithHandler:(CDUnknownBlockType)arg1;
- (id)recursiveVisitsFromLocation:(id)arg1;
- (id)visitsFromLocation:(id)arg1;
- (void)fetchVisitIncidentsFromLocations:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchVisitIncidentsFromLocations:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)resetWithTempBufferAsHypothesis;
- (void)resetForCurrentSampleAsHypothesis:(id)arg1;
- (void)shutdown;
- (id)initWithQueue:(id)arg1 state:(id)arg2 locationManager:(id)arg3 learnedLocationManager:(id)arg4 hintManager:(id)arg5 metricManager:(id)arg6 locationAwarenessManager:(id)arg7;
- (id)init;
- (void)logHintSourceUsageWithLocation:(id)arg1;

@end
