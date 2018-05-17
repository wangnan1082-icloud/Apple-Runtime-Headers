//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICAppURLUtilities : NSObject
{
}

+ (id)firstQueryItemInURL:(id)arg1 withURLScheme:(id)arg2 andHost:(id)arg3 andQueryItemName:(id)arg4;
+ (id)contentOffsetFromQuickNoteURL:(id)arg1;
+ (id)noteIdentifierFromQuickNoteURL:(id)arg1;
+ (BOOL)quickNoteURLShouldShowiCloudShareSheet:(id)arg1;
+ (BOOL)quickNoteURLShouldShowShareSheet:(id)arg1;
+ (BOOL)quickNoteURLShouldShowList:(id)arg1;
+ (BOOL)isLaunchingQuickNoteViaPencil:(id)arg1;
+ (BOOL)isQuickNoteModeURL:(id)arg1;
+ (id)urlForQuickNoteWithOptions:(id)arg1;
+ (BOOL)isShowHTMLNoteURL:(id)arg1;
+ (BOOL)isShowNoteURL:(id)arg1;
+ (BOOL)isShowFolderListURL:(id)arg1;
+ (id)appURLForFolderList;
+ (id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)arg1;
+ (id)appURLForHTMLNote:(id)arg1;
+ (id)predicateForNoteMentionedInURL:(id)arg1;
+ (id)appURLForNote:(id)arg1;
+ (long long)appURLActionFromURL:(id)arg1;
+ (id)urlForAppURLAction:(long long)arg1;

@end
