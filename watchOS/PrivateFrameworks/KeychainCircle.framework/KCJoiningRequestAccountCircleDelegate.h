//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KCJoiningRequestCircleDelegate.h"

@class NSString;

@interface KCJoiningRequestAccountCircleDelegate : NSObject <KCJoiningRequestCircleDelegate>
{
}

+ (id)delegate;
- (_Bool)processCircleJoinData:(id)arg1 version:(int)arg2 error:(id *)arg3;
- (struct __OpaqueSOSPeerInfo *)copyPeerInfoError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
