//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GEORouteMatch, NSObject<OS_os_log>;

@protocol GEORoutePreloaderSubclass
@property(readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;
- (void)stopLoading;
- (void)beginLoading;
@end
