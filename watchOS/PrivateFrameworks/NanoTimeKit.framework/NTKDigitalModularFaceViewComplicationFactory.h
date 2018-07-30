//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKFaceViewComplicationFactory.h>

@class NTKLayoutRule;

@interface NTKDigitalModularFaceViewComplicationFactory : NTKFaceViewComplicationFactory
{
    NTKLayoutRule *_timeLayoutRuleNormal;
    NTKLayoutRule *_timeLayoutRuleEditing;
}

- (void).cxx_destruct;
- (void)_loadLayoutRulesForState:(int)arg1 withTopGap:(float)arg2 largeModuleHeight:(float)arg3 faceView:(id)arg4;
- (unsigned int)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)digitalTimeLayoutRuleForEditMode:(int)arg1;
- (id)initForDevice:(id)arg1;

@end
