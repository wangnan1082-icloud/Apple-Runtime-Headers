//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSAction.h"

@class FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestAction : BSAction
{
}

- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
@property(readonly, retain, nonatomic) FBSSceneSnapshotContext *context;
@property(readonly, nonatomic) unsigned int type;
- (id)initWithType:(unsigned int)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
