//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationDataSource.h>

@interface NTKSiriComplicationDataSource : NTKComplicationDataSource
{
    _Bool _forceHero;
    _Bool _siriEnabled;
}

+ (_Bool)acceptsComplicationFamily:(int)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned int)arg1 forDevice:(id)arg2;
- (void)siriPreferencesChanged;
- (void)sensitiveUIStateChanged;
- (id)_siriAnimationProviderForceHero:(_Bool)arg1;
- (void)_invalidate;
- (id)_animatingTemplateForceHero:(_Bool)arg1;
- (void)_showSiriDisabledDialog;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)didTouchUpInside;
- (void)didTouchDown;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithComplication:(id)arg1 family:(int)arg2 forDevice:(id)arg3;

@end

