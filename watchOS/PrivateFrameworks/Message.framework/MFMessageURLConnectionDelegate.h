//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class MFFuture, MFPromise, NSMutableData, NSString, NSURLResponse;

@interface MFMessageURLConnectionDelegate : NSObject <NSURLSessionDelegate>
{
    NSMutableData *_responseBody;
    MFPromise *_promise;
    NSURLResponse *_response;
}

@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) MFFuture *future;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
