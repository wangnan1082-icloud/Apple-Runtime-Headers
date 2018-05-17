//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPCReportingEvent.h"

@class NSString, SSVPlayActivityEvent;

@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent>
{
    _Bool _shouldReportToStore;
    SSVPlayActivityEvent *_playActivityEvent;
}

@property(nonatomic) _Bool shouldReportToStore; // @synthesize shouldReportToStore=_shouldReportToStore;
@property(copy, nonatomic) SSVPlayActivityEvent *playActivityEvent; // @synthesize playActivityEvent=_playActivityEvent;
- (void).cxx_destruct;
- (unsigned int)reportingEventType;
- (_Bool)isValidReportingEvent;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
