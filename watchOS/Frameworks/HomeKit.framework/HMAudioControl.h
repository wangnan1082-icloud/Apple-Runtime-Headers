//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/_HMAudioControlDelegate-Protocol.h>

@class HMMediaSession, NSString, NSUUID, _HMAudioControl;
@protocol HMAudioControlDelegate;

@interface HMAudioControl : NSObject <_HMAudioControlDelegate, HMObjectMerge>
{
    id <HMAudioControlDelegate> _delegate;
    HMMediaSession *_mediaSession;
    _HMAudioControl *_audioControl;
}

@property(retain, nonatomic) _HMAudioControl *audioControl; // @synthesize audioControl=_audioControl;
@property __weak HMMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property __weak id <HMAudioControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioControl:(id)arg1 didUpdateMuted:(_Bool)arg2;
- (void)audioControl:(id)arg1 didUpdateVolume:(float)arg2;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)updateMuted:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVolume:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(getter=isMuted) _Bool muted;
@property float volume;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)__configureWithContext:(id)arg1;
- (id)initWithMediaSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

