//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <webrtc/WK_RTCVideoDecoder-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCWrappedNativeVideoDecoder : NSObject <WK_RTCVideoDecoder>
{
    unique_ptr_28850a1b _wrappedDecoder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)implementationName;
- (long long)decode:(id)arg1 missingFrames:(BOOL)arg2 fragmentationHeader:(id)arg3 codecSpecificInfo:(id)arg4 renderTimeMs:(long long)arg5;
- (long long)releaseDecoder;
- (long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (unique_ptr_28850a1b)releaseWrappedDecoder;
- (id)initWithNativeDecoder:(unique_ptr_28850a1b)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

