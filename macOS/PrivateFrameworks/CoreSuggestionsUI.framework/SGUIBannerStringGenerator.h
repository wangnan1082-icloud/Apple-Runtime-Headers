//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SGUIBannerStringGenerator : NSObject
{
}

+ (id)_formattedStartDateForEvent:(id)arg1;
+ (id)_formattedStartTimeForEvent:(id)arg1;
+ (BOOL)_areEventsInSameDay:(id)arg1;
+ (id)_timeZoneForEvent:(id)arg1;
+ (id)_subtitleForMultipleEvents:(id)arg1;
+ (id)_subtitleForTwoEvents:(id)arg1;
+ (id)_addButtonTextForEvents:(id)arg1;
+ (id)_subtitleForSingleEvent:(id)arg1;
+ (id)_subtitleForEvents:(id)arg1;
+ (id)_titleForEvents:(id)arg1;
+ (id)_subtitleForMixedTypesForOrderedSuggestions:(id)arg1;
+ (id)_titleForMixedTypes;
+ (id)_addButtonTextForContacts:(id)arg1;
+ (id)_subtitleForMultipleRealtimeContacts:(id)arg1;
+ (id)_subtitleForRealtimeContact:(id)arg1;
+ (id)_subtitleForContacts:(id)arg1;
+ (id)_titleForContacts:(id)arg1;
+ (id)textAttributesForOrderedSuggestions:(id)arg1;
+ (id)textAttributesForRealtimeEvent:(id)arg1;
+ (id)descriptionTextForRealtimeEvent:(id)arg1;
+ (id)descriptionTextForRealtimeContact:(id)arg1;
+ (id)bannerActionButtonTextForOrderedSuggestions:(id)arg1;
+ (id)bannerSubtitleForOrderedSuggestions:(id)arg1;
+ (id)bannerTitleForOrderedSuggestions:(id)arg1;
+ (id)eventsForRealtimeEvents:(id)arg1;
+ (id)eventKitEventForRealtimeEvent:(id)arg1;
+ (id)_eventStore;
+ (BOOL)isRealtimeEventExisting:(id)arg1;
+ (BOOL)isRealtimeContactNew:(id)arg1;

@end
