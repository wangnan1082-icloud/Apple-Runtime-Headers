//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIAsynchronousOperation.h"

@class NSError, VUIAsynchronousWorkToken, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryOperation : VUIAsynchronousOperation
{
    VUIMediaLibrary *_mediaLibrary;
    NSError *_error;
    VUIAsynchronousWorkToken *_asyncWorkToken;
}

@property(retain, nonatomic) VUIAsynchronousWorkToken *asyncWorkToken; // @synthesize asyncWorkToken=_asyncWorkToken;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithMediaLibrary:(id)arg1;
- (id)init;

@end
