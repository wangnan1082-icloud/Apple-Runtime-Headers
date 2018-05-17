//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXMediaSelectionOptionsAvailabilityObserver.h"
#import "SXVideoPlaybackObserver.h"

@class NSString;

@interface SXMediaSelectionOptionsAvailabilityObserver : NSObject <SXVideoPlaybackObserver, SXMediaSelectionOptionsAvailabilityObserver>
{
    _Bool _hasMediaSelectionOptionsAvailable;
    CDUnknownBlockType _availabilityChangedBlock;
}

@property(copy, nonatomic, setter=onAvailabilityChanged:) CDUnknownBlockType availabilityChangedBlock; // @synthesize availabilityChangedBlock=_availabilityChangedBlock;
@property(nonatomic) _Bool hasMediaSelectionOptionsAvailable; // @synthesize hasMediaSelectionOptionsAvailable=_hasMediaSelectionOptionsAvailable;
- (void).cxx_destruct;
- (void)mediaSelectionOptionsAvailabilityChangedForPlaybackCoordinator:(id)arg1;
- (id)initWithPlaybackCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
