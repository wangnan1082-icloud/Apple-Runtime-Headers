//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, NSTextCheckingResult;
@protocol ICSearchIndexable;

@interface ICSearchResult : NSObject
{
    unsigned long long _cachedHash;
    id <ICSearchIndexable> _object;
    double _rankingScore;
    unsigned long long _relevanceBitField;
    NSString *_searchString;
    NSString *_highlightString;
    NSString *_displayingTitle;
    NSTextCheckingResult *_displayingTitleCheckingResult;
    NSAttributedString *_titleAttributedString;
    NSString *_displayingSnippet;
    NSTextCheckingResult *_displayingSnippetCheckingResult;
    NSAttributedString *_snippetAttributedString;
    struct CGRect _titleAttributedStringInsideFrame;
    struct CGRect _snippetAttributedStringInsideFrame;
}

+ (id)stringMatchHighlightedForAttributedString:(id)arg1 highlightColor:(struct NSColor *)arg2 fromSearchResult:(id)arg3;
+ (id)stringMatchHighlightedForString:(id)arg1 highlightColor:(struct NSColor *)arg2 fromSearchResult:(id)arg3;
+ (id)stringMatchHighlightedForString:(id)arg1 atributedString:(id)arg2 highlightString:(id)arg3 highlightColor:(struct NSColor *)arg4;
+ (id)authorNameToHighlightForNote:(id)arg1 fromSearchResult:(id)arg2 matchWordBoundaries:(BOOL)arg3;
+ (id)attributedStringWithMatchHighlighted:(id)arg1 textCheckingResult:(id)arg2 usingAttributes:(id)arg3 highlightColor:(struct NSColor *)arg4 insideFrame:(struct CGRect)arg5;
+ (id)attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(struct NSColor *)arg2;
+ (BOOL)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(BOOL)arg3 insideFrame:(struct CGRect)arg4;
+ (struct CGRect)boundingRectForAttributedString:(id)arg1 fittingSize:(struct CGSize)arg2;
+ (id)bestMatchTokensForString:(id)arg1;
+ (id)firstMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(BOOL)arg3;
+ (id)regularExpressionForSearchingWithString:(id)arg1 matchWordBoundaries:(BOOL)arg2;
+ (id)bestMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(BOOL)arg3;
@property(nonatomic) struct CGRect snippetAttributedStringInsideFrame; // @synthesize snippetAttributedStringInsideFrame=_snippetAttributedStringInsideFrame;
@property(retain, nonatomic) NSAttributedString *snippetAttributedString; // @synthesize snippetAttributedString=_snippetAttributedString;
@property(readonly, nonatomic) NSTextCheckingResult *displayingSnippetCheckingResult; // @synthesize displayingSnippetCheckingResult=_displayingSnippetCheckingResult;
@property(readonly, nonatomic) NSString *displayingSnippet; // @synthesize displayingSnippet=_displayingSnippet;
@property(nonatomic) struct CGRect titleAttributedStringInsideFrame; // @synthesize titleAttributedStringInsideFrame=_titleAttributedStringInsideFrame;
@property(retain, nonatomic) NSAttributedString *titleAttributedString; // @synthesize titleAttributedString=_titleAttributedString;
@property(readonly, nonatomic) NSTextCheckingResult *displayingTitleCheckingResult; // @synthesize displayingTitleCheckingResult=_displayingTitleCheckingResult;
@property(readonly, nonatomic) NSString *displayingTitle; // @synthesize displayingTitle=_displayingTitle;
@property(readonly, nonatomic) NSString *highlightString; // @synthesize highlightString=_highlightString;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) unsigned long long relevanceBitField; // @synthesize relevanceBitField=_relevanceBitField;
@property(readonly, nonatomic) double rankingScore; // @synthesize rankingScore=_rankingScore;
@property(readonly, nonatomic) id <ICSearchIndexable> object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)invalidateAccentColor;
- (void)refetchObjectFromContext:(id)arg1;
- (id)bestMatchWithinString:(id)arg1 matchWordBoundaries:(BOOL)arg2;
- (id)bestMatchWithinString:(id)arg1;
- (long long)compareByModificationDate:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prepareDisplayingSnippetWithAccessingObject:(id)arg1;
- (void)prepareDisplayingTitleWithAccessingObject:(id)arg1;
- (id)initWithMainContextObject:(id)arg1 currentContextObject:(id)arg2 rankingScore:(double)arg3 relevanceBitField:(unsigned long long)arg4 searchString:(id)arg5 highlightString:(id)arg6;
- (id)initWithObject:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 searchString:(id)arg4 highlightString:(id)arg5;
- (id)snippetWithBaseAttributes:(id)arg1 highlightColor:(struct NSColor *)arg2 insideFrame:(struct CGRect)arg3;
- (id)attributedTitleWithBaseAttributes:(id)arg1 highlightColor:(struct NSColor *)arg2 insideFrame:(struct CGRect)arg3;

@end

