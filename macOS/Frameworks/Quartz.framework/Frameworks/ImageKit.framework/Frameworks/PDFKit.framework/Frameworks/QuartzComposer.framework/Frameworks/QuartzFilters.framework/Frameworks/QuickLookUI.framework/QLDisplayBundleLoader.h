//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QLDisplayBundleLoader : NSObject
{
    NSMutableDictionary *_displayBundlesById;
}

+ (id)sharedLoader;
+ (BOOL)useBlankDisplayBundleForPerformanceTesting;
- (id)newPreviewDocumentDisplayBundleForPreview:(struct __QLPreview *)arg1;
- (id)displayBundleForPreview:(struct __QLPreview *)arg1 owner:(id)arg2 forcedDisplayBundleID:(id)arg3;
- (id)displayBundleForPreview:(struct __QLPreview *)arg1 owner:(id)arg2;
- (Class)displayBundleClassForDisplayBundleID:(id)arg1;
- (Class)loadDisplayBundle:(id)arg1;
- (void)registerDisplayBundle:(id)arg1 withBundleIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)_lookForDisplayBundles;

@end

