//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet;

@interface SKUISettingsDescriptionUpdate : NSObject
{
    NSArray *_indexPaths;
    NSIndexSet *_indexSet;
    long long _updateType;
}

@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(retain, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
@property(retain, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
- (void).cxx_destruct;
- (id)initWithUpdateType:(long long)arg1;

@end
