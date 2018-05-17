//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEODirectionServiceTicket.h"

@class GEOComposedRoute, GEODirectionsRequest, NSArray, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket>
{
    GEODirectionsRequest *_request;
    BOOL _isReroute;
    GEOComposedRoute *_originalRoute;
    NSArray *_waypoints;
    BOOL _isDoom;
    NSNumber *_requestPriority;
    BOOL _active;
    BOOL _canceled;
    NSDictionary *_userInfo;
}

@property(copy, nonatomic) NSNumber *requestPriority; // @synthesize requestPriority=_requestPriority;
@property(nonatomic) BOOL isDoom; // @synthesize isDoom=_isDoom;
@property(readonly, nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) BOOL active; // @synthesize active=_active;
@property(retain, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(nonatomic) BOOL isReroute; // @synthesize isReroute=_isReroute;
@property(readonly, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
