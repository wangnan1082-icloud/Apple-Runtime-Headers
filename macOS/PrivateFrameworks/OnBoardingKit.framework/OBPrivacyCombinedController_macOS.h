//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBPrivacyCombinedController.h>

@class NSArray, OBPrivacySplashController;

@interface OBPrivacyCombinedController_macOS : OBPrivacyCombinedController
{
    OBPrivacySplashController *splashController;
    NSArray *_bundleIdentifiers;
}

- (void).cxx_destruct;
- (void)processBundles:(id)arg1;
- (void)reloadWindow;
- (id)initWithIdentifiers:(id)arg1;
- (id)init;

@end

