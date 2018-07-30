//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UITextEffectsWindow.h>

#import "_UIContextCustomBinding.h"

@class CAContext, FBSScene, FBSSceneLayer, NSString, _UIContextBinder;

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding>
{
    _Bool _arePlaceholdersInitialised;
    FBSSceneLayer *_externalSceneLayer;
    FBSScene *_activeScene;
    _Bool _resetRequired;
}

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(_Bool)arg2;
- (void)dealloc;
- (int)_orientationForClassicPresentation;
- (void)endDisablingInterfaceAutorotation;
- (void)resetScene;
- (void)_resetScene;
- (void)detachBindable;
- (_Bool)shouldDetachBindable;
- (void)attachBindable;
- (_Bool)shouldAttachBindable;
- (float)_adjustedWindowLevelFromLevel:(float)arg1;
- (_Bool)_isTextEffectsWindowNotificationOwner;
- (struct CGAffineTransform)_viewTransformForInterfaceOrientation:(int)arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;
- (void)setWindowLevel:(float)arg1;
- (_Bool)_isFullscreen;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_canIgnoreInteractionEvents;
- (_Bool)_alwaysGetsContexts;
- (_Bool)_isHostedInAnotherProcess;
- (_Bool)_isWindowServerHostingManaged;
- (_Bool)_wantsSceneAssociation;
- (void)invalidate;
- (_Bool)_matchingOptions:(id)arg1;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) CDStruct_3cbf53c3 _bindingDescription;
@property(nonatomic, setter=_setBoundContext:) __weak CAContext *_boundContext;
@property(nonatomic, setter=_setContextBinder:) __weak _UIContextBinder *_contextBinder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
