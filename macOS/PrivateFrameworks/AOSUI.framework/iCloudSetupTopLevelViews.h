//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSTextField, NSView;

@interface iCloudSetupTopLevelViews : NSObject
{
    BOOL _servicesEnable;
    BOOL _FMMEnable;
    NSView *_setupWithFMM;
    NSView *_setupWithOutFMM;
    NSButton *_serivesEnableButton;
    NSButton *_serivesEnableButtonInWithOutFMM;
    NSButton *_FMMEnableButton;
    NSTextField *_setupWithFMMAppsTitle;
    NSTextField *_setupWithFMMAppsDescription;
    NSTextField *_setupWithFMMFMMTitle;
    NSTextField *_setupWithFMMFMMDescription;
    NSTextField *_setupWithOutFMMAppsTitle;
    NSTextField *_setupWithOutFMMAppsDescription;
    NSTextField *_FMMNotAvailibleRecoveryUpdateTitle;
    NSTextField *_FMMNotAvailibleRecoveryUpdateText;
    NSTextField *_FMMNotAvailibleNoRecoveryTitle;
}

+ (id)sharedTopLevelViews;
@property(retain) NSTextField *FMMNotAvailibleNoRecoveryTitle; // @synthesize FMMNotAvailibleNoRecoveryTitle=_FMMNotAvailibleNoRecoveryTitle;
@property(retain) NSTextField *FMMNotAvailibleRecoveryUpdateText; // @synthesize FMMNotAvailibleRecoveryUpdateText=_FMMNotAvailibleRecoveryUpdateText;
@property(retain) NSTextField *FMMNotAvailibleRecoveryUpdateTitle; // @synthesize FMMNotAvailibleRecoveryUpdateTitle=_FMMNotAvailibleRecoveryUpdateTitle;
@property(retain) NSTextField *setupWithOutFMMAppsDescription; // @synthesize setupWithOutFMMAppsDescription=_setupWithOutFMMAppsDescription;
@property(retain) NSTextField *setupWithOutFMMAppsTitle; // @synthesize setupWithOutFMMAppsTitle=_setupWithOutFMMAppsTitle;
@property(retain) NSTextField *setupWithFMMFMMDescription; // @synthesize setupWithFMMFMMDescription=_setupWithFMMFMMDescription;
@property(retain) NSTextField *setupWithFMMFMMTitle; // @synthesize setupWithFMMFMMTitle=_setupWithFMMFMMTitle;
@property(retain) NSTextField *setupWithFMMAppsDescription; // @synthesize setupWithFMMAppsDescription=_setupWithFMMAppsDescription;
@property(retain) NSTextField *setupWithFMMAppsTitle; // @synthesize setupWithFMMAppsTitle=_setupWithFMMAppsTitle;
@property(retain) NSButton *FMMEnableButton; // @synthesize FMMEnableButton=_FMMEnableButton;
@property(retain) NSButton *serivesEnableButtonInWithOutFMM; // @synthesize serivesEnableButtonInWithOutFMM=_serivesEnableButtonInWithOutFMM;
@property(retain) NSButton *serivesEnableButton; // @synthesize serivesEnableButton=_serivesEnableButton;
@property(retain) NSView *setupWithOutFMM; // @synthesize setupWithOutFMM=_setupWithOutFMM;
@property(retain) NSView *setupWithFMM; // @synthesize setupWithFMM=_setupWithFMM;
@property BOOL FMMEnable; // @synthesize FMMEnable=_FMMEnable;
@property BOOL servicesEnable; // @synthesize servicesEnable=_servicesEnable;
- (void)reEnable;
- (id)init;

@end

