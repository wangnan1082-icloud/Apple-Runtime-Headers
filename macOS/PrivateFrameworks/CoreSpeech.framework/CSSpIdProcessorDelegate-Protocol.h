//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSpIdProcessor, NSDictionary;

@protocol CSSpIdProcessorDelegate <NSObject>
- (void)speakerIdProcessorFinishedProcessing:(CSSpIdProcessor *)arg1 withSpeakerInfo:(NSDictionary *)arg2;
- (void)speakerIdProcessor:(CSSpIdProcessor *)arg1 hasSpeakerIdInfo:(NSDictionary *)arg2;
@end
