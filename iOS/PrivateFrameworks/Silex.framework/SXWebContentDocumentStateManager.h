//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXWebContentDocumentStateProviding.h"
#import "SXWebContentDocumentStateReporting.h"
#import "WKScriptMessageHandler.h"

@class NFStateMachine, NSMutableArray, NSString, WKUserContentController;

@interface SXWebContentDocumentStateManager : NSObject <WKScriptMessageHandler, SXWebContentDocumentStateProviding, SXWebContentDocumentStateReporting>
{
    WKUserContentController *_userContentController;
    NSMutableArray *_onReadyBlocks;
    NSMutableArray *_onLoadBlocks;
    NSMutableArray *_onUnloadBlocks;
    NFStateMachine *_stateMachine;
}

@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) NSMutableArray *onUnloadBlocks; // @synthesize onUnloadBlocks=_onUnloadBlocks;
@property(readonly, nonatomic) NSMutableArray *onLoadBlocks; // @synthesize onLoadBlocks=_onLoadBlocks;
@property(readonly, nonatomic) NSMutableArray *onReadyBlocks; // @synthesize onReadyBlocks=_onReadyBlocks;
@property(readonly, nonatomic) WKUserContentController *userContentController; // @synthesize userContentController=_userContentController;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)onUnload:(CDUnknownBlockType)arg1;
- (void)onLoad:(CDUnknownBlockType)arg1;
- (void)onReady:(CDUnknownBlockType)arg1;
- (void)documentWillUnload;
- (void)documentIsReady;
- (void)documentStartedLoading;
- (id)initWithUserContentController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
