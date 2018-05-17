//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentEvent : EKPersistentCalendarItem
{
}

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (id)eventWithRandomUUID;
- (void)setFiredTTL:(_Bool)arg1;
- (_Bool)firedTTL;
- (void)setSuggestedEventInfo:(id)arg1;
- (id)suggestedEventInfo;
- (void)setSuggestionInfo:(id)arg1;
- (id)suggestionInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)setConferenceURL:(id)arg1;
- (id)conferenceURL;
- (id)actions;
- (void)setOriginalStartDate:(id)arg1;
- (id)originalStartDate;
- (id)organizer;
- (void)setDisallowProposeNewTime:(_Bool)arg1;
- (void)setJunkStatus:(unsigned int)arg1;
- (unsigned int)junkStatus;
- (_Bool)disallowProposeNewTime;
- (void)setCanForward:(_Bool)arg1;
- (_Bool)canForward;
- (void)setExternalTrackingStatus:(int)arg1;
- (int)externalTrackingStatus;
- (void)setResponseComment:(id)arg1;
- (id)responseComment;
- (void)setTravelAdvisoryBehavior:(int)arg1;
- (int)travelAdvisoryBehavior;
- (void)setPrivacyLevel:(int)arg1;
- (int)privacyLevel;
- (void)setAvailability:(int)arg1;
- (int)availability;
- (void)setInvitationChangedProperties:(unsigned int)arg1;
- (unsigned int)invitationChangedProperties;
- (void)setInvitationStatus:(unsigned int)arg1;
- (unsigned int)invitationStatus;
- (void)setLocationPredictionState:(int)arg1;
- (int)locationPredictionState;
- (void)setNeedsOccurrenceCacheUpdate:(_Bool)arg1;
- (_Bool)needsOccurrenceCacheUpdate;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)setProposedStartDate:(id)arg1;
- (id)proposedStartDate;
- (void)setTravelTime:(id)arg1;
- (id)travelTime;
- (void)setEndDate:(id)arg1;
- (id)endDate;
- (void)setBirthdayID:(id)arg1;
- (id)birthdayID;
- (int)entityType;

@end
