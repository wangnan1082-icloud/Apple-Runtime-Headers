//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreML/MLClassifier.h>

@class MLSVMEngine;

@interface MLSupportVectorClassifier : MLClassifier
{
    MLSVMEngine *_engine;
}

+ (id)featureValueWithObject:(id)arg1;
@property(retain) MLSVMEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

@end

