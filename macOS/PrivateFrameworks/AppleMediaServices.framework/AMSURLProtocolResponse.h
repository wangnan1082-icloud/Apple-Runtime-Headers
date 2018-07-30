//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, AMSURLTaskInfo, NSArray, NSDictionary, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface AMSURLProtocolResponse : NSObject
{
    AMSURLTaskInfo *_taskInfo;
    NSDictionary *_responseDictionary;
}

@property(retain) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
- (void).cxx_destruct;
- (id)_valueForProtocolKey:(id)arg1;
@property(readonly) NSURL *versionMismatchURL;
@property(readonly) BOOL supportedProtocolVersion;
@property(readonly) NSError *serverError;
@property(readonly) NSArray *pingURLs;
@property(readonly) NSArray *dialogs;
@property(readonly) NSArray *actions;
@property(readonly) ACAccount *account;
- (id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2;

@end
