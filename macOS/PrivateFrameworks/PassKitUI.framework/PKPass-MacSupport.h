//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PKPass.h"

@class NSImage, NSString;

@interface PKPass (MacSupport)
- (id)sharingItemURL;
@property(readonly) NSString *windowTitle;
@property(readonly) struct CGSize windowSize;
@property(readonly) NSImage *icon;
@property(nonatomic) BOOL ubiquitous;
- (id)ubiquitousFilename;
@end
