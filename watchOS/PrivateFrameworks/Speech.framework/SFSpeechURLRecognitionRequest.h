//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Speech/SFSpeechRecognitionRequest.h>

@class NSURL;

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest
{
    NSURL *_URL;
}

@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(int)arg3 requestIdentifier:(id)arg4;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

