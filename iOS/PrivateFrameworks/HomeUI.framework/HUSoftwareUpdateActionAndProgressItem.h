//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItem.h"

@class HMHome, NSSet;

@interface HUSoftwareUpdateActionAndProgressItem : HFItem
{
    HMHome *_home;
    NSSet *_accessories;
}

@property(readonly, nonatomic) NSSet *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)_filteredAccessories;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessories:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end
