//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@protocol _CPSearchViewAppearFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasReaderTextAvailable;
@property(nonatomic) _Bool readerTextAvailable;
@property(readonly, nonatomic) _Bool hasIsOverApp;
@property(nonatomic) _Bool isOverApp;
@property(readonly, nonatomic) _Bool hasIsOnLockScreen;
@property(nonatomic) _Bool isOnLockScreen;
@property(readonly, nonatomic) _Bool hasViewAppearEvent;
@property(nonatomic) int viewAppearEvent;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
