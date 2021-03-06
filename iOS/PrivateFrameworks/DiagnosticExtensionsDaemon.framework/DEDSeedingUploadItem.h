//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem
{
    _Bool _completed;
    NSString *_extensionID;
    unsigned long long _bytesUploaded;
    NSURLSessionUploadTask *_uploadTask;
}

+ (id)itemAtPath:(id)arg1 enclosedFilename:(id)arg2 extensionID:(id)arg3;
@property(retain) NSURLSessionUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property _Bool completed; // @synthesize completed=_completed;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property(retain) NSString *extensionID; // @synthesize extensionID=_extensionID;
- (void).cxx_destruct;
- (id)description;
- (id)publicDescription;
- (id)promiseFilename;

@end

