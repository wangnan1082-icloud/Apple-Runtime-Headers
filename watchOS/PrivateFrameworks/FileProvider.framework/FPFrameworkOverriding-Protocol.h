//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class FPItem, NSArray, NSMutableSet, NSString, NSURL;

@protocol FPFrameworkOverriding <NSObject>

@optional
- (void)FPDocumentURLFromUniversalBookmarkableString:(NSString *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)FPUniversalBookmarkableStringFromDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)FPValuesForAttributes:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (_Bool)FPAreUTIsImportable:(NSArray *)arg1 toFolderItem:(FPItem *)arg2;
- (_Bool)FPFilterActions:(NSMutableSet *)arg1 forDroppingItems:(NSArray *)arg2 underItem:(FPItem *)arg3;
- (void)FPExtendBookmarkForDocumentURL:(NSURL *)arg1 forBundleID:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (NSURL *)FPDocumentURLFromBookmarkableString:(NSString *)arg1 error:(id *)arg2;
- (void)FPDocumentURLFromBookmarkableString:(NSString *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (NSString *)FPBookmarkableStringFromDocumentURL:(NSURL *)arg1 error:(id *)arg2;
- (void)FPBookmarkableStringFromDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (_Bool)FPURLIsInFileProvider:(NSURL *)arg1;
- (int)overridePriority;
@end

