//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSWindow;

@protocol PreferencesViewController

@optional
+ (void)registerDefaults;
@property(readonly, nonatomic) double minimumPaneHeight;
- (void)focusDefaultViewWithHostWindow:(NSWindow *)arg1;
- (void)hostModuleWillBeRemoved;
- (void)hostModuleWillBeDisplayed;
- (void)hostModuleWasInitializedFromDefaults;
@end
