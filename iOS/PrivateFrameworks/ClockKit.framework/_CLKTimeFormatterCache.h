//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface _CLKTimeFormatterCache : NSObject
{
    NSMutableDictionary *_timeOnlyFormatters;
    NSMutableDictionary *_timeAndDesignatorFormatters;
    NSMutableDictionary *_timeAndDesignatorFormattersSuppressingWhitespace;
}

+ (id)zoneName:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_invalidateFormatters;
- (id)timeAndDesignatorFormatterForZone:(id)arg1 suppressWhitespace:(_Bool)arg2;
- (id)timeOnlyFormatterForZone:(id)arg1 hasSeconds:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end
