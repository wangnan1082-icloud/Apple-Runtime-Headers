//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileWrapper.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FileWrapper : NSFileWrapper
{
    NSURL *_originatingURL;
    NSString *_contentMIMEType;
}

@property(copy, nonatomic) NSString *contentMIMEType; // @synthesize contentMIMEType=_contentMIMEType;
@property(retain, nonatomic) NSURL *originatingURL; // @synthesize originatingURL=_originatingURL;
- (void).cxx_destruct;
- (BOOL)writeToUniqueFileInDirectory:(id)arg1 attemptedURL:(id *)arg2 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)arg3;

@end
