//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBOrientationServiceServer;

@interface FBOrientationService : NSObject
{
    FBOrientationServiceServer *_server;
}

+ (id)sharedInstance;
- (void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;
- (void)noteInterfaceOrientationChanged:(long long)arg1;
- (id)init;

@end
