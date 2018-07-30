//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier, UIViewController;

@interface STEnableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
{
    PSSpecifier *_setupScreenTimeSpecifier;
    UIViewController *_rootViewController;
}

+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;
@property(retain) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain) PSSpecifier *setupScreenTimeSpecifier; // @synthesize setupScreenTimeSpecifier=_setupScreenTimeSpecifier;
- (void).cxx_destruct;
- (void)saveValuesForModel:(id)arg1;
- (void)setupScreenTime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end
