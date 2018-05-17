//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMutableDictionary;

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _dataAllowedFallbackValue;
    _Bool _cellularDataAllowedFallbackValue;
    _Bool _wiFiDataAllowedFallbackValue;
    NSMutableDictionary *_networkTypeToDataAllowed;
    NSMutableDictionary *_networkTypeToSizeLimit;
}

+ (id)mediaTypeNetworkConstraintsFromURLBag:(id)arg1;
- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;
- (id)sizeLimitForNetworkType:(long long)arg1;
- (_Bool)shouldAllowDataForWiFiNetworkTypes;
- (_Bool)shouldAllowDataForCellularNetworkTypes;
- (_Bool)shouldAllowDataForNetworkType:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;

@end
