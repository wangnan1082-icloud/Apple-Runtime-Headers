//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NanoContactsUI/NCABAvatarViewController-Protocol.h>
#import <NanoContactsUI/NCABAvatarViewController_Private-Protocol.h>

@class CNContactStore, NSArray, NSString, PRPersonaStore;

@interface NCABAvatarViewController : UIViewController <NCABAvatarViewController_Private, NCABAvatarViewController>
{
}

+ (Class)defaultImplementation;
- (id)initWithSettings:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)descriptorForRequiredKeys;

// Remaining properties
@property(readonly, nonatomic) CNContactStore *contactStore; // @dynamic contactStore;
@property(copy, nonatomic) NSArray *contacts; // @dynamic contacts;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) PRPersonaStore *personaStore; // @dynamic personaStore;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled; // @dynamic threeDTouchEnabled;

@end

