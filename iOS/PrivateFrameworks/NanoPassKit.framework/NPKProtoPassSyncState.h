//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface NPKProtoPassSyncState : PBCodable <NSCopying>
{
    NSMutableArray *_passSyncStateItems;
}

+ (Class)passSyncStateItemsType;
@property(retain, nonatomic) NSMutableArray *passSyncStateItems; // @synthesize passSyncStateItems=_passSyncStateItems;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)passSyncStateItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)passSyncStateItemsCount;
- (void)addPassSyncStateItems:(id)arg1;
- (void)clearPassSyncStateItems;

@end
