//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

@class NSStackView;

@interface LUI2ButtonViewController : LUI2ViewController
{
    NSStackView *_stackView;
}

@property NSStackView *stackView; // @synthesize stackView=_stackView;
- (void)viewDidLoad;
- (void)loadView;
- (void)addButton:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)_updateBlendingMode:(id)arg1;

@end
