//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOSearchAttributionServerProxy-Protocol.h>

@class GEOSearchAttributionManifest, NSLock, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy>
{
    NSObject<OS_dispatch_queue> *_attributionQueue;
    GEOSearchAttributionManifest *_attributionManifest;
    NSLock *_attributionManifestLock;
    int _attributionManifestUpdatedToken;
}

- (void).cxx_destruct;
- (void)_loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_attributionManifest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

