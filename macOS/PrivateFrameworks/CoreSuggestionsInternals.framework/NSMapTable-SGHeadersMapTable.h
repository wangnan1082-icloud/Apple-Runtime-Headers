//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMapTable.h"

#import "SGHeaderCollection.h"

@class NSString;

@interface NSMapTable (SGHeadersMapTable) <SGHeaderCollection>
+ (id)sg_headerValueFunctions;
+ (id)sg_headerKeyFunctions;
- (id)sg_firstHeaderForKey:(id)arg1;
- (void)sg_addEntriesFromHeadersDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
