//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import <VectorKit/GEOExperimentConfigurationObserver-Protocol.h>
#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <VectorKit/VKPolylineGroupOverlayObserver-Protocol.h>
#import <VectorKit/VKPolylineOverlayRouteRibbonObserver-Protocol.h>
#import <VectorKit/VKTileProviderClient-Protocol.h>

@class GEOResourceManifestConfiguration, NSArray, NSHashTable, NSLocale, NSMapTable, NSMutableSet, NSSet, NSString, VKNavigationPuck, VKPolylineOverlay, VKRasterOverlayTileSource, VKSceneConfiguration, VKTileProvider, VKTimedAnimation, VKTrafficTileSource;
@protocol GEORoutePreloadSession, VKMapModelDelegate, VKRouteMatchedAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKMapModel : VKModelObject <GEOResourceManifestTileGroupObserver, VKPolylineOverlayRouteRibbonObserver, GEOExperimentConfigurationObserver, VKTileProviderClient, VKPolylineGroupOverlayObserver>
{
    unsigned int _mapPurpose;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    int _tileSize;
    VKTileProvider *_tileProvider;
    VKTileProvider *_buildingTileProvider;
    VKTileProvider *_additionalManifestTileProvider;
    VKTileProvider *_rasterOverlayProvider[2];
    _Bool _activeMapLayers[33];
    VKTrafficTileSource *_trafficSource;
    GEOResourceManifestConfiguration *_additionalManifestConfiguration;
    int _mapMode;
    int _desiredMapMode;
    _Bool _transitioningToNav;
    _Bool _isTransitioningToTransit;
    VKRasterOverlayTileSource *_rasterOverlayTileSource[2];
    NSMapTable *_tileSources;
    shared_ptr_a3c46825 _activeStyleManager;
    shared_ptr_a3c46825 _defaultStyleManager;
    shared_ptr_a3c46825 _hybridStyleManager;
    shared_ptr_a3c46825 _satelliteStyleManager;
    shared_ptr_c37d6e02 _sceneManager;
    VKSceneConfiguration *_sceneConfiguration;
    double _zoomLevel;
    int _mapType;
    id <VKMapModelDelegate> _delegate;
    id <GEORoutePreloadSession> _routePreloadSession;
    _Bool _showsBuildings;
    _Bool _showsVenues;
    _Bool _fullyDrawn;
    _Bool _shouldNotifyFullyDrawn;
    _Bool _hasFailedTile;
    _Bool _trafficEnabled;
    _Bool _trafficIncidentsEnabled;
    _Bool _shouldRasterize;
    int _loadingCount;
    float _contentScale;
    unsigned char _targetDisplay;
    struct VehicleState _vehicleState;
    unsigned char _emphasis;
    unsigned char _applicationUILayout;
    double _lodBias;
    _Bool _disableRoads;
    _Bool _disableLabels;
    _Bool _disablePolygons;
    _Bool _disableBuildingFootprints;
    _Bool _disableRasters;
    _Bool _disableGrid;
    Matrix_5173352a _clearColor;
    _Bool _limitingNavCameraHeight;
    NSMutableSet *_blockingStylesheetObservers;
    float _styleTransitionProgress;
    NSHashTable *_externalAnchors;
    double _forcedMaxZoomLevel;
    _Bool _disableTransitLines;
    VKTimedAnimation *_modeTransitionAnimation;
    _Bool _disableRoadClass[9];
    struct CartographicRenderer *_renderer;
    struct mutex _rendererMutex;
    struct LogicManager *_logicManager;
    struct unique_ptr<md::TrafficSharedResources, std::__1::default_delete<md::TrafficSharedResources>> _trafficSharedResources;
    shared_ptr_887a193f _dataOverrideManager;
    float _navigationPuckSize;
    struct ClearItem _clearItem;
    struct FeatureAttributeSet _mapFeatureStyleAttributes;
    shared_ptr_c5d816ee _styleQuery;
    int _metroArea;
    _Bool _forceMapDrawStyleUpdate;
    NSMutableSet *_polylineOverlays;
    VKPolylineOverlay *_selectedPolyline;
    VKTimedAnimation *_highZoomTransitionAnimation;
    VKNavigationPuck *_navigationPuck;
    struct set<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *>> _observedOverlays;
    struct set<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::less<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::allocator<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>> _overlays;
    struct optional<gss::MapZoomLevel> _mapZoomLevel;
    _Bool _isEmphasisSet;
    shared_ptr_e963992e _taskContext;
    _Bool _showsPointsOfInterest;
    _Bool _localizeLabels;
    unsigned char _labelScaleFactor;
    int _shieldSize;
    int _navigationShieldSize;
    int _shieldIdiom;
    float _navMapZoomLevelTransitionZ;
    float _standardMapZoomLevelTransitionZ;
    NSSet *_persistentOverlays;
    struct PolylineCoordinate _routeUserOffset;
}

+ (unsigned long)numberOfRoadClasses;
+ (const char *)nameForRoadClass:(int)arg1;
@property(readonly, nonatomic) NSSet *persistentOverlays; // @synthesize persistentOverlays=_persistentOverlays;
@property(nonatomic) struct PolylineCoordinate routeUserOffset; // @synthesize routeUserOffset=_routeUserOffset;
@property(nonatomic) unsigned char labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
@property(nonatomic) _Bool localizeLabels; // @synthesize localizeLabels=_localizeLabels;
@property(nonatomic) float standardMapZoomLevelTransitionZ; // @synthesize standardMapZoomLevelTransitionZ=_standardMapZoomLevelTransitionZ;
@property(nonatomic) float navMapZoomLevelTransitionZ; // @synthesize navMapZoomLevelTransitionZ=_navMapZoomLevelTransitionZ;
@property(nonatomic) _Bool showsPointsOfInterest; // @synthesize showsPointsOfInterest=_showsPointsOfInterest;
@property(nonatomic) int shieldIdiom; // @synthesize shieldIdiom=_shieldIdiom;
@property(nonatomic) int navigationShieldSize; // @synthesize navigationShieldSize=_navigationShieldSize;
@property(nonatomic) int shieldSize; // @synthesize shieldSize=_shieldSize;
@property(nonatomic) _Bool disableTransitLines; // @synthesize disableTransitLines=_disableTransitLines;
@property(nonatomic) _Bool limitingNavCameraHeight; // @synthesize limitingNavCameraHeight=_limitingNavCameraHeight;
@property(readonly, nonatomic) unsigned int purpose; // @synthesize purpose=_mapPurpose;
@property(readonly, nonatomic) _Bool shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(nonatomic) float navigationPuckSize; // @synthesize navigationPuckSize=_navigationPuckSize;
@property(readonly, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(retain, nonatomic) GEOResourceManifestConfiguration *additionalManifestConfiguration; // @synthesize additionalManifestConfiguration=_additionalManifestConfiguration;
@property(nonatomic) _Bool showsVenues; // @synthesize showsVenues=_showsVenues;
@property(nonatomic) _Bool showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic, getter=isTrafficIncidentsEnabled) _Bool trafficIncidentsEnabled; // @synthesize trafficIncidentsEnabled=_trafficIncidentsEnabled;
@property(nonatomic, getter=isTrafficEnabled) _Bool trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(nonatomic) shared_ptr_c37d6e02 sceneManager; // @synthesize sceneManager=_sceneManager;
@property(nonatomic) shared_ptr_a3c46825 styleManager; // @synthesize styleManager=_activeStyleManager;
@property(nonatomic) id <VKMapModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int currentMapMode; // @synthesize currentMapMode=_mapMode;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) Matrix_5173352a clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) _Bool disableGrid; // @synthesize disableGrid=_disableGrid;
@property(nonatomic) _Bool disableRasters; // @synthesize disableRasters=_disableRasters;
@property(nonatomic) _Bool disableBuildingFootprints; // @synthesize disableBuildingFootprints=_disableBuildingFootprints;
@property(nonatomic) _Bool disablePolygons; // @synthesize disablePolygons=_disablePolygons;
@property(nonatomic) _Bool disableLabels; // @synthesize disableLabels=_disableLabels;
@property(nonatomic) _Bool disableRoads; // @synthesize disableRoads=_disableRoads;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)tileSource:(id)arg1 overrideForMaximumZoomLevel:(int)arg2;
- (void)populateDebugNode:(shared_ptr_eafb90f9)arg1 debugTileProvider:(_Bool)arg2;
@property(readonly, nonatomic) float currentRoadSignOffset;
@property(readonly, nonatomic) VKSceneConfiguration *sceneConfiguration;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(Matrix_6e1d3589)arg2;
- (shared_ptr_430519ce)buildingMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(Matrix_6e1d3589)arg2;
- (void)setApplicationState:(unsigned char)arg1;
- (void)polylineOverlay:(id)arg1 didUpdateRouteRibbon:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)resetTileContainers;
- (id)debugLabelString:(_Bool)arg1;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)removeExternalAnchor:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (id)externalAnchors;
@property(retain, nonatomic) id <GEORoutePreloadSession> routePreloadSession;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)setRouteContext:(id)arg1;
- (void)setNavCameraIsDetached:(_Bool)arg1;
- (void)didLayoutLabels;
- (void)labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg1;
- (void)selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg1;
- (id)labelMapTileForTile:(id)arg1 layer:(unsigned char)arg2;
- (void)_updateOverlayTileSource;
- (id)roadTileForTile:(id)arg1;
- (void)setShowingOuterHaloOnLabelsDidChange:(_Bool)arg1;
- (_Bool)isInTransitMode;
- (_Bool)isInNavigationMode;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *rasterOverlays;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeRasterOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (void)_updateRasterOverlayZoomOverride;
- (void)_updateTileExclusionAreas;
- (id)_rasterOverlayTileSourceForLevel:(unsigned int)arg1;
- (struct COverlayLayer *)_rasterOverlayForLevel:(unsigned int)arg1;
- (id)boundsForSelectedTransitLines;
- (void)deselectTransitLineMarker;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedTransitLineIDs;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)debugHighlightFeatureMarker:(const shared_ptr_430519ce *)arg1;
- (struct LabelSettings *)labelSettings;
@property(readonly, nonatomic) _Bool isFullyDrawn;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (void)buildingsDidBecome3D:(_Bool)arg1;
- (void)reserveStencilRangesForScene:(id)arg1 context:(struct LayoutContext *)arg2 renderQueue:(RenderQueue_70f64fd3 *)arg3;
- (void)updateRasterOverlayProviders:(id)arg1 withContext:(struct LayoutContext *)arg2;
- (void)destroyRendererStopObserving;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(RenderQueue_70f64fd3 *)arg3;
- (id)navigationPuck;
- (double)northYawAtZoom:(int)arg1;
- (void)updateMapDrawStyleWithContext:(struct LayoutContext *)arg1;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2;
- (void)tileProviderNeedsUpdate:(id)arg1;
- (void)_transitionFromMode:(int)arg1 toMode:(int)arg2 animated:(_Bool)arg3;
- (void)_beginMapZoomLevelTransition:(unsigned char)arg1;
- (void)_updateZoomLevel:(struct LayoutContext *)arg1;
- (int)_maximumZoomLevelInView:(id)arg1 ignoreZoomOverride:(_Bool)arg2;
- (int)maximumZoomLevelInView:(id)arg1;
- (int)maximumZoomLevelInViewWithoutZoomOverride:(id)arg1;
- (int)minimumZoomLevelInView:(id)arg1;
- (int)tileSize;
- (void)_forceLayout;
- (void)_localeChanged:(id)arg1;
- (void)shouldFlushCaches:(id)arg1;
- (void)cancelTileRequests;
- (void)flushCaches:(_Bool)arg1;
- (void)clearScene;
- (_Bool)isShowingNoDataPlaceholders;
- (id)tileStatistics;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 renderer:(struct CartographicRenderer *)arg2 purpose:(unsigned int)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 taskContext:(shared_ptr_e963992e)arg6 logicManager:(struct LogicManager *)arg7;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)createTrafficTileSourceIfNecessary:(id)arg1;
@property(nonatomic) unsigned char applicationUILayout;
@property(nonatomic) unsigned char emphasis;
@property(nonatomic) struct VehicleState vehicleState;
@property(nonatomic) unsigned char targetDisplay;
@property(nonatomic) double lodBias;
- (void)reloadStylesheet;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1 forRealistic:(_Bool)arg2;
- (void)performStylesheetDidReload;
- (void)performStylesheetDoneChanging;
- (void)performStylesheetDidChange;
- (void)performStylesheetTransitionDidProgress;
- (void)performStylesheetWillTransitionToDisplayStyle:(struct DisplayStyle)arg1;
- (void)_setStyleManagerFromMapType:(int)arg1;
- (void)_setInitialClientStyleAttributesForDefaultStyleManager;
- (void)sizeDidChange:(struct CGSize)arg1;
- (float)_tileSelectionScaleForContext:(struct LayoutContext *)arg1;
- (void)_mapConfigurationDidChange;
- (void)_updateRegularTileProviderMode;
- (void)didEndTransitionToTransit;
- (void)didBeginTransitionToTransit;
- (void)didEndNavigation;
- (void)didBeginTransitionToNavigation;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
- (void)_setStyleTransitionProgress:(float)arg1 targetStyle:(struct DisplayStyle)arg2 step:(int)arg3;
- (float)_styleTransitionProgress;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)stylesheetAnimationDidEnd:(_Bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle)arg1 toStyle:(struct DisplayStyle)arg2;
- (void)startStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2;
- (void)endStyleAnimationGroup;
- (void)beginStyleAnimationGroup;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2 setupHandler:(CDUnknownBlockType)arg3;
- (void)finishStyleBlend;
- (struct DisplayStyle)sourceMapDisplayStyle;
- (_Bool)supportsMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)updateOverlayType;
- (void)setMapType:(int)arg1 animated:(_Bool)arg2;
- (void)_transitFadeOutCompletionCallback;
@property(readonly, nonatomic) _Bool showingTrafficCasing;
- (void)activateLogic;
- (void)forceMapType:(int)arg1 animated:(_Bool)arg2;
- (id)createSourceForLayer:(unsigned char)arg1 useAdditionalManifest:(_Bool)arg2;
- (void)configureTileSources;
- (id)tileProviderForMapLayer:(unsigned char)arg1;
- (void)clearTileSources;
- (id)tileSetForMapLayer:(unsigned char)arg1 tileGroup:(id)arg2;
- (id)createSourceForLayer:(unsigned char)arg1 tileSet:(id)arg2 useAdditionalManifest:(_Bool)arg3;
- (_Bool)canPitch;
- (int)tileStyleForMapLayer:(unsigned char)arg1;
- (_Bool)mapTypeUsesStandardTiles;
- (void)setDesiredMapMode:(int)arg1 immediate:(_Bool)arg2;
@property(readonly, nonatomic) shared_ptr_f9615488 terrainHeightCache;
- (_Bool)isRoadClassDisabled:(int)arg1;
- (void)disableRoadClass:(_Bool)arg1 withRoadClass:(int)arg2;
@property(readonly, nonatomic) VKTileProvider *tileProvider;
- (void)foreachActiveLayer:(CDUnknownBlockType)arg1;
- (void)foreachRenderLayer:(CDUnknownBlockType)arg1;
- (void)foreachActiveRenderLayer:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned int neighborMode;
@property(readonly, nonatomic) const struct TrafficSharedResources *trafficResources;
@property(nonatomic) _Bool shouldLoadFallbackTiles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

