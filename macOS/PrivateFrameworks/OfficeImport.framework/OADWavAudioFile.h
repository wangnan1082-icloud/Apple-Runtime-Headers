//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADEmbeddedMediaFile.h>

__attribute__((visibility("hidden")))
@interface OADWavAudioFile : OADEmbeddedMediaFile
{
    float mDuration;
    BOOL mHasDuration;
}

@property(nonatomic) BOOL hasDuration; // @synthesize hasDuration=mHasDuration;
@property(nonatomic) float duration; // @synthesize duration=mDuration;
- (BOOL)isAudioOnly;
- (void)setIsAudioOnly:(BOOL)arg1;

@end
