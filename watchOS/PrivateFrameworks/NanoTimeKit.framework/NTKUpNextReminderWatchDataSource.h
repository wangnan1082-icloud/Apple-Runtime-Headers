//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUpNextReminderBaseDataSource.h>

@class NRKReminderStore;

@interface NTKUpNextReminderWatchDataSource : NTKUpNextReminderBaseDataSource
{
    NRKReminderStore *_reminderStore;
}

- (void).cxx_destruct;
- (_Bool)_isReminderDueInToday:(id)arg1;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_reminderStoreChangedNotification;
- (void)pause;
- (void)resume;

@end
