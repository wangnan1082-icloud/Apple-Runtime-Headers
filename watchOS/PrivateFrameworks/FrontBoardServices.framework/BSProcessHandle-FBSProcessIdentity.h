//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSProcessHandle.h>

#import <FrontBoardServices/FBSProcessIdentity-Protocol.h>

@class BSMachPortTaskNameRight, FBSProcessHandle, NSString;

@interface BSProcessHandle (FBSProcessIdentity) <FBSProcessIdentity>
@property(readonly, retain, nonatomic) FBSProcessHandle *handle;
@property(readonly, nonatomic) int type;
- (_Bool)_fbs_isApplication;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSString *jobLabel; // @dynamic jobLabel;
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) int pid;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight; // @dynamic taskNameRight;
@end

