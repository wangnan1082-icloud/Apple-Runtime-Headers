//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVCKAcquisitionProperties;

__attribute__((visibility("hidden")))
@interface ATVAcquisitionRequest : NSObject
{
    _Bool _cancelled;
    TVCKAcquisitionProperties *_properties;
    CDUnknownBlockType _completionBlock;
}

@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) TVCKAcquisitionProperties *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;

@end
