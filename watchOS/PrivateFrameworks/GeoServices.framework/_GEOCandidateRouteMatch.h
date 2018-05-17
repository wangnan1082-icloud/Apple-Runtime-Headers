//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _GEOCandidateRouteMatch : NSObject
{
    _Bool _isGoodMatch;
    double _score;
    struct PolylineCoordinate _routeCoordinate;
    CDStruct_2c43369c _locationCoordinate;
    unsigned int _stepIndex;
    double _distanceFromRoute;
    double _maxDistance;
    double _distanceMatchScore;
    double _distanceWeight;
    double _courseDelta;
    double _maxCourseDelta;
    double _courseMatchScore;
    double _courseWeight;
}

@property(nonatomic) double courseWeight; // @synthesize courseWeight=_courseWeight;
@property(nonatomic) double courseMatchScore; // @synthesize courseMatchScore=_courseMatchScore;
@property(nonatomic) double maxCourseDelta; // @synthesize maxCourseDelta=_maxCourseDelta;
@property(nonatomic) double courseDelta; // @synthesize courseDelta=_courseDelta;
@property(nonatomic) double distanceWeight; // @synthesize distanceWeight=_distanceWeight;
@property(nonatomic) double distanceMatchScore; // @synthesize distanceMatchScore=_distanceMatchScore;
@property(nonatomic) double maxDistance; // @synthesize maxDistance=_maxDistance;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute=_distanceFromRoute;
@property(nonatomic) unsigned int stepIndex; // @synthesize stepIndex=_stepIndex;
@property(nonatomic) CDStruct_c3b9c2ee locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property(nonatomic) struct PolylineCoordinate routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) _Bool isGoodMatch; // @synthesize isGoodMatch=_isGoodMatch;
- (id).cxx_construct;
- (id)description;
- (id)initWithRoute:(id)arg1;

@end
