//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PASampleTaskData;

@interface PATimestampIndexedSampleTask : NSObject
{
    unsigned long long _lastTimestampIndex;
    PASampleTaskData *_sampleTask;
}

@property(readonly) PASampleTaskData *sampleTask; // @synthesize sampleTask=_sampleTask;
@property unsigned long long lastTimestampIndex; // @synthesize lastTimestampIndex=_lastTimestampIndex;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;

@end
