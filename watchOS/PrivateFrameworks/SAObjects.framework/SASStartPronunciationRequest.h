//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SASStartSpeech.h>

@class SASPronunciationContext;

@interface SASStartPronunciationRequest : SASStartSpeech
{
}

+ (id)startPronunciationRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startPronunciationRequest;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SASPronunciationContext *context;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
