//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBBulletin, NSArray, NSMutableSet;

@interface BBObserverGatewayEnumerator : NSObject
{
    _Bool _cancelled;
    NSArray *_gateways;
    BBBulletin *_bulletin;
    unsigned int _feeds;
    NSMutableSet *_gatewaysPlayedLightsAndSirens;
    double _gatewayTimeout;
}

@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSMutableSet *gatewaysPlayedLightsAndSirens; // @synthesize gatewaysPlayedLightsAndSirens=_gatewaysPlayedLightsAndSirens;
@property(nonatomic) double gatewayTimeout; // @synthesize gatewayTimeout=_gatewayTimeout;
@property(nonatomic) unsigned int feeds; // @synthesize feeds=_feeds;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(copy, nonatomic) NSArray *gateways; // @synthesize gateways=_gateways;
- (void).cxx_destruct;
- (void)sendToDefaultGatewayToPlayLightsAndSirens:(_Bool)arg1;
- (id)defaultGateway;
- (void)attemptNextGatewayInEnumerator:(id)arg1 playLightsAndSirens:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enumerateWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)init;

@end
