//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUISApplicationPlaceholderContent, NSString, PUICApplicationStatusBarItem;

@interface CUISApplicationPlaceholderItem : NSObject
{
    _Bool _statusBarHidden;
    CUISApplicationPlaceholderContent *_placeholderContent;
    PUICApplicationStatusBarItem *_statusBarItem;
    NSString *_overrideTimeText;
}

@property(nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(copy, nonatomic) NSString *overrideTimeText; // @synthesize overrideTimeText=_overrideTimeText;
@property(retain, nonatomic) PUICApplicationStatusBarItem *statusBarItem; // @synthesize statusBarItem=_statusBarItem;
@property(retain, nonatomic) CUISApplicationPlaceholderContent *placeholderContent; // @synthesize placeholderContent=_placeholderContent;
- (void).cxx_destruct;

@end

