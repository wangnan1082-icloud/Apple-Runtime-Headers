//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HKGraphSeriesDataSourceDelegate;

@interface HKGraphSeriesDataSource : NSObject
{
    id <HKGraphSeriesDataSourceDelegate> _delegate;
    int _minimumZoom;
    int _maximumZoom;
}

@property(nonatomic) int maximumZoom; // @synthesize maximumZoom=_maximumZoom;
@property(nonatomic) int minimumZoom; // @synthesize minimumZoom=_minimumZoom;
@property(nonatomic) __weak id <HKGraphSeriesDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (CDStruct_48c31d0d)blockPathForX:(id)arg1 zoom:(int)arg2;
- (void)invalidateCache;
- (_Bool)hasAvailableBlocksBetweenStartPath:(CDStruct_48c31d0d)arg1 endPath:(CDStruct_48c31d0d)arg2;
- (_Bool)hasPendingQueriesBetweenStartPath:(CDStruct_48c31d0d)arg1 endPath:(CDStruct_48c31d0d)arg2;
- (void)blocksRequestedFromPath:(CDStruct_48c31d0d)arg1 toPath:(CDStruct_48c31d0d)arg2;
- (id)cachedBlockForPath:(CDStruct_48c31d0d)arg1 context:(id)arg2;
- (id)init;

@end

