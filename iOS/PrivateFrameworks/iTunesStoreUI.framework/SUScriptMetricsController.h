//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import "ISURLBagObserver.h"

@class NSString, SSMetricsController;

@interface SUScriptMetricsController : SUScriptObject <ISURLBagObserver>
{
    SSMetricsController *_metricsController;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_configureWithBagDictionary:(id)arg1;
- (void)recordEventWithTopic:(id)arg1 properties:(id)arg2 completionFunction:(id)arg3;
- (void)flushUnreportedEventsWithCompletionFunction:(id)arg1;
- (id)_className;
- (void)bagDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
