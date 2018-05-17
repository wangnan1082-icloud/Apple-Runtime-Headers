//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXMSpeechFormatterCache, NSRegularExpression;

@interface AXMDataDetector : NSObject
{
    NSRegularExpression *_emailAddressRegex;
    AXMSpeechFormatterCache *_speechFormatterCache;
}

- (void).cxx_destruct;
- (id)emailAddressRegex;
- (void)_enumerateText:(id)arg1 textCheckingType:(unsigned long long)arg2 datatype:(unsigned int)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)_enumerateText:(id)arg1 regularExpression:(id)arg2 datatype:(unsigned int)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)enumerateText:(id)arg1 searchingFordatatypes:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithSpeechFormatterCache:(id)arg1;

@end
