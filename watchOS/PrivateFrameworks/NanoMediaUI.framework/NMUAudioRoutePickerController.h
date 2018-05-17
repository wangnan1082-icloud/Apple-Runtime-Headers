//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUICActionSheetControllerDelegate.h"

@class NMUAirPlayActionController, NSString;

@interface NMUAudioRoutePickerController : NSObject <PUICActionSheetControllerDelegate>
{
    CDUnknownBlockType _completionHandler;
    NMUAirPlayActionController *_airPlayActionController;
}

+ (void)_deregisterRoutePickerController:(id)arg1;
+ (void)_registerRoutePickerController:(id)arg1;
+ (id)_registeredRoutePickerControllers;
+ (void)presentRoutePickerFromViewController:(id)arg1 forOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)presentRoutePickerIfNecessaryFromViewController:(id)arg1 forOrigin:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)presentRoutePickerIfNecessaryFromViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)actionSheetController:(id)arg1 didDismissWithActionAtIndexPath:(id)arg2;
- (id)_initWithOrigin:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
