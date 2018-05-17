//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject
{
    NSMapTable *_redirectHandlerMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMapTable *redirectHandlerMap; // @synthesize redirectHandlerMap=_redirectHandlerMap;
- (void).cxx_destruct;
- (id)_redirectURLFromURL:(id)arg1;
- (_Bool)handleOAuthRedirectURL:(id)arg1;
- (void)unRegisterOAuthClientForRedirectURL:(id)arg1;
- (void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
