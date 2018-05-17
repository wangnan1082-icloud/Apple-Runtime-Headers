//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ArouetRecognitionResult : NSObject
{
    NSArray *_topLikelyRecognizerResults;
    NSArray *_recognizerResults;
    NSString *_inputPrefix;
}

@property(readonly, nonatomic) NSString *inputPrefix; // @synthesize inputPrefix=_inputPrefix;
@property(readonly, nonatomic) NSArray *recognizerResults; // @synthesize recognizerResults=_recognizerResults;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *topLikelyRecognizerResults;
- (id)initWithRecognizerResults:(id)arg1 inputPrefix:(id)arg2;

@end
