//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex;

@interface INUpcomingMediaManager : NSObject
{
    CSSearchableIndex *_index;
}

+ (id)sharedManager;
+ (id)mediaQueue;
@property(readonly, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)keyWithMediaItemTypeName:(id)arg1 bundleId:(id)arg2;
- (int)_predictionModeForBundleId:(id)arg1 type:(int)arg2 error:(id *)arg3;
- (void)setPredictionMode:(int)arg1 forType:(int)arg2;
- (void)_replaceMediaIntents:(id)arg1;
- (void)setSuggestedMediaIntents:(id)arg1;
- (id)initWithSearchableIndex:(id)arg1;

@end

