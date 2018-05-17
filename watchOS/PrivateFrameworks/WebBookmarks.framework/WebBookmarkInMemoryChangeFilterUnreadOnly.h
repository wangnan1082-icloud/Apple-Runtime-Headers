//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebBookmarkInMemoryChangeFilter.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WebBookmarkInMemoryChangeFilterUnreadOnly : NSObject <WebBookmarkInMemoryChangeFilter>
{
}

- (id)_bookmarksIDsFromBookmarks:(id)arg1 fromChangeSet:(id)arg2 withFilter:(CDUnknownBlockType)arg3;
- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;
- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
