//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedRock/RKImportPostAction.h>

@class NSURL;

@interface RKImportAppleScriptPostAction : RKImportPostAction
{
    NSURL *_scriptURL;
}

- (id)runScriptWithVersionUuids:(id)arg1 replyQueue:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (id)script;
- (id)scriptSource;
- (id)dictionaryRepresentation;
- (id)scriptPath;
- (id)scriptURL;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithScriptURL:(id)arg1;

@end

