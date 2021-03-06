//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicTableViewSelectableHeaderFooterView.h>

#import <FuseUI/MusicEntityContentDescriptorViewConfiguring-Protocol.h>
#import <FuseUI/MusicEntityHorizontalLockupViewDelegate-Protocol.h>

@class MusicEntityHorizontalLockupView, MusicEntityViewContentDescriptor, NSString;
@protocol MusicEntityValueProviding;

@interface MusicEntityHorizontalLockupTableViewHeaderFooterView : MusicTableViewSelectableHeaderFooterView <MusicEntityHorizontalLockupViewDelegate, MusicEntityContentDescriptorViewConfiguring>
{
    MusicEntityHorizontalLockupView *_lockupView;
}

+ (Class)lockupViewClass;
+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
@property(readonly, nonatomic) MusicEntityHorizontalLockupView *lockupView; // @synthesize lockupView=_lockupView;
- (void).cxx_destruct;
- (void)updateForAsynchronousPropertyLoadCompleted;
@property(retain, nonatomic) id <MusicEntityValueProviding> entityValueProvider;
- (void)setEntityDisabled:(_Bool)arg1;
@property(retain, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

