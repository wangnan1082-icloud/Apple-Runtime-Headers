//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WeatherFoundation/WFWeatherConditions.h>

@class NSString;

@interface WFWeatherConditions (NWKLocalizedAndFormatted)
+ (id)nwkStaleLocalizedFormattedHighLowTemperature;
+ (id)nwkLocalizedFormattedAggregateChanceOfPrecipitation:(double)arg1;
+ (void)updateLocale;
+ (void)initialize;
@property(readonly, nonatomic) double nwkPrecipitationChance;
@property(readonly, nonatomic) NSString *nwkLocalizedPrecipitationChance;
- (id)_nwkFormattedHighLowTemperaturesWithFormat:(id)arg1;
@property(readonly, nonatomic) NSString *nwkLocalizedFormattedCondensedHighLowTemperatures;
@property(readonly, nonatomic) NSString *nwkLocalizedFormattedHighLowTemperatures;
@property(readonly, nonatomic) NSString *nwkLocalizedFormattedLowTemperature;
@property(readonly, nonatomic) NSString *nwkLocalizedFormattedHighTemperature;
@property(readonly, nonatomic) NSString *nwkLocalizedDescription;
@property(readonly, nonatomic) NSString *nwkLocalizedDescriptionShort;
- (id)nwkLocalizedDescriptionKey;
@end

