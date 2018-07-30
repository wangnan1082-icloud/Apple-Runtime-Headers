//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iAd/ADActionViewController.h>

#import "EKEventEditViewDelegate.h"

@class ADEventEditViewController, ADHomeButtonHandler, EKEvent, NSString;

@interface ADCalendarEventActionViewController : ADActionViewController <EKEventEditViewDelegate>
{
    ADHomeButtonHandler *_homeButtonHandler;
    EKEvent *_calendarEvent;
    ADEventEditViewController *_eventKitEditViewController;
}

@property(retain, nonatomic) ADEventEditViewController *eventKitEditViewController; // @synthesize eventKitEditViewController=_eventKitEditViewController;
@property(retain, nonatomic) EKEvent *calendarEvent; // @synthesize calendarEvent=_calendarEvent;
@property(retain, nonatomic) ADHomeButtonHandler *homeButtonHandler; // @synthesize homeButtonHandler=_homeButtonHandler;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)clientApplicationDidEnterBackground;
- (void)dismiss;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didSetAdSpace;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
