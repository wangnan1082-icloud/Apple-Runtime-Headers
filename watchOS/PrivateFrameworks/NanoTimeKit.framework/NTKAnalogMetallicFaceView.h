//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogMetallicFaceView : NTKAnalogVideoFaceView
{
    _Bool _shouldApplyTransform;
    unsigned int _currentMetallicColor;
    unsigned int _currentDialShape;
    NSDictionary *_dataSources;
}

@property(retain, nonatomic) NSDictionary *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) unsigned int currentDialShape; // @synthesize currentDialShape=_currentDialShape;
@property(nonatomic) unsigned int currentMetallicColor; // @synthesize currentMetallicColor=_currentMetallicColor;
- (void).cxx_destruct;
- (void)reloadDataSources;
- (void)setupDataSources;
- (void)_updateDialSize;
- (void)_applyVideoPlayerTransform;
- (id)imageForEditOption:(id)arg1;
- (void)_customizeVideoPlayerOnSetup;
- (void)_handleEitherScreenWake;
- (void)setOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (id)_editOptionThatHidesAllComplications;

@end

