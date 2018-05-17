//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SADomainCommand.h"

#import "CFLocalAceHandling.h"

@class NSNumber, NSString;

@interface CFCLReverseGeoCode : SADomainCommand <CFLocalAceHandling>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)command;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *latitude;
@property(copy, nonatomic) NSNumber *longitude;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
