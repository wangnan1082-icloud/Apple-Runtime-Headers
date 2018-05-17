//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ServerDocsProtocol/DCCachedItem.h>

#import "DCCachedDirectory.h"

@class NSArray;

@interface DCCachedDirectory : DCCachedItem <DCCachedDirectory>
{
}

+ (id)_contentsWithFixedConstantsFromContentsPropertyListData:(id)arg1;
- (id)_fileSystemMetadataWithoutNeedingLocking;
- (id)_parentContentsMetadataForChildAtRelativePath:(id)arg1;
@property(readonly, retain) NSArray *localItems;
@property(readonly, retain) NSArray *contents;
- (_Bool)isDropBox;
- (id)_directoryPath;
- (id)_localGenerationIdentifierFullPath;
- (id)_localGenerationIdentifier;
- (id)_contentsFullPath;

@end
