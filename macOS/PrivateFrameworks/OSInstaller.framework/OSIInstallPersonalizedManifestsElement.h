//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallElement.h>

@class OSIPersonalizedManifests;

@interface OSIInstallPersonalizedManifestsElement : OSIInstallElement
{
    OSIPersonalizedManifests *_personalizedManifests;
}

@property(retain) OSIPersonalizedManifests *personalizedManifests; // @synthesize personalizedManifests=_personalizedManifests;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 personalizedManifests:(id)arg2;

@end
