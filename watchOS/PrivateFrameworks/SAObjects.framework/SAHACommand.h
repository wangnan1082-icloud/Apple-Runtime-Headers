//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SAConditionallyMutatingClientBoundCommand-Protocol.h>

@class NSArray, NSNumber, NSString, SAHAFilter;

@interface SAHACommand : SADomainCommand <SAConditionallyMutatingClientBoundCommand>
{
}

+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)command;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *serverValidity;
@property(nonatomic) _Bool mutatingCommand;
@property(retain, nonatomic) SAHAFilter *filter;
@property(copy, nonatomic) NSNumber *commandTimeout;
@property(copy, nonatomic) NSArray *actions;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

