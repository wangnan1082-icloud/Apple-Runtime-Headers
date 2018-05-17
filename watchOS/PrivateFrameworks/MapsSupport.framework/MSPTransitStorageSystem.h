//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitSystem.h"
#import "NSCopying.h"

@class MSPTransitStorageArtwork, NSString, PBUnknownFields;

@interface MSPTransitStorageSystem : PBCodable <GEOTransitSystem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    MSPTransitStorageArtwork *_artwork;
    NSString *_name;
    CDStruct_e99c65f7 _has;
}

@property(retain, nonatomic) MSPTransitStorageArtwork *artwork; // @synthesize artwork=_artwork;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasMuid;
- (id)initWithSystem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
