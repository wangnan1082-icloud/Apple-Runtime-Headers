//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSDictionary;

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand
{
}

+ (id)preSynthesizeTTSWithDictionary:(id)arg1 context:(id)arg2;
+ (id)preSynthesizeTTS;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSDictionary *speakableContextInfo;
@property(copy, nonatomic) NSArray *dialogStrings;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
