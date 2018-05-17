//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSAudioFileManager : NSObject
{
}

+ (void)pruneNumberOfLogFilesTo:(unsigned long long)arg1;
+ (void)removeLogFilesOlderThanNDays:(float)arg1;
+ (id)_getDateLabel;
+ (id)_createAudioFileWriterWithLoggingDir:(id)arg1 inputFormat:(struct AudioStreamBasicDescription)arg2 outputFormat:(struct AudioStreamBasicDescription)arg3;
+ (id)_createTempAudioFileWriterWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (id)createAudioFileWriterFromWithInputFormat:(struct AudioStreamBasicDescription)arg1 outputFormat:(struct AudioStreamBasicDescription)arg2;
+ (void)_readDataFromFileHandle:(id)arg1 toFileHandle:(id)arg2;
+ (void)generateDeviceAudioLogging:(id)arg1 numChannels:(unsigned int)arg2 speechId:(id)arg3;
+ (id)_sharedAudioLoggingQueue;

@end
