//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface RCExtAudioFilePipe : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _accessQueueID;
    struct OpaqueExtAudioFile *_audioFileRef;
    struct AudioStreamBasicDescription _outputFormatDescriptionStruct;
    struct AudioStreamBasicDescription _sourceFormatDescriptionStruct;
    NSURL *_sourceURL;
    unsigned long long _sourceFileSize;
}

@property(readonly, nonatomic) unsigned long long sourceFileSize; // @synthesize sourceFileSize=_sourceFileSize;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (void)_accessExtAudioFileWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct AudioStreamBasicDescription *outputFormatDescription;
@property(readonly, nonatomic) struct AudioStreamBasicDescription *sourceFormatDescription;
- (int)readConvertedFramesIntoBuffer:(id)arg1 requestedFrameCount:(int)arg2;
- (long long)sourceCurrentFrameIndex;
- (_Bool)seekToSourceFrameIndex:(long long)arg1;
- (long long)sourceFrameIndexForTime:(double)arg1;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 outputFrameRate:(double)arg2 outputFormatID:(unsigned int)arg3;

@end

