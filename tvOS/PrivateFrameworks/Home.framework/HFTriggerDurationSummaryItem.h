//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HFTriggerBuilder;

@interface HFTriggerDurationSummaryItem : HFItem
{
    HFTriggerBuilder *_triggerBuilder;
}

+ (id)formattedStringForDuration:(id)arg1 style:(unsigned long long)arg2;
@property(readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1;

@end
