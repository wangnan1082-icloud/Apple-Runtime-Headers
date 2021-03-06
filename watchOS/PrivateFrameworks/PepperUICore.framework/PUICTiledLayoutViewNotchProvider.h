//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICScrollViewNotchProvider.h>

@class NSMutableSet, NSSet, PUICTiledLayoutView;

@interface PUICTiledLayoutViewNotchProvider : PUICScrollViewNotchProvider
{
    NSMutableSet *_notches;
    PUICTiledLayoutView *_tiledLayoutView;
    NSSet *_viewFrames;
    float _firstNotchOffset;
}

@property(nonatomic) float firstNotchOffset; // @synthesize firstNotchOffset=_firstNotchOffset;
@property(retain, nonatomic) NSSet *viewFrames; // @synthesize viewFrames=_viewFrames;
@property(nonatomic) __weak PUICTiledLayoutView *tiledLayoutView; // @synthesize tiledLayoutView=_tiledLayoutView;
@property(retain, nonatomic) NSMutableSet *notches; // @synthesize notches=_notches;
- (void).cxx_destruct;
- (void)updateNotchProviderOffsetsIfNecessary;
- (void)reloadData;
- (void)configureMinorDetentsBasedOnResultingNotches;
- (void)generateNotches;
- (void)generateNotchesWithViewFrames:(id)arg1;
- (_Bool)shouldGenerateNotches;
- (id)initWithTiledLayoutView:(id)arg1;

@end

