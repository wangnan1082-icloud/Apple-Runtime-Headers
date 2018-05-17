//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTDataProviderEvent.h>

@class NSMutableArray, RTDefaultsManager, RTLocationTagger;

@interface RTDataProviderDuet : RTDataProviderEvent
{
    RTLocationTagger *_locationTagger;
    RTDefaultsManager *_defaultsManager;
    NSMutableArray *_duetHelpers;
}

@property(retain, nonatomic) NSMutableArray *duetHelpers; // @synthesize duetHelpers=_duetHelpers;
- (void).cxx_destruct;
- (void)_purge;
- (void)_destroyDuetHelpers;
- (void)_createDuetHelpersWithEventStreamTypes:(id)arg1;
- (id)supportedEventStreams;
- (id)duetHelperForDuetEventStream:(long long)arg1;
- (void)shutdown;
- (id)initWithPurgeManager:(id)arg1 locationTagger:(id)arg2 defaultsManager:(id)arg3;
- (id)init;

@end
