//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KNAnimationPluginContext.h"

@class KNAnimatedBuild, KNAnimationRandomGenerator, NSArray, NSDictionary, NSString, TSDGLState, TSDRep;

__attribute__((visibility("hidden")))
@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>
{
    _Bool _isMotionBlurred;
    _Bool _isPreview;
    _Bool _isWarmingUp;
    NSArray *_textures;
    NSDictionary *_scaledTextures;
    NSArray *_tags;
    unsigned long long _direction;
    double _duration;
    double _percent;
    KNAnimatedBuild *_animatedBuild;
    NSDictionary *_transitionAttributes;
    NSArray *_magicMoveMatches;
    TSDGLState *_GLState;
    TSDRep *_rep;
    long long _rendererType;
    KNAnimationRandomGenerator *_randomGenerator;
    struct CGRect _boundingRectOnCanvas;
    struct CGRect _boundingRect;
}

@property(retain, nonatomic) KNAnimationRandomGenerator *randomGenerator; // @synthesize randomGenerator=_randomGenerator;
@property(nonatomic) long long rendererType; // @synthesize rendererType=_rendererType;
@property(nonatomic) __weak TSDRep *rep; // @synthesize rep=_rep;
@property(nonatomic) _Bool isWarmingUp; // @synthesize isWarmingUp=_isWarmingUp;
@property(retain, nonatomic) TSDGLState *GLState; // @synthesize GLState=_GLState;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(nonatomic) __weak NSArray *magicMoveMatches; // @synthesize magicMoveMatches=_magicMoveMatches;
@property(nonatomic) __weak NSDictionary *transitionAttributes; // @synthesize transitionAttributes=_transitionAttributes;
@property(nonatomic) __weak KNAnimatedBuild *animatedBuild; // @synthesize animatedBuild=_animatedBuild;
@property(nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) struct CGRect boundingRectOnCanvas; // @synthesize boundingRectOnCanvas=_boundingRectOnCanvas;
@property(nonatomic) _Bool isMotionBlurred; // @synthesize isMotionBlurred=_isMotionBlurred;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSDictionary *scaledTextures; // @synthesize scaledTextures=_scaledTextures;
@property(retain, nonatomic) NSArray *textures; // @synthesize textures=_textures;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isMetalRenderer;
@property(readonly, nonatomic) _Bool isOpenGLRenderer;
@property(readonly, nonatomic) _Bool isFrameRenderer;
@property(readonly, nonatomic) _Bool isMagicMove;
@property(readonly, nonatomic) _Bool isTransition;
@property(readonly, nonatomic) _Bool isBuild;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
