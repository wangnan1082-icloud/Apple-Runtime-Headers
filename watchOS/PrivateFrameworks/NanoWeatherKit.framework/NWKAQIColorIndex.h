//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoWeatherKit/NWKColorIndex.h>

#import <NanoWeatherKit/NWKColorIndexable-Protocol.h>

@class NSString;

@interface NWKAQIColorIndex : NWKColorIndex <NWKColorIndexable>
{
}

+ (id)allIndices;
+ (id)indexWithAQIValue:(double)arg1 color:(id)arg2;
- (id)initWithAQIValue:(double)arg1 color:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

