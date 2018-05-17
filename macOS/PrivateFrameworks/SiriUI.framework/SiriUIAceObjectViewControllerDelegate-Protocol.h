//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFDataStore, AceObject, NSArray, NSBundle, NSString, NSURL, SAUIListItem, SiriUIDisambiguationItem;

@protocol SiriUIAceObjectViewControllerDelegate <NSObject>
- (AFDataStore *)persistentDataStoreForSiriViewController:(id <SiriUIViewController>)arg1;
- (void)cancelRequestForSiriSnippetViewController:(id <SiriUIViewController>)arg1;
- (void)siriViewController:(id <SiriUIViewController>)arg1 addSelectionResponse:(SAUIListItem *)arg2;
- (SAUIListItem *)siriViewController:(id <SiriUIViewController>)arg1 listItemToPickInAutodisambiguationForListItems:(NSArray *)arg2;
- (SiriUIDisambiguationItem *)siriViewController:(id <SiriUIViewController>)arg1 disambiguationItemForListItem:(SAUIListItem *)arg2 disambiguationKey:(NSString *)arg3;
- (NSArray *)siriViewController:(id <SiriUIViewController>)arg1 filteredDisambiguationListItems:(NSArray *)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 setContentOffset:(double)arg2;
- (void)siriViewControllerHeightDidChange:(id <SiriUIViewController>)arg1 pinTopOfSnippet:(BOOL)arg2;
- (void)siriViewControllerHeightDidChange:(id <SiriUIViewController>)arg1;
- (struct NSEdgeInsets)siriViewControllerTranscriptInsets:(id <SiriUIViewController>)arg1;
- (struct NSEdgeInsets)siriViewControllerBackgroundInsets:(id <SiriUIViewController>)arg1;
- (struct CGSize)siriViewControllerVisibleContentArea:(id <SiriUIViewController>)arg1;
- (double)siriViewControllerExpectedWidth:(id <SiriUIViewController>)arg1;
- (NSBundle *)siriViewControllerEffectiveBundleForCoreLocation:(id <SiriUIViewController>)arg1;
- (void)siriViewController:(id <SiriUIViewController>)arg1 setDomainObject:(AceObject *)arg2 forIdentifier:(NSURL *)arg3;
- (AceObject *)siriViewController:(id <SiriUIViewController>)arg1 domainObjectForIdentifier:(NSURL *)arg2;
- (void)siriViewControllerDidPunchout;
- (void)siriViewController:(id <SiriUIViewController>)arg1 openURL:(NSURL *)arg2 completion:(void (^)(BOOL))arg3;
- (void)siriViewController:(id <SiriUIViewController>)arg1 performAceCommands:(NSArray *)arg2;
@end
