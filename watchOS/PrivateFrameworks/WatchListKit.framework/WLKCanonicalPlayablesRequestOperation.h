//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSString;

@interface WLKCanonicalPlayablesRequestOperation : WLKNetworkRequestOperation
{
    NSString *_contentID;
}

@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (void).cxx_destruct;
- (id)responseProcessor;
- (id)initWithContentID:(id)arg1 profiles:(id)arg2;

@end

