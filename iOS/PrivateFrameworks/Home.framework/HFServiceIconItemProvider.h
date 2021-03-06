//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSSet, NSString;

@interface HFServiceIconItemProvider : HFItemProvider
{
    NSString *_serviceType;
    NSString *_serviceSubtype;
    HMHome *_home;
    NSSet *_iconItems;
}

@property(copy, nonatomic) NSSet *iconItems; // @synthesize iconItems=_iconItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSString *serviceSubtype; // @synthesize serviceSubtype=_serviceSubtype;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 home:(id)arg3;
- (id)init;

@end

