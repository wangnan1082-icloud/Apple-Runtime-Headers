//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLBatchProvider.h"

__attribute__((visibility("hidden")))
@interface MLWindowedBatchProvider : NSObject <MLBatchProvider>
{
    id <MLBatchProvider> _fullBatch;
    int _startIndex;
    int _windowLength;
}

@property(nonatomic) int windowLength; // @synthesize windowLength=_windowLength;
@property(nonatomic) int startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) id <MLBatchProvider> fullBatch; // @synthesize fullBatch=_fullBatch;
- (void).cxx_destruct;
- (id)featuresAtIndex:(int)arg1;
@property(readonly, nonatomic) int count;
- (id)initWithBatch:(id)arg1 startIndex:(int)arg2 windowLength:(int)arg3 error:(id *)arg4;

@end
