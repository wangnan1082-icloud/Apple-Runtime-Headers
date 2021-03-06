//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVHSDMAPEntityKind;

@interface TVHSDMAPEntityResponseParser : NSObject
{
    unsigned long long _maxEntities;
    unsigned long long _protocol;
    TVHSDMAPEntityKind *_entityKind;
}

+ (unsigned long long)_responseTypeFromUpdateTypePayload:(id)arg1;
+ (id)_deletedEntityNonPersistentIDsFromDeletedIDsListingPayload:(id)arg1;
+ (id)_errorFromUpdateResponsePayload:(id)arg1;
+ (id)_errorFromErrorResponsePayload:(id)arg1;
@property(retain, nonatomic) TVHSDMAPEntityKind *entityKind; // @synthesize entityKind=_entityKind;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
@property(nonatomic) unsigned long long maxEntities; // @synthesize maxEntities=_maxEntities;
- (void).cxx_destruct;
- (id)_parsedResponseFromDPAPResponseCode:(unsigned int)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3;
- (unsigned int)_expectedDPAPResponseCodeForRequestType:(unsigned long long)arg1;
- (id)_parsedResponseFromDAAPResponseCode:(unsigned int)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3;
- (unsigned int)_expectedDAAPResponseCodeForRequestType:(unsigned long long)arg1;
- (id)_entitiesFromListingTagPayload:(id)arg1 entityType:(unsigned long long)arg2 browseStyleListing:(_Bool)arg3;
- (id)_parsedResponseFromResponsePayload:(id)arg1 listingCode:(unsigned int)arg2 browseStyleListing:(_Bool)arg3 entityType:(unsigned long long)arg4;
- (id)_parsedResponseFromResponseCode:(unsigned int)arg1 responsePayload:(id)arg2 requestType:(unsigned long long)arg3;
- (id)_parsedResponseFromResponseData:(id)arg1 expectedResponseCode:(unsigned int)arg2 requestType:(unsigned long long)arg3 error:(id *)arg4;
- (unsigned int)_expectedResponseCodeForRequestType:(unsigned long long)arg1;
- (id)parsedResponseFromResponse:(id)arg1 requestType:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithProtocol:(unsigned long long)arg1;
- (id)init;

@end

