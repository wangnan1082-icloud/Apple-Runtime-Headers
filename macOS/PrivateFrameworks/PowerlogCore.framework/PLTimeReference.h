//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLTimeReference : NSObject
{
    double _offset;
    id <PLTimeReferenceManager> _timeManager;
    long long _timeReferenceType;
    NSString *_entryDefinitionKey;
}

+ (id)defaultsKeyFromEntryDefinitionKey:(id)arg1;
@property(retain) NSString *entryDefinitionKey; // @synthesize entryDefinitionKey=_entryDefinitionKey;
@property long long timeReferenceType; // @synthesize timeReferenceType=_timeReferenceType;
@property(retain) id <PLTimeReferenceManager> timeManager; // @synthesize timeManager=_timeManager;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (void)writeOffsetToDefaults;
- (id)removeTimeOffsetFromReferenceTime:(id)arg1;
- (id)addTimeOffsetToMonotonicTime:(id)arg1;
- (id)currentTime;
- (void)initializeOffsetWithEntries:(id)arg1;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3;

@end
