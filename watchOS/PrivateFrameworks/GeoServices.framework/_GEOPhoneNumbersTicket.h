//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket
{
    NSArray *_phoneNumbers;
    _Bool _allowCellularDataForLookup;
}

- (void).cxx_destruct;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(int)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)description;
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3;

@end

