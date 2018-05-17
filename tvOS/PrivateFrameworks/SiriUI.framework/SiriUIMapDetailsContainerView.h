//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SiriUIMapDetailsContainerView : UIView
{
    _Bool _autoCenteringDisabled;
    UIView *_detailsView;
    UIView *_mapView;
    double _centerMargin;
    struct UIEdgeInsets _backgroundInsets;
}

@property(nonatomic) struct UIEdgeInsets backgroundInsets; // @synthesize backgroundInsets=_backgroundInsets;
@property(nonatomic) double centerMargin; // @synthesize centerMargin=_centerMargin;
@property(nonatomic) _Bool autoCenteringDisabled; // @synthesize autoCenteringDisabled=_autoCenteringDisabled;
@property(retain, nonatomic) UIView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIView *detailsView; // @synthesize detailsView=_detailsView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
