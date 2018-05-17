//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNObserverHashTable, MNSettings;

__attribute__((visibility("hidden")))
@interface MNSettingsManager : NSObject
{
    MNSettings *_settings;
    MNObserverHashTable *_observers;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) MNSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)_setVolumeFromDefaults;
- (void)updateForSettings:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

@end
