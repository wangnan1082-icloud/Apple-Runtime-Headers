//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary;

@interface GEORequestCounterInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_dict;
}

+ (_Bool)supportsSecureCoding;
+ (id)counterInfoWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)_formattedString;
- (void)encodeWithCoder:(id)arg1;
- (id)nonZeroResultModesForMode:(unsigned char)arg1;
- (id)nonZeroResultTypesForType:(unsigned char)arg1;
- (unsigned long long)numberOfRequestsForMode:(unsigned char)arg1 result:(unsigned char)arg2;
- (unsigned long long)numberOfRequestsForType:(unsigned char)arg1 result:(unsigned char)arg2;
@property(readonly, nonatomic) NSArray *requestModes;
@property(readonly, nonatomic) NSArray *requestTypes;
- (unsigned long long)recvBytesForMode:(unsigned char)arg1;
- (unsigned long long)recvBytesForType:(unsigned char)arg1;
- (unsigned long long)recvBytes;
- (unsigned long long)xmitBytesForMode:(unsigned char)arg1;
- (unsigned long long)xmitBytesForType:(unsigned char)arg1;
- (unsigned long long)xmitBytes;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
