//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARAnchor;

@interface ARHitTestResult : NSObject
{
    unsigned long long _type;
    double _distance;
    ARAnchor *_anchor;
    // Error parsing type: {?="columns"[4]}, name: _localTransform
    // Error parsing type: {?="columns"[4]}, name: _worldTransform
}

@property(retain, nonatomic) ARAnchor *anchor; // @synthesize anchor=_anchor;
// Error parsing type for property worldTransform:
// Property attributes: T{?=[4]},N,V_worldTransform

// Error parsing type for property localTransform:
// Property attributes: T{?=[4]},N,V_localTransform

@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (id)_description:(_Bool)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

