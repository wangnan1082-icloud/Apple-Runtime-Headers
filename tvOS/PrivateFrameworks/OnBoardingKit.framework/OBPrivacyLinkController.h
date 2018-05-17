//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSString, OBBundle, OBPrivacyFlow;

@interface OBPrivacyLinkController : UIViewController
{
    NSArray *_bundles;
    NSArray *_bundleIdentifiers;
    _Bool _displayIcon;
    _Bool _displayLargeIcon;
    _Bool _displayCaptionText;
    _Bool _allowsOpeningSafari;
    NSString *_displayLanguage;
}

+ (id)linkWithBundleIdentifier:(id)arg1;
+ (id)linkWithBundleIdentifiers:(id)arg1;
+ (Class)_platformSpecificClass;
@property _Bool allowsOpeningSafari; // @synthesize allowsOpeningSafari=_allowsOpeningSafari;
@property(retain) NSString *displayLanguage; // @synthesize displayLanguage=_displayLanguage;
@property _Bool displayCaptionText; // @synthesize displayCaptionText=_displayCaptionText;
@property _Bool displayLargeIcon; // @synthesize displayLargeIcon=_displayLargeIcon;
@property _Bool displayIcon; // @synthesize displayIcon=_displayIcon;
- (void).cxx_destruct;
- (void)linkPressed;
- (void)setLinkEnabled:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
@property(readonly) OBPrivacyFlow *flow;
@property(readonly) NSArray *bundles;
@property(readonly) OBBundle *bundle;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithPrivacyBundle:(id)arg1;

@end
