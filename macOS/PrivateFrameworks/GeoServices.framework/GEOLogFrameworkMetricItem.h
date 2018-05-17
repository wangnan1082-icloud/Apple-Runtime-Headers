//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOLogFrameworkMetricItem : PBCodable <NSCopying>
{
    unsigned long long _metricItemSize;
    unsigned int _metricItemCount;
    unsigned int _metricItemIdHash;
    unsigned int _metricItemQueueTime;
    unsigned int _metricItemRetryCount;
    int _metricItemType;
    struct {
        unsigned int metricItemSize:1;
        unsigned int metricItemCount:1;
        unsigned int metricItemIdHash:1;
        unsigned int metricItemQueueTime:1;
        unsigned int metricItemRetryCount:1;
        unsigned int metricItemType:1;
    } _has;
}

@property(nonatomic) unsigned int metricItemIdHash; // @synthesize metricItemIdHash=_metricItemIdHash;
@property(nonatomic) unsigned int metricItemQueueTime; // @synthesize metricItemQueueTime=_metricItemQueueTime;
@property(nonatomic) unsigned long long metricItemSize; // @synthesize metricItemSize=_metricItemSize;
@property(nonatomic) unsigned int metricItemRetryCount; // @synthesize metricItemRetryCount=_metricItemRetryCount;
@property(nonatomic) unsigned int metricItemCount; // @synthesize metricItemCount=_metricItemCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMetricItemIdHash;
@property(nonatomic) BOOL hasMetricItemQueueTime;
@property(nonatomic) BOOL hasMetricItemSize;
@property(nonatomic) BOOL hasMetricItemRetryCount;
@property(nonatomic) BOOL hasMetricItemCount;
- (int)StringAsMetricItemType:(id)arg1;
- (id)metricItemTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMetricItemType;
@property(nonatomic) int metricItemType; // @synthesize metricItemType=_metricItemType;

@end
