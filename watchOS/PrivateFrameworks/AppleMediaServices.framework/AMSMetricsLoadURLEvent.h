//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSArray, NSString;

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent
{
}

+ (double)_timingDataMetricToServerTimeInterval:(id)arg1;
+ (id)_resolvedIPAddressFromTask:(id)arg1;
+ (double)_randomDouble;
+ (id)_metricsDictionaryFromConfig:(id)arg1;
+ (id)_fetchNetworkQualityReports;
+ (id)_DNSServerIPAddresses;
+ (_Bool)shouldCollectMetricsForContext:(id)arg1;
@property(retain, nonatomic) NSString *xxdc;
@property(nonatomic) double xpSamplingPercentageCachedResponses;
@property(nonatomic) double xpSamplingPercentageUsers;
@property(nonatomic) _Bool xpSamplingForced;
@property(nonatomic) double xpSessionDuration;
@property(retain, nonatomic) NSString *wt;
@property(nonatomic) _Bool TLSSessionTickets;
@property(retain, nonatomic) NSString *TIDState;
@property(nonatomic) _Bool TFOEnabled;
@property(nonatomic) int statusCode;
@property(nonatomic) double secureConnectionStartTime;
@property(nonatomic) double responseStartTime;
@property(nonatomic) unsigned int responseMessageSize;
@property(nonatomic) double responseEndTime;
@property(retain, nonatomic) NSString *responseDate;
@property(retain, nonatomic) NSString *resolvedIPAddress;
@property(retain, nonatomic) NSString *requestURL;
@property(nonatomic) unsigned int requestMessageSize;
@property(nonatomic) double requestStartTime;
@property(nonatomic) double redirectStartTime;
@property(nonatomic) double redirectEndTime;
@property(nonatomic) unsigned int redirectCount;
@property(retain, nonatomic) NSString *radioType;
@property(retain, nonatomic) NSString *radioTechnology;
@property(retain, nonatomic) NSString *originalApp;
@property(retain, nonatomic) NSArray *networkQualityReports;
@property(nonatomic) double fetchStartTime;
@property(retain, nonatomic) NSString *environmentDataCenter;
@property(retain, nonatomic) NSString *edgeNodeCacheStatus;
@property(nonatomic) double domainLookupStartTime;
@property(nonatomic) double domainLookupEndTime;
@property(retain, nonatomic) NSString *DNSServers;
@property(retain, nonatomic) NSString *connectionType;
@property(nonatomic) double connectionStartTime;
@property(nonatomic) unsigned int connectionStopNStatTXBytes;
@property(nonatomic) unsigned int connectionStopNStatRXBytes;
@property(nonatomic) unsigned int connectionStartNStatTXBytes;
@property(nonatomic) unsigned int connectionStartNStatRXBytes;
@property(nonatomic) _Bool connectionReused;
@property(retain, nonatomic) NSString *connectionInterface;
@property(nonatomic) double connectionEndTime;
@property(retain, nonatomic) NSString *clientError;
@property(retain, nonatomic) NSString *clientCorrelationKey;
@property(nonatomic) _Bool cachedResponse;
@property(nonatomic) _Bool apsRelaySucceeded;
@property(nonatomic) _Bool apsRelayDidFallback;
@property(nonatomic) _Bool apsRelayAttempted;
@property(retain, nonatomic) NSString *appleTimingApp;
- (void)_prepareEventWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
