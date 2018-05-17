//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVCaptionOutputSettings : AVOutputSettings
{
    NSDictionary *_captionSettingsDictionary;
}

+ (BOOL)supportsEmptyOutputSettingsDictionary;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id *)arg3;
+ (id)eligibleOutputSettingsDictionaryKeys;
@property(readonly, nonatomic) CDStruct_1b6d18a9 captionTimeCodeFrameDuration;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (BOOL)willYieldCompressedSamples;
- (id)compatibleMediaTypes;
- (id)initWithCaptionSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end
