//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMAccessory.h"

#import "HFHomeKitObject.h"
#import "HFRoomContextProviding.h"

@class HMRoom, NSString, NSUUID;

@interface HMAccessory (HFHomeKitObjectConformance) <HFHomeKitObject, HFRoomContextProviding>
- (_Bool)hf_isValidObject;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
