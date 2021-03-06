//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTDiagnosticProvider-Protocol.h>

@class NSString, RTLocationTagger, RTMicroLocationCache;
@protocol OS_dispatch_queue;

@interface RTDuetHelper : NSObject <RTDiagnosticProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    long long _streamType;
    RTLocationTagger *_locationTagger;
    double _minimumConfidenceThreshold;
    RTMicroLocationCache *_microLocationCache;
}

+ (id)diagnosticFiles;
@property(retain, nonatomic) RTMicroLocationCache *microLocationCache; // @synthesize microLocationCache=_microLocationCache;
@property(nonatomic) double minimumConfidenceThreshold; // @synthesize minimumConfidenceThreshold=_minimumConfidenceThreshold;
@property(retain, nonatomic) RTLocationTagger *locationTagger; // @synthesize locationTagger=_locationTagger;
@property(readonly, nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_processCoreDuetChangeNotificationWithIdentifier:(id)arg1;
- (void)_unregisterWithCoreDuetForRealtimeNotificationsWithNotificationClass:(Class)arg1;
- (void)stopMonitoringForEventsWithNotificationClass:(Class)arg1;
- (void)_registerWithCoreDuetForRealtimeNotificationsWithNotificationClass:(Class)arg1 handler:(CDUnknownBlockType)arg2;
- (void)startMonitoringForEventsWithNotificationClass:(Class)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchAllEventsForStreamType:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_purge;
- (void)purge;
- (void)_shutdown;
- (void)shutdown;
- (id)initWithQueue:(id)arg1 duetEventStream:(long long)arg2 locationTagger:(id)arg3 defaultsManager:(id)arg4;
- (id)init;
- (void)_fetchAppLaunchEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchStarkEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchNowPlayingEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchAudioEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchDeviceFirstWakeupEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchMicroLocationEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchBluetoothEventsWithStartDate:(id)arg1 endDate:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

