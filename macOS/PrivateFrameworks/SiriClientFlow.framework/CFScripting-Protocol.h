//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AFPeerInfo, NSArray, SACFAbstractClientCommand, SACFClientFlowScript, SACFSignal;

@protocol CFScripting
- (void)removeScripts:(NSArray *)arg1 completion:(void (^)(BOOL))arg2;
- (void)updateScriptCacheForFlowScript:(SACFClientFlowScript *)arg1 completion:(void (^)(BOOL))arg2;
- (void)performCommandExecutionForCommand:(SACFAbstractClientCommand *)arg1 peerInfo:(AFPeerInfo *)arg2 completion:(void (^)(SABaseCommand *))arg3;
- (void)warmUpWithSignal:(SACFSignal *)arg1 completion:(void (^)(BOOL))arg2;
@end

