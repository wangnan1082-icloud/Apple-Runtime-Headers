//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUIController.h>

@class LUITextField, NSDateFormatter, NSTimer;

@interface LUITimeStatusController : LUIController
{
    LUITextField *_timeTextField;
    NSDateFormatter *_timeFormatter;
    NSTimer *_clockTimer;
    NSTimer *_dstTimer;
}

+ (id)controllerWithStyle:(int)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)tearDownController;
- (void)resumeController;
- (void)pauseController;
- (void)_setupContentView;
- (id)attributedStringFont;
- (void)_timePressed:(id)arg1;
- (id)_userTimeFormat;
- (void)_dstTick:(id)arg1;
- (void)_clockTick:(id)arg1;
- (id)_nextDSTFireDate;

@end
