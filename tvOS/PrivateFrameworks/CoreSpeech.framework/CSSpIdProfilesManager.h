//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSSpIdProfilesManager : NSObject
{
}

+ (id)sharedInstance;
- (void)deleteSpeakerIdProfileWithIdentifier:(id)arg1 forLocale:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)importSpIdProfileFromDir:(id)arg1 forLocale:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retrainSpIdProfilesForLocale:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

