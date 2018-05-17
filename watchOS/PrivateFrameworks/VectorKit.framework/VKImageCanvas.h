//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapRegion, VKScreenCameraController;

__attribute__((visibility("hidden")))
@interface VKImageCanvas : NSObject
{
    VKScreenCameraController *_cameraController;
    shared_ptr_e963992e _taskContext;
    int _mapType;
    struct DisplayStyle _mapDisplayStyle;
    unsigned char _emphasis;
    id <MDRenderTarget> _displayTarget;
    Renderer_94857723 *_mapRenderer;
    struct LayoutContext *_layoutContext;
    id <VKImageCanvasDelegate> _delegate;
    struct RunLoopController *_runLoopController;
}

@property(nonatomic) unsigned char emphasis; // @synthesize emphasis=_emphasis;
@property(nonatomic) struct DisplayStyle mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) id <VKImageCanvasDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
-     // Error parsing type: v36@0:4^{MapEngine=^^?{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}{_retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}^{Device}{_retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> >={__compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> >=^{DisplayLink}}}{unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> >={__compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> >=^{SnapshotRunLoop}}}^{RunLoop}{unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> >={__compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> >=^{AnimationManager}}}{unique_ptr<md::AnimationRunner, std::__1::default_delete<md::AnimationRunner> >={__compressed_pair<md::AnimationRunner *, std::__1::default_delete<md::AnimationRunner> >=^{AnimationRunner}}}{shared_ptr<md::RunLoopController>=^{RunLoopController}^{__shared_weak_count}}@@@@{unique_ptr<md::CartographicRenderer, std::__1::default_delete<md::CartographicRenderer> >={__compressed_pair<md::CartographicRenderer *, std::__1::default_delete<md::CartographicRenderer> >=^{CartographicRenderer}}}{unique_ptr<md::realistic::RealisticRenderer, std::__1::default_delete<md::realistic::RealisticRenderer> >={__compressed_pair<md::realistic::RealisticRenderer *, std::__1::default_delete<md::realistic::RealisticRenderer> >=^{RealisticRenderer}}}^{Renderer}{unique_ptr<md::LayoutContext, std::__1::default_delete<md::LayoutContext> >={__compressed_pair<md::LayoutContext *, std::__1::default_delete<md::LayoutContext> >=^{LayoutContext}}}{_retain_ptr<VKCamera *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{unique_ptr<md::LogicManager, std::__1::default_delete<md::LogicManager> >={__compressed_pair<md::LogicManager *, std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B}8{function<void ()>={type=[16C]}^{__base<void ()>}}12, name: renderSceneWithEngine:completion:
- (void)cancelLoad;
- (void)loadScene;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)didLayout;
- (void)update;
@property(readonly, nonatomic) shared_ptr_e963992e taskContext;
- (void)dealloc;
-     // Error parsing type: @12@0:4^{MapEngine=^^?{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}{_retain_ptr<GEOResourceManifestConfiguration *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}^{Device}{_retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> >={__compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> >=^{DisplayLink}}}{unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> >={__compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> >=^{SnapshotRunLoop}}}^{RunLoop}{unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> >={__compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> >=^{AnimationManager}}}{unique_ptr<md::AnimationRunner, std::__1::default_delete<md::AnimationRunner> >={__compressed_pair<md::AnimationRunner *, std::__1::default_delete<md::AnimationRunner> >=^{AnimationRunner}}}{shared_ptr<md::RunLoopController>=^{RunLoopController}^{__shared_weak_count}}@@@@{unique_ptr<md::CartographicRenderer, std::__1::default_delete<md::CartographicRenderer> >={__compressed_pair<md::CartographicRenderer *, std::__1::default_delete<md::CartographicRenderer> >=^{CartographicRenderer}}}{unique_ptr<md::realistic::RealisticRenderer, std::__1::default_delete<md::realistic::RealisticRenderer> >={__compressed_pair<md::realistic::RealisticRenderer *, std::__1::default_delete<md::realistic::RealisticRenderer> >=^{RealisticRenderer}}}^{Renderer}{unique_ptr<md::LayoutContext, std::__1::default_delete<md::LayoutContext> >={__compressed_pair<md::LayoutContext *, std::__1::default_delete<md::LayoutContext> >=^{LayoutContext}}}{_retain_ptr<VKCamera *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{shared_ptr<md::LabelManager>=^{LabelManager}^{__shared_weak_count}}{unique_ptr<md::LogicManager, std::__1::default_delete<md::LogicManager> >={__compressed_pair<md::LogicManager *, std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B}8, name: initWithMapEngine:

@end
