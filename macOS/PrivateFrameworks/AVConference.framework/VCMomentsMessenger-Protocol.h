//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol VCMomentsMessenger <NSObject>
@property(readonly, nonatomic) unsigned int capabilities;
- (void)deregisterClient;
- (void)registerClient;
- (void)cleanupActiveRequests;
- (BOOL)processClientRequest:(NSDictionary *)arg1 error:(id *)arg2;
- (void)setMomentsDelegate:(id <VCMomentsMessengerDelegate>)arg1;
@end
