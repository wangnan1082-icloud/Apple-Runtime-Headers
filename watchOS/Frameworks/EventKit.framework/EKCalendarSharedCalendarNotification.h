//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification
{
    unsigned int _sharingInvitationResponse;
    unsigned int _allowedEntityTypes;
}

@property(nonatomic) unsigned int allowedEntityTypes; // @synthesize allowedEntityTypes=_allowedEntityTypes;
@property(nonatomic) unsigned int sharingInvitationResponse; // @synthesize sharingInvitationResponse=_sharingInvitationResponse;
- (id)calendarFromEventStore:(id)arg1;
- (id)initWithType:(int)arg1;

@end
