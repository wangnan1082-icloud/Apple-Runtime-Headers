//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IASFilesystemUtils : NSObject
{
}

+ (id)getXattr:(id)arg1 forPath:(id)arg2;
+ (BOOL)isPathSafe:(id)arg1 ofType:(id)arg2 andOwnedByUID:(unsigned int)arg3 andGID:(unsigned int)arg4;
+ (BOOL)isPathSafe:(id)arg1 andOwnedByUID:(unsigned int)arg2 andGID:(unsigned int)arg3;
+ (BOOL)isPathSafe:(id)arg1;
+ (BOOL)isPathSymlinked:(id)arg1;
+ (BOOL)localizeParentFolderForBundleWithURL:(id)arg1;

@end

