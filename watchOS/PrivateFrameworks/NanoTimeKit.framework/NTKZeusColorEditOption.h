//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKEnumeratedEditOption.h>

@interface NTKZeusColorEditOption : NTKEnumeratedEditOption
{
}

+ (id)_localizedNameForValue:(unsigned int)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned int)arg1 forDevice:(id)arg2;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedEndingValuesRestrictedByDevice:(id)arg1;
+ (id)_orderedBeginningValuesRestrictedByDevice:(id)arg1;
+ (id)optionWithColor:(unsigned int)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
- (_Bool)optionExistsInOSVersion:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int color;

@end

