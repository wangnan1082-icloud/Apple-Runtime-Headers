//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAsyncOperation.h"

#import "MPRequestResponseControllerDelegate.h"

@class MPRequestResponseController, NMCPlaybackQueueRequest, NSString;

__attribute__((visibility("hidden")))
@interface NMCPlaybackQueueRequestOperation : MPAsyncOperation <MPRequestResponseControllerDelegate>
{
    MPRequestResponseController *_requestResponseController;
    NMCPlaybackQueueRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NMCPlaybackQueueRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)controller:(id)arg1 defersResponseReplacement:(CDUnknownBlockType)arg2;
- (void)execute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
