//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class BSSettings, FBSSceneSettings, NSDate, NSSet, NSString;

@interface FBSceneSnapshotContext : NSObject <BSDescriptionProviding>
{
    NSString *_sceneID;
    struct CGRect _frame;
    _Bool _opaque;
    NSSet *_layersToExclude;
    FBSSceneSettings *_settings;
    int _orientation;
    NSDate *_expirationDate;
    float _scale;
    BSSettings *_clientExtendedData;
}

+ (id)contextWithFBSContext:(id)arg1;
@property(copy, nonatomic) BSSettings *clientExtendedData; // @synthesize clientExtendedData=_clientExtendedData;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSSet *layersToExclude; // @synthesize layersToExclude=_layersToExclude;
@property(copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithFBSContext:(id)arg1;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

