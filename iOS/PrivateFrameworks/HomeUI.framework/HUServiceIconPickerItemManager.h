//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemManager.h"

@class HFServiceBuilder;

@interface HUServiceIconPickerItemManager : HFItemManager
{
    HFServiceBuilder *_serviceBuilder;
}

@property(readonly, nonatomic) HFServiceBuilder *serviceBuilder; // @synthesize serviceBuilder=_serviceBuilder;
- (void).cxx_destruct;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_serviceType;
- (id)initWithServiceBuilder:(id)arg1 delegate:(id)arg2;

@end
