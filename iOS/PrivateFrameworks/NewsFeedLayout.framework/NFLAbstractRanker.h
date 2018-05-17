//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NFLAbstractCellPropertyProvider, NFLFeedSettings, NSString;

@interface NFLAbstractRanker : NSObject
{
    NFLAbstractRanker *_nextRanker;
    NFLFeedSettings *_feedSettings;
    NFLAbstractCellPropertyProvider *_propertyProvider;
}

@property(retain, nonatomic) NFLAbstractCellPropertyProvider *propertyProvider; // @synthesize propertyProvider=_propertyProvider;
@property(nonatomic) __weak NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(retain, nonatomic) NFLAbstractRanker *nextRanker; // @synthesize nextRanker=_nextRanker;
- (void).cxx_destruct;
- (double)_applyRanksForCardWithLayoutData:(id)arg1 tileInfo:(id)arg2 successfulRankCount:(long long *)arg3 veto:(_Bool *)arg4 rankerDictionary:(id)arg5;
@property(readonly, nonatomic) long long rankerWeight;
@property(readonly, nonatomic) NSString *rankerName;
- (double)rankLayoutData:(id)arg1 withTileInfo:(id)arg2 veto:(_Bool *)arg3;
- (id)rankedLayoutForLayoutData:(id)arg1 withTileInfo:(id)arg2;
- (id)initWithFeedSettings:(id)arg1;

@end
