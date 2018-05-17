//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAbstractNetworkArtworkDataSource.h"

@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
}

+ (id)bestArtworkSizes;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)_urlForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (id)supportedSizesForCatalog:(id)arg1;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;

@end
