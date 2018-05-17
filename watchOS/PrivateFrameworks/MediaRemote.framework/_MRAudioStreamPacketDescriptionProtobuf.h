//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable <NSCopying>
{
    long long _startOffset;
    unsigned int _dataByteSize;
    unsigned int _variableFramesInPacket;
    struct {
        unsigned int startOffset:1;
        unsigned int dataByteSize:1;
        unsigned int variableFramesInPacket:1;
    } _has;
}

@property(nonatomic) unsigned int dataByteSize; // @synthesize dataByteSize=_dataByteSize;
@property(nonatomic) unsigned int variableFramesInPacket; // @synthesize variableFramesInPacket=_variableFramesInPacket;
@property(nonatomic) long long startOffset; // @synthesize startOffset=_startOffset;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDataByteSize;
@property(nonatomic) _Bool hasVariableFramesInPacket;
@property(nonatomic) _Bool hasStartOffset;

@end
