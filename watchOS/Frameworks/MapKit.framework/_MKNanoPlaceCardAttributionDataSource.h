//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MKNanoPlaceCardSectionData.h>

@protocol _MKNanoPlaceCardAttributionDataDelegate;

@interface _MKNanoPlaceCardAttributionDataSource : _MKNanoPlaceCardSectionData
{
}

- (void)notifyDelegateForActionAtRow:(unsigned int)arg1;
- (id)cellForRow:(unsigned int)arg1 inTableView:(id)arg2;
- (id)initWithMapItem:(id)arg1;
- (int)numberOfRows;
- (id)title;

// Remaining properties
@property(nonatomic) __weak id <_MKNanoPlaceCardAttributionDataDelegate> delegate; // @dynamic delegate;

@end

