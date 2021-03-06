//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (NSArray)
+ (id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2;
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)arrayWithContentsOfFile:(id)arg1;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)_stringToWrite;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;
- (id)sortedArrayHint;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
@end

