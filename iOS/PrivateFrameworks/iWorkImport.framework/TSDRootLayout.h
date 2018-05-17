//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDAbstractLayout.h>

#import "TSDAdaptiveLayout.h"

@class TSDLayoutController, TSURetainedPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout>
{
    TSDLayoutController *mLayoutController;
    _Bool mSupportsAdaptiveLayout;
    TSURetainedPointerKeyDictionary *mShiftedObjects;
}

- (struct CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(struct CGPoint)arg3;
- (struct CGPoint)adjustMappingPointForInfo:(id)arg1 fromPoint:(struct CGPoint)arg2;
- (void)resetLayout:(id)arg1 forInfo:(id)arg2;
- (void)updateRootLayoutShiftFor:(id)arg1 offset:(struct CGPoint)arg2;
- (_Bool)isSavedShiftForInfo:(id)arg1 equalToOffset:(struct CGPoint)arg2;
- (void)endDynamicAdaptiveLayout;
- (void)beginDynamicAdaptiveLayout;
- (id)p_shiftedObjects;
- (struct CGRect)clippedRectInRoot:(struct CGRect)arg1;
- (_Bool)isRootLayoutForInspectorGeometry;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (_Bool)providesGuidesForChildLayouts;
- (id)childLayoutsInRect:(struct CGRect)arg1;
- (id)layoutController;
- (void)dealloc;
- (id)initWithLayoutController:(id)arg1;

@end
