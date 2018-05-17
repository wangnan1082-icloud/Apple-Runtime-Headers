//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUArticleDataProviderFactory.h"

@class NSString;

@interface NUANFArticleDataProviderFactory : NSObject <NUArticleDataProviderFactory>
{
    id <FCContentContext> _contentContext;
    id <NUFontRegistration> _fontRegistration;
    id <SXHost> _host;
    id <NUEmbedDataManager> _embedDataManager;
}

@property(readonly, nonatomic) id <NUEmbedDataManager> embedDataManager; // @synthesize embedDataManager=_embedDataManager;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
@property(readonly, nonatomic) id <NUFontRegistration> fontRegistration; // @synthesize fontRegistration=_fontRegistration;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
- (void).cxx_destruct;
- (id)createArticleDataProviderWithArticle:(id)arg1;
- (id)initWithContentContext:(id)arg1 fontRegistration:(id)arg2 host:(id)arg3 embedDataManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
