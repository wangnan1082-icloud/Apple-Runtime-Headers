//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class BSSettings, FBSSceneSettings, NSSet, NSString;

@interface FBSSceneSnapshotContext : NSObject <BSXPCCoding, BSDescriptionProviding>
{
    NSString *_sceneID;
    NSString *_name;
    FBSSceneSettings *_settings;
    struct CGRect _frame;
    float _scale;
    double _expirationInterval;
    NSSet *_layersToExclude;
    BSSettings *_clientExtendedData;
}

+ (id)contextWithSceneID:(id)arg1 settings:(id)arg2;
@property(copy, nonatomic) BSSettings *clientExtendedData; // @synthesize clientExtendedData=_clientExtendedData;
@property(nonatomic) double expirationInterval; // @synthesize expirationInterval=_expirationInterval;
@property(copy, nonatomic) NSSet *layersToExclude; // @synthesize layersToExclude=_layersToExclude;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property(readonly, copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithSceneID:(id)arg1 settings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

