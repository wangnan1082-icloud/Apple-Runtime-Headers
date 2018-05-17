//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "FBUISceneWorkspace.h"

@class NSMutableDictionary, NSSet, NSString;

@interface FBUISceneWorkspace : NSObject <BSDescriptionProviding, FBUISceneWorkspace>
{
    _Bool _valid;
    NSString *_identifier;
    NSMutableDictionary *_scenesByName;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)sceneManager:(id)arg1 surrogateForSceneWithIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)deactivateScene:(id)arg1;
- (void)activateScene:(id)arg1 withTransitionContext:(id)arg2;
- (id)callOutQueue;
- (void)invalidate;
- (void)destroyScene:(id)arg1;
- (id)createSceneWithName:(id)arg1 specification:(id)arg2;
- (id)sceneWithName:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *scenes;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
