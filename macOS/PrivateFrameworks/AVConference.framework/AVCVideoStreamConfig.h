//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCVideoStreamConfig : NSObject
{
    long long _txCodecType;
    long long _rxCodecType;
    long long _videoResolution;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _rxMaxBitrate;
    unsigned long long _rxMinBitrate;
    unsigned long long _keyFrameInterval;
    int _remoteVideoInitialOrientation;
    BOOL _enableCVO;
    unsigned long long _cvoExtensionID;
    BOOL _isVideoProtected;
}

+ (long long)clientVideoResolutionFromResolution:(long long)arg1;
+ (long long)videoResolutionFromClientResolution:(long long)arg1;
+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
@property(nonatomic) BOOL isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) BOOL enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property(nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) long long rxCodecType; // @synthesize rxCodecType=_rxCodecType;
@property(nonatomic) long long txCodecType; // @synthesize txCodecType=_txCodecType;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (BOOL)isValid;

@end

