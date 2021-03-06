//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIActivity.h>

#import <UIKitCore/UIManagedConfigurationRestrictableActivity-Protocol.h>
#import <UIKitCore/UIPrintInteractionControllerActivityDelegate-Protocol.h>

@class NSString, UIViewController, UIWindow;

@interface UIPrintActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPrintInteractionControllerActivityDelegate>
{
    _Bool _sourceIsManaged;
    NSString *_sourceApplicationBundleID;
    UIViewController *_wrapperViewController;
    UIWindow *_windowHoldingActivityViewController;
}

+ (unsigned int)_xpcAttributes;
@property(retain) UIWindow *windowHoldingActivityViewController; // @synthesize windowHoldingActivityViewController=_windowHoldingActivityViewController;
@property(retain) UIViewController *wrapperViewController; // @synthesize wrapperViewController=_wrapperViewController;
@property(copy, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
- (void).cxx_destruct;
- (id)printInteractionControllerWindowForPresentation:(id)arg1;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (id)printInteractionController;
- (void)cancelPrintOptions;
- (void)performActivity;
- (id)_embeddedActivityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;
- (id)_activityBundleImageConfiguration;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

