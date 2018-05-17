//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface _EARSpeechRecognition : NSObject <NSCopying>
{
    NSArray *_tokenSausage;
    NSArray *_interpretationIndices;
}

@property(readonly, copy, nonatomic) NSArray *interpretationIndices; // @synthesize interpretationIndices=_interpretationIndices;
@property(readonly, copy, nonatomic) NSArray *tokenSausage; // @synthesize tokenSausage=_tokenSausage;
- (void).cxx_destruct;
- (id)oneBest;
- (id)nBest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithNBestList:(const vector_2c247c42 *)arg1;
- (id)_initWithTokenSausage:(id)arg1 interpretationIndices:(id)arg2;

@end
