//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperation<VUIImageLoadingOperation>;

__attribute__((visibility("hidden")))
@interface VUIImageLoadContext : NSObject
{
    NSOperation<VUIImageLoadingOperation> *_imageLoadOperation;
    unsigned long long _requestCount;
}

@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSOperation<VUIImageLoadingOperation> *imageLoadOperation; // @synthesize imageLoadOperation=_imageLoadOperation;
- (void).cxx_destruct;

@end
