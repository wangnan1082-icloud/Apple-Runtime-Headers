//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSCompletionListItem-Protocol.h>

@class NSString, SFSearchResult, WBSQuerySuggestion;

__attribute__((visibility("hidden")))
@interface CompletionListSearchResult : NSObject <WBSCompletionListItem>
{
    SFSearchResult *_sfSearchResultValue;
    NSString *_parsecDomainIdentifier;
}

@property(readonly, nonatomic) NSString *parsecDomainIdentifier; // @synthesize parsecDomainIdentifier=_parsecDomainIdentifier;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue=_sfSearchResultValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long engagementDestination;
- (id)initWithResult:(id)arg1 parsecDomainIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;

@end

