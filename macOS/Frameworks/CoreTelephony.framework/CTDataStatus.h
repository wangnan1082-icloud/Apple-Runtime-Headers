//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CTDataStatus : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _attached;
    BOOL _roamAllowed;
    BOOL _dataPlanSignalingReductionOverride;
    BOOL _cellularDataPossible;
    BOOL _inHomeCountry;
    int _indicator;
    int _indicatorOverride;
    int _radioTechnology;
    unsigned int _activeContexts;
    unsigned int _totalActiveContexts;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL inHomeCountry; // @synthesize inHomeCountry=_inHomeCountry;
@property(nonatomic) unsigned int totalActiveContexts; // @synthesize totalActiveContexts=_totalActiveContexts;
@property(nonatomic) unsigned int activeContexts; // @synthesize activeContexts=_activeContexts;
@property(nonatomic) BOOL cellularDataPossible; // @synthesize cellularDataPossible=_cellularDataPossible;
@property(nonatomic) BOOL dataPlanSignalingReductionOverride; // @synthesize dataPlanSignalingReductionOverride=_dataPlanSignalingReductionOverride;
@property(nonatomic) int radioTechnology; // @synthesize radioTechnology=_radioTechnology;
@property(nonatomic) BOOL roamAllowed; // @synthesize roamAllowed=_roamAllowed;
@property(nonatomic) int indicatorOverride; // @synthesize indicatorOverride=_indicatorOverride;
@property(nonatomic) int indicator; // @synthesize indicator=_indicator;
@property(nonatomic) BOOL attached; // @synthesize attached=_attached;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
