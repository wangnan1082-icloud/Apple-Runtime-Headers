//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, PUOneUpSuggestion, PXContextualNotification;

__attribute__((visibility("hidden")))
@interface PUOneUpAssetSuggestionInfo : NSObject
{
    long long _state;
    NSProgress *_progress;
    PUOneUpSuggestion *_suggestion;
    PXContextualNotification *_contextualNotification;
}

@property(retain, nonatomic) PXContextualNotification *contextualNotification; // @synthesize contextualNotification=_contextualNotification;
@property(retain, nonatomic) PUOneUpSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

