//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoSetAudioTrack : SABaseClientBoundCommand
{
}

+ (id)setAudioTrackWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAudioTrack;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *languageOptionChangeUserSetting;
@property(copy, nonatomic) NSString *desiredOptionId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
