//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (XSAccessControlAdditions)
+ (long long)_indexOfFirstEntryDifferentFromEntryOfTypeDeny:(BOOL)arg1 inherited:(BOOL)arg2 startingAtIndex:(unsigned long long)arg3 ascending:(BOOL)arg4 inEntries:(id)arg5;
- (BOOL)addAccessControlEntries:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (BOOL)setAccessControlEntries:(id)arg1 atPath:(id)arg2 error:(out id *)arg3;
- (id)accessControlEntriesAtPath:(id)arg1 error:(out id *)arg2;
- (BOOL)_populateAccessControlEntry:(id)arg1 withUUID:(id)arg2;
@end

