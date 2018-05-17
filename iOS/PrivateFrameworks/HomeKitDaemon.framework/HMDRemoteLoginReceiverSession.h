//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDRemoteLoginAuthentication, NSString;

@interface HMDRemoteLoginReceiverSession : HMFObject
{
    NSString *_sessionID;
    HMDRemoteLoginAuthentication *_remoteAuthentication;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) HMDRemoteLoginAuthentication *remoteAuthentication; // @synthesize remoteAuthentication=_remoteAuthentication;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
