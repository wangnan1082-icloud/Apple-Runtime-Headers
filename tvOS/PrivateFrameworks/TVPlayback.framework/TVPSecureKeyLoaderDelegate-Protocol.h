//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVPlayback/NSObject-Protocol.h>

@class NSData, NSDate, NSError, TVPSecureKeyLoader, TVPSecureKeyRequest;

@protocol TVPSecureKeyLoaderDelegate <NSObject>
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didFailWithError:(NSError *)arg2 forRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2;
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didLoadKeyResponseData:(NSData *)arg2 renewalDate:(NSDate *)arg3 forRequest:(TVPSecureKeyRequest *)arg4;
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didLoadContentIdentifierData:(NSData *)arg2 forRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyLoader:(TVPSecureKeyLoader *)arg1 didLoadCertificateData:(NSData *)arg2 forRequest:(TVPSecureKeyRequest *)arg3;
@end

