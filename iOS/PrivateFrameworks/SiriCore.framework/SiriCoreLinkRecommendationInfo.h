//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreLinkRecommendationInfo : NSObject
{
    _Bool _btPreference;
    _Bool _wifiPreference;
    double _timeTaken;
}

- (void)resetLinkMetrics;
- (id)linkMetrics;
- (void)setLinkMetrics:(id)arg1;
- (void)setTimeTaken:(double)arg1;
- (double)timeTaken;
- (void)setWiFiPreference:(_Bool)arg1;
- (_Bool)wifiPreference;
- (void)setBTPreference:(_Bool)arg1;
- (_Bool)btPreference;
- (id)initWithPreferences:(_Bool)arg1 wifiPreference:(_Bool)arg2 timeTaken:(double)arg3 metrics:(id)arg4;

@end

