//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSURL;

@interface CSAudioFileLog : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueExtAudioFile *_audioFile;
    struct AudioStreamBasicDescription _asbd;
    NSURL *_url;
    unsigned int _audioLength;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)stopRecording;
- (void)appendAudioData:(id)arg1;
- (void)startRecording;
- (void)_closeAudioFile;
- (void)dealloc;
- (id)init;

@end
