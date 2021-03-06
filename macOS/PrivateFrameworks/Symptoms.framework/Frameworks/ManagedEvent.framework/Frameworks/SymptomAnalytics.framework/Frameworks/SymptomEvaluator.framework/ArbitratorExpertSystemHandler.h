//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SymptomEvaluator/ExpertSystemHandlerCore.h>

@class AnalyticsWorkspace, ArbitratorExpertSystemState, DiagnosticCaseUsageAnalytics, NSArray, SystemSettingsRelay;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore
{
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    DiagnosticCaseUsageAnalytics *caseUsageSpace;
    BOOL _initializationComplete;
    unsigned long long _externalStepper;
}

+ (void)resetAllForCustomerBuilds;
+ (id)internalStateDictionary;
+ (long long)dampenedIPSLimit;
+ (BOOL)disableResourceNotifyDampening;
+ (id)configureClass:(id)arg1;
+ (id)sharedInstance;
+ (void)setInitializeAsHelper:(BOOL)arg1;
@property unsigned long long externalStepper; // @synthesize externalStepper=_externalStepper;
- (void).cxx_destruct;
- (void)resetAll;
- (void)resetDiagnosticCaseUsage;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)arg1;
- (long long)_removeDiagnosticCaseUsageMatchingDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (void)_purgeDiagnosticCaseUsage;
- (id)_createDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 onOrAfter:(id)arg5 create:(BOOL)arg6;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (void)_updateDiagnosticCaseUsageForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 lastSeen:(id)arg5 shouldIncrement:(BOOL)arg6;
- (void)getDiagnosticCaseUsageStatistics:(CDUnknownBlockType)arg1;
- (id)internalStateDictionary;
- (void)recordReportForSignature:(id)arg1 trigger:(unsigned long long)arg2;
- (BOOL)shouldGenerateReportForSignature:(id)arg1 trigger:(unsigned long long)arg2;
- (void)handleResourceNotifyOfType:(unsigned long long)arg1 event:(id)arg2;
- (_Bool)noteSymptom:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_dumpState;
- (void)dealloc;
- (BOOL)_arbitratorReady;
- (void)_administrativeDisable;
- (void)_administrativeEnable;
- (void)_bringStateToCompleted;
- (void)_bringStateToAlerted;
- (void)_bringStateToIdle;
- (void)_completeInitialization:(BOOL)arg1;
- (void)_scheduleMaintenanceActivity;
- (BOOL)_initializeWorkspace;
- (id)init;

@end

