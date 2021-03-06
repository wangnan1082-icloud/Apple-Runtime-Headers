//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SASyncGetAnchors : SABaseClientBoundCommand <SAServerBoundCommand>
{
}

+ (id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getAnchors;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *watchAppMetaDataList;
@property(copy, nonatomic) NSString *syncReason;
@property(copy, nonatomic) NSArray *sources;
@property(nonatomic) _Bool includeAllKnownAnchors;
@property(copy, nonatomic) NSDictionary *customVocabSources;
@property(copy, nonatomic) NSArray *appMetaDataList;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

