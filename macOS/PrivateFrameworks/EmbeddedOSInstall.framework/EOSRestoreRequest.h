//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class EOSDiagnosticSummary, EOSEFISystemPartition, EOSPreflightContainer, EOSRestoreBundle, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSURL;

@interface EOSRestoreRequest : NSObject <NSSecureCoding>
{
    BOOL _personalize;
    BOOL _restore;
    BOOL _usePreflightContainerIfExists;
    BOOL _bootOnly;
    BOOL _persistToESP;
    BOOL _noForceDFU;
    BOOL _useDeckFDRServers;
    BOOL _commandLineRestore;
    BOOL _usePRDocument;
    BOOL _noSerialCapture;
    BOOL _attemptBootFromESPOnFailure;
    BOOL _showAppleConnectUI;
    BOOL _enableAppleConnectRetry;
    BOOL _personalizeWithUserAuth;
    BOOL _restoreAfterBootFailure;
    unsigned int _locationID;
    NSString *_preflightContainerTag;
    double _networkReachabilityTimeout;
    NSString *_bootTag;
    NSString *_bootTagLocal;
    NSString *_targetVolume;
    NSArray *_validDeviceTypes;
    double _timeRemainingPadding;
    EOSRestoreBundle *_restoreBundle;
    NSURL *_outputURL;
    NSURL *_fdrMemoryStoreURL;
    NSString *_variant;
    NSSet *_bootArgs;
    NSData *_appleConnectData;
    NSURL *_ramdiskOverride;
    NSURL *_kernelCacheOverride;
    NSURL *_deviceTreeOverride;
    NSURL *_iBSSOverride;
    NSURL *_iBECOverride;
    NSURL *_llbOverride;
    NSURL *_iBootOverride;
    NSURL *_sepOverride;
    NSDictionary *_restoreOptions;
    EOSPreflightContainer *_preflightContainer;
    NSData *_preflightApNonce;
    NSURL *_membootImageURL;
    unsigned long long _membootImageChecksum;
    EOSEFISystemPartition *_esp;
    NSString *_clientDescription;
    NSString *_clientName;
    unsigned long long _retries;
    NSDate *_startDate;
    EOSDiagnosticSummary *_diagnosticSummary;
}

+ (BOOL)supportsSecureCoding;
+ (void)_printUsageForExecutableNamed:(id)arg1;
+ (id)requestWithArgs:(const char **)arg1 length:(int)arg2;
@property BOOL restoreAfterBootFailure; // @synthesize restoreAfterBootFailure=_restoreAfterBootFailure;
@property(retain) EOSDiagnosticSummary *diagnosticSummary; // @synthesize diagnosticSummary=_diagnosticSummary;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property unsigned long long retries; // @synthesize retries=_retries;
@property(retain) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain) NSString *clientDescription; // @synthesize clientDescription=_clientDescription;
@property(retain) EOSEFISystemPartition *esp; // @synthesize esp=_esp;
@property unsigned long long membootImageChecksum; // @synthesize membootImageChecksum=_membootImageChecksum;
@property(retain) NSURL *membootImageURL; // @synthesize membootImageURL=_membootImageURL;
@property(retain) NSData *preflightApNonce; // @synthesize preflightApNonce=_preflightApNonce;
@property(retain) EOSPreflightContainer *preflightContainer; // @synthesize preflightContainer=_preflightContainer;
@property(retain) NSDictionary *restoreOptions; // @synthesize restoreOptions=_restoreOptions;
@property(retain) NSURL *sepOverride; // @synthesize sepOverride=_sepOverride;
@property(retain) NSURL *iBootOverride; // @synthesize iBootOverride=_iBootOverride;
@property(retain) NSURL *llbOverride; // @synthesize llbOverride=_llbOverride;
@property(retain) NSURL *iBECOverride; // @synthesize iBECOverride=_iBECOverride;
@property(retain) NSURL *iBSSOverride; // @synthesize iBSSOverride=_iBSSOverride;
@property(retain) NSURL *deviceTreeOverride; // @synthesize deviceTreeOverride=_deviceTreeOverride;
@property(retain) NSURL *kernelCacheOverride; // @synthesize kernelCacheOverride=_kernelCacheOverride;
@property(retain) NSURL *ramdiskOverride; // @synthesize ramdiskOverride=_ramdiskOverride;
@property(retain) NSData *appleConnectData; // @synthesize appleConnectData=_appleConnectData;
@property BOOL personalizeWithUserAuth; // @synthesize personalizeWithUserAuth=_personalizeWithUserAuth;
@property(retain) NSSet *bootArgs; // @synthesize bootArgs=_bootArgs;
@property(retain) NSString *variant; // @synthesize variant=_variant;
@property(retain) NSURL *fdrMemoryStoreURL; // @synthesize fdrMemoryStoreURL=_fdrMemoryStoreURL;
@property(retain) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain) EOSRestoreBundle *restoreBundle; // @synthesize restoreBundle=_restoreBundle;
@property double timeRemainingPadding; // @synthesize timeRemainingPadding=_timeRemainingPadding;
@property BOOL enableAppleConnectRetry; // @synthesize enableAppleConnectRetry=_enableAppleConnectRetry;
@property BOOL showAppleConnectUI; // @synthesize showAppleConnectUI=_showAppleConnectUI;
@property unsigned int locationID; // @synthesize locationID=_locationID;
@property(retain) NSArray *validDeviceTypes; // @synthesize validDeviceTypes=_validDeviceTypes;
@property(retain) NSString *targetVolume; // @synthesize targetVolume=_targetVolume;
@property(retain) NSString *bootTagLocal; // @synthesize bootTagLocal=_bootTagLocal;
@property(retain) NSString *bootTag; // @synthesize bootTag=_bootTag;
@property double networkReachabilityTimeout; // @synthesize networkReachabilityTimeout=_networkReachabilityTimeout;
@property BOOL attemptBootFromESPOnFailure; // @synthesize attemptBootFromESPOnFailure=_attemptBootFromESPOnFailure;
@property BOOL noSerialCapture; // @synthesize noSerialCapture=_noSerialCapture;
@property BOOL usePRDocument; // @synthesize usePRDocument=_usePRDocument;
@property BOOL commandLineRestore; // @synthesize commandLineRestore=_commandLineRestore;
@property BOOL useDeckFDRServers; // @synthesize useDeckFDRServers=_useDeckFDRServers;
@property BOOL noForceDFU; // @synthesize noForceDFU=_noForceDFU;
@property BOOL persistToESP; // @synthesize persistToESP=_persistToESP;
@property BOOL bootOnly; // @synthesize bootOnly=_bootOnly;
@property(retain) NSString *preflightContainerTag; // @synthesize preflightContainerTag=_preflightContainerTag;
@property BOOL usePreflightContainerIfExists; // @synthesize usePreflightContainerIfExists=_usePreflightContainerIfExists;
@property BOOL restore; // @synthesize restore=_restore;
@property BOOL personalize; // @synthesize personalize=_personalize;
- (void).cxx_destruct;
- (id)_setFromBootArgsString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_parsePRDocument:(id)arg1;
- (BOOL)_parseArguments:(const char **)arg1 length:(int)arg2;
@property(readonly) NSURL *restoreBundleURL;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;

@end
