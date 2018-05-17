//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOTimeCheckpoints : PBCodable <NSCopying>
{
    CDStruct_084d6ede _distToNextCheckpoints;
    CDStruct_084d6ede _timeToNextCheckpoints;
}

- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setTimeToNextCheckpoints:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)timeToNextCheckpointAtIndex:(unsigned int)arg1;
- (void)addTimeToNextCheckpoint:(unsigned int)arg1;
- (void)clearTimeToNextCheckpoints;
@property(readonly, nonatomic) unsigned int *timeToNextCheckpoints;
@property(readonly, nonatomic) unsigned int timeToNextCheckpointsCount;
- (void)setDistToNextCheckpoints:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)distToNextCheckpointAtIndex:(unsigned int)arg1;
- (void)addDistToNextCheckpoint:(unsigned int)arg1;
- (void)clearDistToNextCheckpoints;
@property(readonly, nonatomic) unsigned int *distToNextCheckpoints;
@property(readonly, nonatomic) unsigned int distToNextCheckpointsCount;
- (void)dealloc;

@end
