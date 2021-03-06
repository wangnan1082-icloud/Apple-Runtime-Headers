//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/PARenderResult-Protocol.h>

@class IPARegion, NSString, PADevice;

@interface PARenderResult : NSObject <PARenderResult>
{
    PADevice *_device;
    IPARegion *_region;
    unsigned long long _updateNumber;
}

@property(readonly) unsigned long long updateNumber; // @synthesize updateNumber=_updateNumber;
@property(readonly) IPARegion *region; // @synthesize region=_region;
@property(readonly) PADevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithDevice:(id)arg1 region:(id)arg2 updateNumber:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

