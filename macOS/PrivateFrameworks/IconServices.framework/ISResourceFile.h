//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface ISResourceFile : NSObject
{
    NSData *_resourceFileData;
    struct OpaqueMappedResourceFileRef *_resourceFileRef;
    NSURL *_url;
}

@property(readonly) NSURL *url; // @synthesize url=_url;
@property struct OpaqueMappedResourceFileRef *resourceFileRef; // @synthesize resourceFileRef=_resourceFileRef;
@property(retain) NSData *resourceFileData; // @synthesize resourceFileData=_resourceFileData;
- (void).cxx_destruct;
- (id)resourcesForType:(unsigned int)arg1;
- (id)resourceForType:(unsigned int)arg1 resID:(short)arg2;
- (BOOL)openFork:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

