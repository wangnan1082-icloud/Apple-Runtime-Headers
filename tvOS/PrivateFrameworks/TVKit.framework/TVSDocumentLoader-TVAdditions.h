//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVServices/TVSDocumentLoader.h>

@interface TVSDocumentLoader (TVAdditions)
+ (id)_APIBaseURL;
+ (id)_activeDSID;
+ (_Bool)hasStoreAccount;
+ (id)documentLoaderWithAPIEndpoint:(id)arg1 queryParameters:(id)arg2 protocolVersion:(unsigned long long)arg3;
+ (id)documentLoaderWithAPIEndpoint:(id)arg1 queryParameters:(id)arg2;
+ (id)documentLoaderWithURL:(id)arg1;
+ (id)documentLoaderWithURLRequest:(id)arg1;
- (void)loadWithWeakObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadJSONWithReponseBlock:(CDUnknownBlockType)arg1;
@end

