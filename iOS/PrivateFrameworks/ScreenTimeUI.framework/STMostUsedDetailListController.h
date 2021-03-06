//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STPINListViewController.h>

@class STAllowanceProgressGroupSpecifierProvider, STAppDetailsGroupSpecifierProvider, STCategoryDetailsGroupSpecifierProvider, STMostUsedScreenTimeGroupSpecifierProvider, STUsageItem;

@interface STMostUsedDetailListController : STPINListViewController
{
    STUsageItem *_usageItem;
    STMostUsedScreenTimeGroupSpecifierProvider *_screenTimeGroupSpecifierProvider;
    STAppDetailsGroupSpecifierProvider *_appDetailsGroupSpecifierProvider;
    STCategoryDetailsGroupSpecifierProvider *_categoryDetailsGroupSpecifierProvider;
    STAllowanceProgressGroupSpecifierProvider *_allowanceProgressGroupSpecifierProvider;
}

@property(readonly, nonatomic) STAllowanceProgressGroupSpecifierProvider *allowanceProgressGroupSpecifierProvider; // @synthesize allowanceProgressGroupSpecifierProvider=_allowanceProgressGroupSpecifierProvider;
@property(readonly, nonatomic) STCategoryDetailsGroupSpecifierProvider *categoryDetailsGroupSpecifierProvider; // @synthesize categoryDetailsGroupSpecifierProvider=_categoryDetailsGroupSpecifierProvider;
@property(readonly, nonatomic) STAppDetailsGroupSpecifierProvider *appDetailsGroupSpecifierProvider; // @synthesize appDetailsGroupSpecifierProvider=_appDetailsGroupSpecifierProvider;
@property(readonly, nonatomic) STMostUsedScreenTimeGroupSpecifierProvider *screenTimeGroupSpecifierProvider; // @synthesize screenTimeGroupSpecifierProvider=_screenTimeGroupSpecifierProvider;
@property(readonly, nonatomic) STUsageItem *usageItem; // @synthesize usageItem=_usageItem;
- (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_registerForAppInfoCacheNotifications;
- (void)viewDidLoad;
- (_Bool)canBeShownFromSuspendedState;
- (id)initWithUsageItem:(id)arg1 coordinator:(id)arg2;

@end

