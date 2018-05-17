//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDCallHistorySync : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _downloadRecordCount;
    unsigned int _uploadRecordCount;
    struct {
        unsigned int timestamp:1;
        unsigned int downloadRecordCount:1;
        unsigned int uploadRecordCount:1;
    } _has;
}

@property(nonatomic) unsigned int downloadRecordCount; // @synthesize downloadRecordCount=_downloadRecordCount;
@property(nonatomic) unsigned int uploadRecordCount; // @synthesize uploadRecordCount=_uploadRecordCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDownloadRecordCount;
@property(nonatomic) _Bool hasUploadRecordCount;
@property(nonatomic) _Bool hasTimestamp;

@end
