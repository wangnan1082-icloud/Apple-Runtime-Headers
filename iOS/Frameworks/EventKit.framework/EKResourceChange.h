//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import "EKIdentityProtocol.h"

@class EKCalendar, EKCalendarItem, NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKResourceChange : EKObject <EKIdentityProtocol>
{
}

+ (id)knownRelationshipSingleValueKeys;
+ (Class)frozenClass;
- (void)clearAlertedStatus;
@property(readonly, nonatomic) unsigned int publicStatus;
@property(readonly, nonatomic) _Bool alerted;
@property(readonly, nonatomic) NSString *deletedTitle;
@property(readonly, nonatomic) NSNumber *deleteCount;
@property(readonly, nonatomic) NSNumber *updateCount;
@property(readonly, nonatomic) NSNumber *createCount;
@property(readonly, nonatomic) _Bool locationChanged;
@property(readonly, nonatomic) _Bool titleChanged;
@property(readonly, nonatomic) _Bool timeChanged;
@property(readonly, nonatomic) _Bool dateChanged;
- (_Bool)_propertyWithFlagDidChange:(unsigned int)arg1;
- (unsigned int)changedProperties;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) unsigned int changeType;
@property(readonly, retain, nonatomic) EKCalendarItem *calendarItem;
@property(readonly, retain, nonatomic) EKCalendar *calendar;
- (id)URL;
- (id)phoneNumber;
- (id)emailAddress;
- (id)lastName;
- (id)firstName;
- (id)name;
@property(readonly, copy, nonatomic) NSString *changedByLastName;
@property(readonly, copy, nonatomic) NSString *changedByFirstName;
@property(readonly, copy, nonatomic) NSURL *changedByAddress;
@property(readonly, copy, nonatomic) NSString *changedByDisplayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
