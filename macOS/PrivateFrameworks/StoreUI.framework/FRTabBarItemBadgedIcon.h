//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface FRTabBarItemBadgedIcon : NSObject
{
    NSImage *_icon;
    struct CGRect _badgeRect;
}

@property(nonatomic) struct CGRect badgeRect; // @synthesize badgeRect=_badgeRect;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithIcon:(id)arg1 badgeRect:(struct CGRect)arg2;

@end

