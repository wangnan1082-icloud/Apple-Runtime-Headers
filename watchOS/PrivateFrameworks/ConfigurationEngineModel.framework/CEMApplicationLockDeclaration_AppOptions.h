//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMApplicationLockDeclaration_AppOptions : CEMPayloadBase
{
    NSNumber *_payloadDisableTouch;
    NSNumber *_payloadDisableDeviceRotation;
    NSNumber *_payloadDisableVolumeButtons;
    NSNumber *_payloadDisableRingerSwitch;
    NSNumber *_payloadDisableSleepWakeButton;
    NSNumber *_payloadDisableAutoLock;
    NSNumber *_payloadEnableVoiceOver;
    NSNumber *_payloadEnableZoom;
    NSNumber *_payloadEnableInvertColors;
    NSNumber *_payloadEnableAssistiveTouch;
    NSNumber *_payloadEnableSpeakSelection;
    NSNumber *_payloadEnableMonoAudio;
}

+ (id)buildRequiredOnly;
+ (id)buildWithDisableTouch:(id)arg1 withDisableDeviceRotation:(id)arg2 withDisableVolumeButtons:(id)arg3 withDisableRingerSwitch:(id)arg4 withDisableSleepWakeButton:(id)arg5 withDisableAutoLock:(id)arg6 withEnableVoiceOver:(id)arg7 withEnableZoom:(id)arg8 withEnableInvertColors:(id)arg9 withEnableAssistiveTouch:(id)arg10 withEnableSpeakSelection:(id)arg11 withEnableMonoAudio:(id)arg12;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadEnableMonoAudio; // @synthesize payloadEnableMonoAudio=_payloadEnableMonoAudio;
@property(copy, nonatomic) NSNumber *payloadEnableSpeakSelection; // @synthesize payloadEnableSpeakSelection=_payloadEnableSpeakSelection;
@property(copy, nonatomic) NSNumber *payloadEnableAssistiveTouch; // @synthesize payloadEnableAssistiveTouch=_payloadEnableAssistiveTouch;
@property(copy, nonatomic) NSNumber *payloadEnableInvertColors; // @synthesize payloadEnableInvertColors=_payloadEnableInvertColors;
@property(copy, nonatomic) NSNumber *payloadEnableZoom; // @synthesize payloadEnableZoom=_payloadEnableZoom;
@property(copy, nonatomic) NSNumber *payloadEnableVoiceOver; // @synthesize payloadEnableVoiceOver=_payloadEnableVoiceOver;
@property(copy, nonatomic) NSNumber *payloadDisableAutoLock; // @synthesize payloadDisableAutoLock=_payloadDisableAutoLock;
@property(copy, nonatomic) NSNumber *payloadDisableSleepWakeButton; // @synthesize payloadDisableSleepWakeButton=_payloadDisableSleepWakeButton;
@property(copy, nonatomic) NSNumber *payloadDisableRingerSwitch; // @synthesize payloadDisableRingerSwitch=_payloadDisableRingerSwitch;
@property(copy, nonatomic) NSNumber *payloadDisableVolumeButtons; // @synthesize payloadDisableVolumeButtons=_payloadDisableVolumeButtons;
@property(copy, nonatomic) NSNumber *payloadDisableDeviceRotation; // @synthesize payloadDisableDeviceRotation=_payloadDisableDeviceRotation;
@property(copy, nonatomic) NSNumber *payloadDisableTouch; // @synthesize payloadDisableTouch=_payloadDisableTouch;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
