//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface ASSearchStore : ASItem
{
    NSNumber *_status;
    NSNumber *_total;
    NSString *_range;
    NSMutableArray *_mResults;
}

+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *mResults; // @synthesize mResults=_mResults;
@property(copy, nonatomic) NSString *range; // @synthesize range=_range;
@property(copy, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)asParseRules;
- (void)addResult:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *results;

@end

