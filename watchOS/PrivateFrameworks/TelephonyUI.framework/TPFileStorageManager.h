//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSURL;

@interface TPFileStorageManager : NSObject
{
    _Bool _hasClearedLegacyStorage;
    NSURL *_urlForFileSystem;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool hasClearedLegacyStorage; // @synthesize hasClearedLegacyStorage=_hasClearedLegacyStorage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)deleteStorageAtURLs:(id)arg1;
- (void)clearLegacyStorageIfNecessary;
- (id)urlsForLegacyFileSystem;
@property(readonly, nonatomic) NSURL *urlForFileSystem; // @synthesize urlForFileSystem=_urlForFileSystem;
- (void)localeChanged;
- (id)imageWithName:(id)arg1;
- (void)saveImage:(id)arg1 withName:(id)arg2;
- (void)dealloc;
- (id)init;

@end
