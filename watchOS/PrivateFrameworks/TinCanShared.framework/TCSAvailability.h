//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSManager, NSUserDefaults;

@interface TCSAvailability : NSObject
{
    NSUserDefaults *_tinCanDefaults;
    NPSManager *_npsManager;
    _Bool _shouldObserveUnavailabilityDefaultChanges;
    _Bool _shouldShowStatusIndicator;
}

+ (_Bool)shouldShowWalkieTalkieStatusIndicator;
+ (void)setUserAvailable:(_Bool)arg1;
+ (_Bool)isUserAvailable;
+ (id)sharedInstance;
@property(nonatomic) _Bool shouldShowStatusIndicator; // @synthesize shouldShowStatusIndicator=_shouldShowStatusIndicator;
@property(nonatomic) _Bool shouldObserveUnavailabilityDefaultChanges; // @synthesize shouldObserveUnavailabilityDefaultChanges=_shouldObserveUnavailabilityDefaultChanges;
- (void).cxx_destruct;
- (id)_unavailabilityText:(_Bool)arg1;
- (void)_postNotificationName:(id)arg1;
- (_Bool)_calculateShouldShowStatusIndicator;
- (void)_setUserUnavailable:(_Bool)arg1;
- (_Bool)_isUserUnavailable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

