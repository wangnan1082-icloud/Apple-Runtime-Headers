//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class NSDictionary, NSError, NSString, SSVPlatformRequestOperation;

__attribute__((visibility("hidden")))
@interface TVHKStoreLookupOperation : TVHSAsynchronousOperation
{
    unsigned long long _storeID;
    unsigned long long _storefrontID;
    NSDictionary *_results;
    NSError *_error;
    SSVPlatformRequestOperation *_platformOperation;
    NSString *_storeIDString;
    NSString *_storefrontIDString;
}

@property(copy, nonatomic) NSString *storefrontIDString; // @synthesize storefrontIDString=_storefrontIDString;
@property(copy, nonatomic) NSString *storeIDString; // @synthesize storeIDString=_storeIDString;
@property(retain, nonatomic) SSVPlatformRequestOperation *platformOperation; // @synthesize platformOperation=_platformOperation;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(nonatomic) unsigned long long storefrontID; // @synthesize storefrontID=_storefrontID;
@property(readonly, nonatomic) unsigned long long storeID; // @synthesize storeID=_storeID;
- (void).cxx_destruct;
- (id)_countryCode;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithStoreID:(unsigned long long)arg1;
- (id)init;

@end

