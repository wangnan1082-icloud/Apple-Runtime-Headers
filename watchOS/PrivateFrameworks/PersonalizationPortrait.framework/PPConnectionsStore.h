//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPConnectionsStore : NSObject
{
}

- (_Bool)iterRecentLocationsForConsumer:(unsigned int)arg1 criteria:(id)arg2 limit:(unsigned int)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id *)arg6 block:(CDUnknownBlockType)arg7;
- (_Bool)iterRecentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (id)init;

@end

