//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _DKEventStream, _DKKnowledgeStore;

@interface PRSCoreDuet : NSObject
{
    _DKKnowledgeStore *_knowledgeStore;
    _DKEventStream *_spotlightStream;
}

@property(retain) _DKEventStream *spotlightStream; // @synthesize spotlightStream=_spotlightStream;
@property(retain) _DKKnowledgeStore *knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void).cxx_destruct;
- (void)addResultCategoryAndGroupToHistory:(id)arg1 groupName:(id)arg2 error:(id)arg3;
- (id)getRankedCategoriesDictionaryWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2;
- (id)initWithStreamName:(id)arg1;

@end

