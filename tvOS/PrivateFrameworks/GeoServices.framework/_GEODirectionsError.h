//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODirectionsError-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOAlert, NSString, _GEOTransitRoutingIncidentMessage;
@protocol GEOTransitRoutingIncidentMessage;

@interface _GEODirectionsError : NSObject <GEODirectionsError, NSSecureCoding>
{
    GEOAlert *_alert;
    struct GEOProblemDetail *_problemDetails;
    unsigned long long _problemDetailsCount;
    _GEOTransitRoutingIncidentMessage *_routingIncidentMessage;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (_Bool)hasError:(long long)arg1;
- (_Bool)_errorCode:(long long)arg1 toProblem:(out int *)arg2;
- (long long)_errorCodeForProblemDetail:(struct GEOProblemDetail)arg1;
@property(readonly, nonatomic) long long firstDirectionsErrorCode;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> incidentMessage;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWaypointIndex:(unsigned long long)arg1;
- (id)initWithResponse:(id)arg1;
- (void)_copyProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

