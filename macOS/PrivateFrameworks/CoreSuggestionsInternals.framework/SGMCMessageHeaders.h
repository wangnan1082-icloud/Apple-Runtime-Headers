//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGHeaderCollection.h"

@class NSArray, NSString;

@interface SGMCMessageHeaders : NSObject <SGHeaderCollection>
{
    id _mcHeaders;
    NSArray *_allHeaderKeys;
}

@property(readonly) NSArray *allHeaderKeys; // @synthesize allHeaderKeys=_allHeaderKeys;
- (void).cxx_destruct;
- (id)headersForKey:(id)arg1;
- (id)_headersForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)addressListForKey:(id)arg1;
- (id)firstMessageIDForKey:(id)arg1;
- (id)initWithMcHeaders:(id)arg1;
- (id)sg_firstHeaderForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
