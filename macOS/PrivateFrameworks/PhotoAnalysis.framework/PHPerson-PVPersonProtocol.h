//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHPerson.h>

#import <PhotoAnalysis/PVPersonProtocol-Protocol.h>

@class NSString;
@protocol PVFaceProtocol;

@interface PHPerson (PVPersonProtocol) <PVPersonProtocol>
- (void)pv_addMergeCandidatePersons:(id)arg1;
@property(retain, nonatomic) id <PVFaceProtocol> keyFace;
@property(nonatomic) long long manualOrder;
@property(nonatomic) BOOL isVerified; // @dynamic isVerified;
@property(readonly, nonatomic) BOOL favorite;
@property(readonly, nonatomic) BOOL hidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long faceCount;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long verifiedType;
@end

