//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaAccessory;

@interface HMDMediaReconnaissanceSession : HMFObject
{
    void *_outputDevice;
    HMDMediaAccessory *_mediaAccessory;
    void **_session;
}

+ (id)shortDescription;
@property(nonatomic) void **session; // @synthesize session=_session;
@property(retain, nonatomic) HMDMediaAccessory *mediaAccessory; // @synthesize mediaAccessory=_mediaAccessory;
@property(nonatomic) void *outputDevice; // @synthesize outputDevice=_outputDevice;
- (void).cxx_destruct;
- (id)shortDescription;
- (void)__startSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAccessory:(id)arg1;
- (id)init;

@end

