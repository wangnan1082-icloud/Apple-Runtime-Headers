//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVKit/TVPlaybackProgress.h>

@class NSValueTransformer;

@interface TVDefiniteDurationPlaybackProgress : TVPlaybackProgress
{
    double _elapsedTime;
    double _duration;
    NSValueTransformer *_valueTransformer;
}

@property(retain, nonatomic) NSValueTransformer *valueTransformer; // @synthesize valueTransformer=_valueTransformer;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (void).cxx_destruct;
- (void)_updateTitles;
- (id)init;

@end
