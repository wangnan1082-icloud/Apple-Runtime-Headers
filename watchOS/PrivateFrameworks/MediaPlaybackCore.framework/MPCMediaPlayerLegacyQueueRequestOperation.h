//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAsyncOperation.h"

#import "MPCPlayerQueueRequestOperation.h"

@class MPCPlayerQueueRequest, NSString;

@interface MPCMediaPlayerLegacyQueueRequestOperation : MPAsyncOperation <MPCPlayerQueueRequestOperation>
{
    MPCPlayerQueueRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPCPlayerQueueRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)execute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
