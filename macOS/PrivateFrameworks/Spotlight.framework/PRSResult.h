//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Spotlight/NSCopying-Protocol.h>
#import <Spotlight/NSPasteboardWriting-Protocol.h>
#import <Spotlight/PRSBaseResult-Protocol.h>
#import <Spotlight/QLSeamlessOpenerDelegate-Protocol.h>

@class LSApplicationProxy, NSArray, NSDate, NSDictionary, NSImage, NSNumber, NSString, NSURL, PRSRankingItem, SFPunchout, SFSearchResult;
@protocol NSPasteboardWriting;

@interface PRSResult : NSObject <QLSeamlessOpenerDelegate, NSPasteboardWriting, NSCopying, PRSBaseResult>
{
    long long _retainCount;
    unsigned long long _matchBits;
    BOOL doesContentMatch;
    BOOL resultLocationInteresting;
    BOOL keyWordMatch;
    BOOL isPremium;
    BOOL isStaticTopHit;
    BOOL isPredictedTopHit;
    BOOL queryLastLaunched;
    BOOL queryEverLaunched;
    BOOL isAlternateNameMatch;
    BOOL isDisplayNameMatch;
    BOOL isParsec;
    BOOL isUsed;
    BOOL isMostRecentlyUsed;
    BOOL isEngagedWith;
    BOOL isParsecTopHit;
    BOOL _autoLaunch;
    BOOL _isFirstTopHit;
    BOOL _isAnyTopHit;
    BOOL _isShowAllInFinder;
    BOOL _isSynthetic;
    BOOL _isFolderQuery;
    BOOL _supportsSubView;
    unsigned long long topHit;
    NSString *resultBundleID;
    NSString *type;
    NSString *title;
    unsigned long long engagementScore;
    unsigned long long displayNameMatchScore;
    unsigned long long alternateNameMatchScore;
    unsigned long long resultEngagementScore;
    double lastUsedTime;
    unsigned long long contentMatchScore;
    unsigned long long usedCount;
    unsigned long long predicted;
    unsigned long long queryIndependentScore;
    NSString *categoryForCP;
    unsigned long long interestingTimeScore;
    NSString *bundleID;
    NSString *_contentType;
    NSString *_displayName;
    NSURL *_fastLaunchURL;
    NSString *_distinguishPathString;
    unsigned long long _rank;
    NSURL *_altPath;
    PRSRankingItem *_rankingItem;
    long long _dpos;
    NSString *_NLPConfidence;
    NSString *_NLPCategory;
    double _sqf;
    double _cep;
    SFSearchResult *_sfSearchResult;
}

+ (void)initialize;
@property(retain, nonatomic) SFSearchResult *sfSearchResult; // @synthesize sfSearchResult=_sfSearchResult;
@property(nonatomic) double cep; // @synthesize cep=_cep;
@property(nonatomic) double sqf; // @synthesize sqf=_sqf;
@property(retain) NSString *NLPCategory; // @synthesize NLPCategory=_NLPCategory;
@property(retain) NSString *NLPConfidence; // @synthesize NLPConfidence=_NLPConfidence;
@property(nonatomic) long long dpos; // @synthesize dpos=_dpos;
@property(retain, nonatomic) PRSRankingItem *rankingItem; // @synthesize rankingItem=_rankingItem;
@property(retain) NSURL *altPath; // @synthesize altPath=_altPath;
@property BOOL supportsSubView; // @synthesize supportsSubView=_supportsSubView;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(retain) NSString *distinguishPathString; // @synthesize distinguishPathString=_distinguishPathString;
@property BOOL isFolderQuery; // @synthesize isFolderQuery=_isFolderQuery;
@property(nonatomic) BOOL isSynthetic; // @synthesize isSynthetic=_isSynthetic;
@property(nonatomic) BOOL isShowAllInFinder; // @synthesize isShowAllInFinder=_isShowAllInFinder;
@property(nonatomic) BOOL isAnyTopHit; // @synthesize isAnyTopHit=_isAnyTopHit;
@property(nonatomic) BOOL isFirstTopHit; // @synthesize isFirstTopHit=_isFirstTopHit;
@property(getter=isAutoLaunch) BOOL autoLaunch; // @synthesize autoLaunch=_autoLaunch;
@property(readonly) NSURL *fastLaunchURL; // @synthesize fastLaunchURL=_fastLaunchURL;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(nonatomic) unsigned long long interestingTimeScore; // @synthesize interestingTimeScore;
@property(nonatomic) BOOL isParsecTopHit; // @synthesize isParsecTopHit;
@property(nonatomic) BOOL isEngagedWith; // @synthesize isEngagedWith;
@property(nonatomic) BOOL isMostRecentlyUsed; // @synthesize isMostRecentlyUsed;
@property(nonatomic) BOOL isUsed; // @synthesize isUsed;
@property(nonatomic) BOOL isParsec; // @synthesize isParsec;
@property(nonatomic) BOOL isDisplayNameMatch; // @synthesize isDisplayNameMatch;
@property(nonatomic) BOOL isAlternateNameMatch; // @synthesize isAlternateNameMatch;
@property(nonatomic) BOOL queryEverLaunched; // @synthesize queryEverLaunched;
@property(nonatomic) BOOL queryLastLaunched; // @synthesize queryLastLaunched;
@property(retain, nonatomic) NSString *categoryForCP; // @synthesize categoryForCP;
@property(nonatomic) BOOL isPredictedTopHit; // @synthesize isPredictedTopHit;
@property(nonatomic) unsigned long long queryIndependentScore; // @synthesize queryIndependentScore;
@property(nonatomic) BOOL isStaticTopHit; // @synthesize isStaticTopHit;
@property(nonatomic) BOOL isPremium; // @synthesize isPremium;
@property(nonatomic) unsigned long long predicted; // @synthesize predicted;
@property(nonatomic) unsigned long long usedCount; // @synthesize usedCount;
@property(nonatomic) BOOL keyWordMatch; // @synthesize keyWordMatch;
@property(nonatomic) unsigned long long contentMatchScore; // @synthesize contentMatchScore;
@property(nonatomic) BOOL resultLocationInteresting; // @synthesize resultLocationInteresting;
@property(nonatomic) double lastUsedTime; // @synthesize lastUsedTime;
@property(nonatomic) unsigned long long resultEngagementScore; // @synthesize resultEngagementScore;
@property(nonatomic) unsigned long long alternateNameMatchScore; // @synthesize alternateNameMatchScore;
@property(nonatomic) unsigned long long displayNameMatchScore; // @synthesize displayNameMatchScore;
@property(nonatomic) BOOL doesContentMatch; // @synthesize doesContentMatch;
@property(nonatomic) unsigned long long engagementScore; // @synthesize engagementScore;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSString *resultBundleID; // @synthesize resultBundleID;
@property(nonatomic) unsigned long long topHit; // @synthesize topHit;
- (void).cxx_destruct;
@property(readonly) NSString *uniqueIdentifier;
@property(readonly) NSString *relatedIdentifier;
- (void)prepareIcons;
- (void)setCategory:(id)arg1;
@property(readonly) NSString *category;
- (id)valueForAttribute:(id)arg1;
@property(nonatomic) unsigned long long score;
- (unsigned long long)matchQuality;
- (BOOL)isExactMatch;
- (BOOL)isPrefixMatch;
@property(retain, nonatomic) NSString *groupName;
@property(readonly) NSDate *lastUsedDate;
@property(readonly) NSURL *URL;
- (void)updateRenderOrEngagementCountsForKey:(id)arg1 date:(id)arg2;
@property(readonly) NSArray *otherNames;
@property(readonly) NSArray *otherTypes;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL allowsCPRecording;
- (void)prepare;
- (id)initWithFastLaunchURL:(id)arg1 displayName:(id)arg2 contentType:(id)arg3;
- (id)initWithContentType:(id)arg1 displayName:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <NSPasteboardWriting> pasteboardObject;
@property(readonly) NSURL *fastURL;
@property(readonly) NSString *filePath;
@property(readonly) LSApplicationProxy *appProxy;
- (void)cacheImage:(id)arg1 forKey:(id)arg2;
- (id)cachedImageForKey:(id)arg1;
- (id)quickLookItemForQueryString:(id)arg1;
@property(readonly) BOOL isPhotoImageOrMovie;
- (BOOL)isMovie;
- (BOOL)isImage;
@property(readonly) NSString *targetString;
- (BOOL)allowShowPath;
- (int)qlPreviewMode;
- (id)previewItemURL;
- (id)sharedCustomPreviewController;
- (id)seamlessOpener:(id)arg1 sourcePreviewViewForPreviewItem:(id)arg2;
- (id)unknownImage;
- (id)safariDocumentImage;
- (id)prefPaneImage;
- (id)contactImage;
@property(readonly) NSNumber *groupId;
@property(retain, nonatomic) NSString *title_note;
@property(readonly) NSString *displayInfo;
@property(readonly) NSImage *iconImageForApplication;
@property(readonly) NSImage *iconImage;
@property(readonly) NSImage *largeIconImage;
@property(readonly) NSString *fastPath;
@property(readonly) NSString *parentPath;
- (BOOL)isPrefixMatchWithName:(id)arg1;
- (BOOL)isExactMatchWithName:(id)arg1;
- (BOOL)isSomewhatRecentlyUsed;
- (BOOL)isRecentlyUsed;
- (BOOL)isVeryRecentlyUsed;
- (BOOL)isUsedWithinDays:(double)arg1;
- (id)customOpenSearchString;
- (unsigned long long)resultOpenOptions;
- (BOOL)isShortcutAllowed;
- (BOOL)shouldNotBeTopHit;
- (BOOL)isTopHitCandidate;
- (BOOL)isLocalResult;
- (BOOL)isCalculation;
- (BOOL)isSafariHistory;
- (BOOL)isEmail;
- (BOOL)isCalendarEvent;
- (BOOL)isFolder;
- (BOOL)isContact;
- (BOOL)isPrefPane;
- (BOOL)isVideo;
- (BOOL)isMusic;
- (BOOL)isApplicationQueryResult;
- (BOOL)isApplication;
- (BOOL)isIndexingProgress;
- (BOOL)isGroupHeading;
- (BOOL)isFile;
- (BOOL)isSelectable;
- (void)addAdamID:(id)arg1;
- (id)adamID;
- (BOOL)utiTypeConformsTo:(id)arg1;
- (void)setMatchName:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)previewController;
- (BOOL)isCompatibleWithPreviewController:(id)arg1;
- (BOOL)isApplicationManaged;
- (id)subjectForEmailAttachment;
- (BOOL)isBoundEmailAttachment;
- (BOOL)isInEmailAttachmentLocation;
- (id)emailURLForAttachment;
- (void)markAsEngaged;
- (void)markAsUsed;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

// Remaining properties
@property(nonatomic) long long adam_id;
@property(retain, nonatomic) NSString *bundle_id;
@property(retain, nonatomic) NSString *completion;
@property(retain, nonatomic) NSImage *completion_icon;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSDictionary *featuresSet;
@property(retain, nonatomic) NSString *geoUserSessionIDString;
@property(nonatomic) double geoUserSessionStartTime;
@property(retain, nonatomic) NSImage *icon;
@property BOOL isQuickGlance;
@property(nonatomic) BOOL isStreaming;
@property(nonatomic) long long max_age;
@property(nonatomic) long long media_kind;
@property(nonatomic) long long placement;
@property(nonatomic) BOOL playable;
@property(retain, nonatomic) SFPunchout *punchout;
@property(retain, nonatomic) NSString *resultIdentifier;
@property(nonatomic) float resultScore;
@property(retain, nonatomic) NSURL *resultURL;
@property(retain, nonatomic) NSString *section_header;
@property(retain, nonatomic) NSString *section_header_more;
@property(retain, nonatomic) NSURL *section_header_more_url;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *templateName;
@property int title_note_size;
@property long long topHitScore;

@end

