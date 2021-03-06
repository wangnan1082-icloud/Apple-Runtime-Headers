//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PubSub/NSURLConnectionDelegate-Protocol.h>

@class NSData, NSError, NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSString, NSURL, NSURLConnection, PSMessageQueue;

__attribute__((visibility("hidden")))
@interface PSOperation : NSObject <NSURLConnectionDelegate>
{
    PSMessageQueue *_target;
    SEL _action;
    NSURL *_url;
    NSString *_eTag;
    unsigned int _start;
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
    NSHTTPURLResponse *_response;
    NSMutableData *_responseData;
    NSError *_error;
    BOOL _requiresDigestAuthentication;
}

+ (id)errorWithCode:(int)arg1 url:(id)arg2;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) NSData *responseData; // @synthesize responseData=_responseData;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)isAcceptableCredential:(id)arg1 forChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)_finished;
- (void)_gotResponse;
- (void)cancel;
- (void)start;
- (BOOL)runSynchronously;
- (id)userAgent;
- (id)credential;
- (void)_setErrorCode:(int)arg1;
@property(readonly) NSString *responseETag;
- (id)responseHeader:(id)arg1;
- (BOOL)requiresDigestAuthentication;
- (void)setRequiresDigestAuthentication:(BOOL)arg1;
- (void)setContentType:(id)arg1 body:(id)arg2;
- (void)setValue:(id)arg1 ofHeader:(id)arg2;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 URL:(id)arg3 eTag:(id)arg4 start:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

