//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class SCNNode, SCNPhysicsWorld;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding>
{
    struct SCNVector3 _halfExtent;
    float _strength;
    float _falloffExponent;
    float _minimumDistance;
    _Bool _active;
    int _scope;
    _Bool _usesEllipsoidalExtent;
    _Bool _exclusive;
    struct SCNVector3 _offset;
    struct SCNVector3 _direction;
    unsigned int _categoryBitMask;
    SCNPhysicsWorld *_world;
    SCNNode *_node;
    // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}, name: _field
}

+ (_Bool)supportsSecureCoding;
+ (float)_displayScaleFactor;
+ (void)_setDisplayScaleFactor:(float)arg1;
+ (id)magneticField;
+ (id)electricField;
+ (id)springField;
+ (id)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)linearGravityField;
+ (id)radialGravityField;
+ (id)vortexField;
+ (id)customFieldWithEvaluationBlock:(CDUnknownBlockType)arg1;
+ (id)dragField;
+ (id)field;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct SCNVector3)evalAtLocation:(struct SCNVector3)arg1;
-     // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}8@0:4, name: _handle
- (id)_owner;
- (void)_setWorld:(id)arg1;
- (void)_setOwner:(id)arg1;
- (void)_willRemoveFromPhysicsWorld;
- (void)_removeOwner;
- (_Bool)supportsOffset;
- (_Bool)supportsDirection;
@property(nonatomic) struct SCNVector3 direction;
@property(nonatomic) struct SCNVector3 offset;
@property(nonatomic, getter=isExclusive) _Bool exclusive;
- (_Bool)exclusive;
@property(nonatomic) _Bool usesEllipsoidalExtent;
@property(nonatomic) struct SCNVector3 halfExtent;
@property(nonatomic) int scope;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) float minimumDistance;
@property(nonatomic) float falloffExponent;
@property(nonatomic) unsigned int categoryBitMask;
@property(nonatomic) float strength;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupCommonProperties;
-     // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}8@0:4, name: _createField
- (void)dealloc;
- (id)init;
- (void)_commonInit;

@end
