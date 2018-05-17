//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOAlert, GEOClientMetrics, GEOETAServiceResponseSummary, GEOPBTransitRoutingIncidentMessage, GEOPDDatasetABStatus, GEORouteDisplayHints, GEOStyleAttributes, GEOTransitDecoderData, NSData, NSMutableArray, NSString;

@interface GEODirectionsResponse : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _supportedTransportTypes;
    struct GEOTimepoint _timepointUsed;
    unsigned long long _debugLatencyMs;
    struct GEOProblemDetail *_problemDetails;
    unsigned int _problemDetailsCount;
    unsigned int _problemDetailsSpace;
    GEOClientMetrics *_clientMetrics;
    NSString *_dataVersion;
    GEOPDDatasetABStatus *_datasetAbStatus;
    GEOTransitDecoderData *_decoderData;
    NSData *_directionsResponseID;
    GEORouteDisplayHints *_displayHints;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOAlert *_failureAlert;
    NSMutableArray *_incidentsOffRoutes;
    NSMutableArray *_incidentsOnRoutes;
    int _instructionSignFillColor;
    int _liveRouteSavingsSeconds;
    int _localDistanceUnits;
    NSData *_nonRecommendedRoutesCache;
    NSMutableArray *_placeSearchResponses;
    NSMutableArray *_routes;
    unsigned int _selectedRouteIndex;
    NSMutableArray *_serviceGaps;
    NSString *_serviceVersion;
    NSData *_sessionState;
    int _status;
    GEOStyleAttributes *_styleAttributes;
    NSMutableArray *_suggestedRoutes;
    NSMutableArray *_trafficCameras;
    NSString *_transitDataVersion;
    GEOPBTransitRoutingIncidentMessage *_transitIncidentMessage;
    _Bool _isNavigable;
    _Bool _routeDeviatesFromOriginal;
    struct {
        unsigned int timepointUsed:1;
        unsigned int debugLatencyMs:1;
        unsigned int instructionSignFillColor:1;
        unsigned int liveRouteSavingsSeconds:1;
        unsigned int localDistanceUnits:1;
        unsigned int selectedRouteIndex:1;
        unsigned int isNavigable:1;
        unsigned int routeDeviatesFromOriginal:1;
    } _has;
}

+ (Class)suggestedRouteType;
+ (Class)trafficCameraType;
+ (Class)serviceGapType;
+ (Class)incidentsOffRoutesType;
+ (Class)incidentsOnRoutesType;
+ (Class)placeSearchResponseType;
+ (Class)routeType;
@property(retain, nonatomic) NSString *transitDataVersion; // @synthesize transitDataVersion=_transitDataVersion;
@property(retain, nonatomic) GEOTransitDecoderData *decoderData; // @synthesize decoderData=_decoderData;
@property(nonatomic) struct GEOTimepoint timepointUsed; // @synthesize timepointUsed=_timepointUsed;
@property(retain, nonatomic) NSMutableArray *suggestedRoutes; // @synthesize suggestedRoutes=_suggestedRoutes;
@property(retain, nonatomic) NSString *dataVersion; // @synthesize dataVersion=_dataVersion;
@property(retain, nonatomic) NSString *serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(retain, nonatomic) NSData *nonRecommendedRoutesCache; // @synthesize nonRecommendedRoutesCache=_nonRecommendedRoutesCache;
@property(retain, nonatomic) NSMutableArray *trafficCameras; // @synthesize trafficCameras=_trafficCameras;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus; // @synthesize datasetAbStatus=_datasetAbStatus;
@property(nonatomic) int liveRouteSavingsSeconds; // @synthesize liveRouteSavingsSeconds=_liveRouteSavingsSeconds;
@property(retain, nonatomic) GEOAlert *failureAlert; // @synthesize failureAlert=_failureAlert;
@property(retain, nonatomic) NSData *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) GEORouteDisplayHints *displayHints; // @synthesize displayHints=_displayHints;
@property(retain, nonatomic) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage; // @synthesize transitIncidentMessage=_transitIncidentMessage;
@property(nonatomic) unsigned int selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(retain, nonatomic) NSMutableArray *serviceGaps; // @synthesize serviceGaps=_serviceGaps;
@property(retain, nonatomic) NSMutableArray *incidentsOffRoutes; // @synthesize incidentsOffRoutes=_incidentsOffRoutes;
@property(retain, nonatomic) NSMutableArray *incidentsOnRoutes; // @synthesize incidentsOnRoutes=_incidentsOnRoutes;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) NSMutableArray *placeSearchResponses; // @synthesize placeSearchResponses=_placeSearchResponses;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTransitDataVersion;
@property(readonly, nonatomic) _Bool hasDecoderData;
@property(nonatomic) _Bool hasTimepointUsed;
- (id)suggestedRouteAtIndex:(unsigned int)arg1;
- (unsigned int)suggestedRoutesCount;
- (void)addSuggestedRoute:(id)arg1;
- (void)clearSuggestedRoutes;
@property(readonly, nonatomic) _Bool hasDataVersion;
@property(readonly, nonatomic) _Bool hasServiceVersion;
@property(readonly, nonatomic) _Bool hasNonRecommendedRoutesCache;
- (id)trafficCameraAtIndex:(unsigned int)arg1;
- (unsigned int)trafficCamerasCount;
- (void)addTrafficCamera:(id)arg1;
- (void)clearTrafficCameras;
@property(readonly, nonatomic) _Bool hasDatasetAbStatus;
@property(nonatomic) _Bool hasLiveRouteSavingsSeconds;
@property(readonly, nonatomic) _Bool hasFailureAlert;
@property(readonly, nonatomic) _Bool hasSessionState;
@property(readonly, nonatomic) _Bool hasStyleAttributes;
@property(readonly, nonatomic) _Bool hasDisplayHints;
@property(readonly, nonatomic) _Bool hasTransitIncidentMessage;
@property(nonatomic) _Bool hasSelectedRouteIndex;
- (id)serviceGapAtIndex:(unsigned int)arg1;
- (unsigned int)serviceGapsCount;
- (void)addServiceGap:(id)arg1;
- (void)clearServiceGaps;
- (int)StringAsSupportedTransportTypes:(id)arg1;
- (id)supportedTransportTypesAsString:(int)arg1;
- (void)setSupportedTransportTypes:(int *)arg1 count:(unsigned int)arg2;
- (int)supportedTransportTypeAtIndex:(unsigned int)arg1;
- (void)addSupportedTransportType:(int)arg1;
- (void)clearSupportedTransportTypes;
@property(readonly, nonatomic) int *supportedTransportTypes;
@property(readonly, nonatomic) unsigned int supportedTransportTypesCount;
- (void)setProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned int)arg2;
- (struct GEOProblemDetail)problemDetailAtIndex:(unsigned int)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail)arg1;
- (void)clearProblemDetails;
@property(readonly, nonatomic) struct GEOProblemDetail *problemDetails;
@property(readonly, nonatomic) unsigned int problemDetailsCount;
- (id)incidentsOffRoutesAtIndex:(unsigned int)arg1;
- (unsigned int)incidentsOffRoutesCount;
- (void)addIncidentsOffRoutes:(id)arg1;
- (void)clearIncidentsOffRoutes;
- (id)incidentsOnRoutesAtIndex:(unsigned int)arg1;
- (unsigned int)incidentsOnRoutesCount;
- (void)addIncidentsOnRoutes:(id)arg1;
- (void)clearIncidentsOnRoutes;
- (int)StringAsInstructionSignFillColor:(id)arg1;
- (id)instructionSignFillColorAsString:(int)arg1;
@property(nonatomic) _Bool hasInstructionSignFillColor;
@property(nonatomic) int instructionSignFillColor; // @synthesize instructionSignFillColor=_instructionSignFillColor;
@property(nonatomic) _Bool hasIsNavigable;
@property(nonatomic) _Bool isNavigable; // @synthesize isNavigable=_isNavigable;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;
@property(nonatomic) _Bool hasRouteDeviatesFromOriginal;
@property(nonatomic) _Bool routeDeviatesFromOriginal; // @synthesize routeDeviatesFromOriginal=_routeDeviatesFromOriginal;
- (int)StringAsLocalDistanceUnits:(id)arg1;
- (id)localDistanceUnitsAsString:(int)arg1;
@property(nonatomic) _Bool hasLocalDistanceUnits;
@property(nonatomic) int localDistanceUnits; // @synthesize localDistanceUnits=_localDistanceUnits;
- (id)placeSearchResponseAtIndex:(unsigned int)arg1;
- (unsigned int)placeSearchResponsesCount;
- (void)addPlaceSearchResponse:(id)arg1;
- (void)clearPlaceSearchResponses;
- (id)routeAtIndex:(unsigned int)arg1;
- (unsigned int)routesCount;
- (void)addRoute:(id)arg1;
- (void)clearRoutes;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
- (void)dealloc;
@property(nonatomic) _Bool hasDebugLatencyMs;
@property(nonatomic) unsigned long long debugLatencyMs;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) _Bool hasEtaServiceSummary;
@property(retain, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) _Bool hasClientMetrics;
- (id)_destinationMapItem;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)clearLocations;

@end
