//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/_SFActivity.h>

@class SFCustomActivityProxy;

__attribute__((visibility("hidden")))
@interface SFHostApplicationCustomActivity : _SFActivity
{
    SFCustomActivityProxy *_activityProxy;
}

@property(readonly, nonatomic) SFCustomActivityProxy *activityProxy; // @synthesize activityProxy=_activityProxy;
- (void).cxx_destruct;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithActivityProxy:(id)arg1;

@end
