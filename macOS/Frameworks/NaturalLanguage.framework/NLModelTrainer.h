//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NLDataSet, NLModel, NLModelConfiguration, NSDictionary;

@interface NLModelTrainer : NSObject
{
    NLModelConfiguration *_configuration;
    NLDataSet *_dataSet;
    NSDictionary *_options;
    NLModel *_model;
    id <NLModelTrainerDelegate> _delegate;
    BOOL _delegateRespondsToLogMessage;
    BOOL _delegateRespondsToShouldStop;
}

+ (id)modelTrainerWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4;
- (void).cxx_destruct;
- (BOOL)trainerShouldStop:(id)arg1;
- (BOOL)shouldStop;
- (void)trainer:(id)arg1 logMessage:(id)arg2;
- (void)logMessage:(id)arg1;
@property(readonly, copy) NSDictionary *testResults;
@property(readonly, copy) NLModel *trainedModel;
- (void)setModel:(id)arg1;
- (id)model;
- (void)trainModel;
- (Class)modelImplClass;
@property(readonly) id <NLModelTrainerDelegate> delegate;
@property(readonly, copy) NSDictionary *options;
@property(readonly) NLDataSet *dataSet;
@property(readonly, copy) NLModelConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4;

@end
