//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNDonationAnalyticsLogger.h"

@class NSObject<OS_os_log>, NSString;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>
{
    NSObject<OS_os_log> *_log_t;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
- (void).cxx_destruct;
- (void)noDonatedMeCard;
- (void)noMeCard;
- (void)withinReportingInterval:(id)arg1;
- (void)didReportAnalytics;
- (void)willReportAnalytics;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
