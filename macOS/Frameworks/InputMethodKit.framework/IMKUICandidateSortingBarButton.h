//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@interface IMKUICandidateSortingBarButton : NSButton
{
    BOOL _isRadarButton;
    BOOL _mousePointerInside;
    long long _trackingRectTag;
}

+ (id)standardBackgroundColor;
@property(nonatomic) long long trackingRectTag; // @synthesize trackingRectTag=_trackingRectTag;
@property(nonatomic) BOOL mousePointerInside; // @synthesize mousePointerInside=_mousePointerInside;
@property(nonatomic) BOOL isRadarButton; // @synthesize isRadarButton=_isRadarButton;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

