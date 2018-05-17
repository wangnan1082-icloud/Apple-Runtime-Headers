//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

#import "PHAPersonBuildingJobOperationDelegate.h"

@class NSOperationQueue, NSString, PHAPersonBuildingJobOperation;

@interface PHAPersonBuildingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAPersonBuildingJobOperationDelegate>
{
    NSOperationQueue *_operationQueue;
    PHAPersonBuildingJobOperation *_personBuildingOperation;
}

- (void).cxx_destruct;
- (void)operationDidProgress:(id)arg1;
- (float)completionScore;
- (_Bool)stopJob:(id *)arg1;
- (_Bool)startJob:(id *)arg1;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
