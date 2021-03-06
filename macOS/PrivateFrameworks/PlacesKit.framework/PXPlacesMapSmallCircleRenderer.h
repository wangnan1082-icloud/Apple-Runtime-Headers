//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapAnnotationRenderer-Protocol.h>
#import <PlacesKit/PXPlacesMapGeotaggableInfoDelegate-Protocol.h>

@class NSString;
@protocol PXPlacesMapGeotaggableInfoDelegate, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapSmallCircleRenderer : NSObject <PXPlacesMapAnnotationRenderer, PXPlacesMapGeotaggableInfoDelegate>
{
    id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
    id <PXPlacesMapGeotaggableInfoDelegate> _informationDelegate;
}

@property __weak id <PXPlacesMapGeotaggableInfoDelegate> informationDelegate; // @synthesize informationDelegate=_informationDelegate;
@property(nonatomic) __weak id <PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
- (void).cxx_destruct;
- (void)reset;
- (void)imageForGeotaggable:(id)arg1 ofSize:(struct CGSize)arg2 networkAccessAllowed:(BOOL)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (id)viewForAnnotation:(id)arg1 andMapView:(id)arg2;
- (id)annotationForGeotaggables:(id)arg1 initialCoordinate:(struct CLLocationCoordinate2D)arg2;
- (BOOL)supportsMoveAnimations;
@property(readonly) struct NSEdgeInsets minimumEdgeInsets;
- (long long)annotationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

