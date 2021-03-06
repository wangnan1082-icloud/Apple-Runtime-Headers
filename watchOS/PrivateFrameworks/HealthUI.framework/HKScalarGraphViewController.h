//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphViewController.h>

@interface HKScalarGraphViewController : HKGraphViewController
{
    float _minimumHeight;
}

@property(readonly, nonatomic) float minimumHeight; // @synthesize minimumHeight=_minimumHeight;
- (void)_setupGraphViewSelectionStyle;
- (id)_buildGraphViewWithLabelDimension:(id)arg1 labelEndings:(int)arg2;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithMinimumHeight:(float)arg1;
- (id)initWithMinimumHeight:(float)arg1 labelDimension:(id)arg2 labelEndings:(int)arg3;

@end

