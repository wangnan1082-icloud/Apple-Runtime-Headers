//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTXPCListener.h>

#import <coreroutine/NSXPCListenerDelegate-Protocol.h>
#import <coreroutine/RTClientListenerProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCInterface, RTAccountManager, RTActionManager, RTAssetManager, RTAuthorizationManager, RTDeviceLocationPredictor, RTDiagnostics, RTEventAgentManager, RTEventModelProvider, RTFingerprintManager, RTLearnedLocationManager, RTLocationManager, RTLocationStore, RTMapServiceManager, RTMetricManager, RTPredictedApplicationManager, RTPurgeManager, RTRouteManager, RTScenarioTriggerManager, RTVehicleLocationProvider, RTVisitManager, RTWiFiManager;

@interface RTClientListener : RTXPCListener <RTClientListenerProtocol, NSXPCListenerDelegate>
{
    NSXPCInterface *_frameworkInterface;
    NSXPCInterface *_daemonInterface;
    NSMutableDictionary *_persistedClients;
    RTPredictedApplicationManager *_predictedApplicationManager;
    RTScenarioTriggerManager *_scenarioTriggerManager;
    RTVehicleLocationProvider *_vehicleLocationProvider;
    RTAuthorizationManager *_authorizationManager;
    RTDeviceLocationPredictor *_deviceLocationPredictor;
    RTPurgeManager *_purgeManager;
    RTActionManager *_actionManager;
    RTEventModelProvider *_eventModelProvider;
    RTVisitManager *_visitManager;
    RTAssetManager *_assetManager;
    RTLocationStore *_locationStore;
    RTLocationManager *_locationManager;
    RTEventAgentManager *_eventAgentManager;
    RTDiagnostics *_diagnostics;
    RTLearnedLocationManager *_learnedLocationManager;
    RTRouteManager *_routeManager;
    RTAccountManager *_accountManager;
    RTMetricManager *_metricManager;
    RTFingerprintManager *_fingerprintManager;
    RTWiFiManager *_wifiManager;
    RTMapServiceManager *_mapServiceManager;
}

+ (id)persistedClientsPath;
@property(retain, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property(retain, nonatomic) RTWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain, nonatomic) RTFingerprintManager *fingerprintManager; // @synthesize fingerprintManager=_fingerprintManager;
@property(retain, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property(retain, nonatomic) RTAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) RTRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(retain, nonatomic) RTLearnedLocationManager *learnedLocationManager; // @synthesize learnedLocationManager=_learnedLocationManager;
@property(retain, nonatomic) RTDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) RTEventAgentManager *eventAgentManager; // @synthesize eventAgentManager=_eventAgentManager;
@property(retain, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) RTLocationStore *locationStore; // @synthesize locationStore=_locationStore;
@property(retain, nonatomic) RTAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) RTVisitManager *visitManager; // @synthesize visitManager=_visitManager;
@property(retain, nonatomic) RTEventModelProvider *eventModelProvider; // @synthesize eventModelProvider=_eventModelProvider;
@property(retain, nonatomic) RTActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) RTPurgeManager *purgeManager; // @synthesize purgeManager=_purgeManager;
@property(retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor; // @synthesize deviceLocationPredictor=_deviceLocationPredictor;
@property(retain, nonatomic) RTAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property(retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider; // @synthesize vehicleLocationProvider=_vehicleLocationProvider;
@property(retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager; // @synthesize scenarioTriggerManager=_scenarioTriggerManager;
@property(retain, nonatomic) RTPredictedApplicationManager *predictedApplicationManager; // @synthesize predictedApplicationManager=_predictedApplicationManager;
@property(retain, nonatomic) NSMutableDictionary *persistedClients; // @synthesize persistedClients=_persistedClients;
- (void).cxx_destruct;
- (void)handleDisconnectionForDaemonClient:(id)arg1;
- (void)saveDaemonClient:(id)arg1;
- (id)handleRestorationForDaemonClient:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_setupConnection:(id)arg1 forClient:(id)arg2;
- (id)handleClientConnection:(id)arg1;
- (void)_setup;
- (id)initWithAccountManager:(id)arg1 actionManager:(id)arg2 assetManager:(id)arg3 authorizationManager:(id)arg4 deviceLocationPredictor:(id)arg5 diagnostics:(id)arg6 eventAgentManager:(id)arg7 eventModelProvider:(id)arg8 fingerprintManager:(id)arg9 learnedLocationManager:(id)arg10 locationManager:(id)arg11 locationStore:(id)arg12 mapServiceManager:(id)arg13 metricManager:(id)arg14 predictedApplicationManager:(id)arg15 purgeManager:(id)arg16 routeManager:(id)arg17 scenarioTriggerManager:(id)arg18 vehicleLocationProvider:(id)arg19 visitManager:(id)arg20 wifiManager:(id)arg21;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

