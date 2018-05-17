//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDSpringBoardFolderStats : PBCodable <NSCopying>
{
    CDStruct_cb16bb10 _numberOfFoldersPerPages;
    unsigned long long _numberOfFoldersInDock;
    unsigned long long _numberOfPagesInRootFolder;
    unsigned long long _timestamp;
    unsigned long long _totalNumberOfFolders;
    unsigned long long _totalNumberOfIconsInDock;
    struct {
        unsigned int numberOfFoldersInDock:1;
        unsigned int numberOfPagesInRootFolder:1;
        unsigned int timestamp:1;
        unsigned int totalNumberOfFolders:1;
        unsigned int totalNumberOfIconsInDock:1;
    } _has;
}

@property(nonatomic) unsigned long long numberOfFoldersInDock; // @synthesize numberOfFoldersInDock=_numberOfFoldersInDock;
@property(nonatomic) unsigned long long totalNumberOfIconsInDock; // @synthesize totalNumberOfIconsInDock=_totalNumberOfIconsInDock;
@property(nonatomic) unsigned long long numberOfPagesInRootFolder; // @synthesize numberOfPagesInRootFolder=_numberOfPagesInRootFolder;
@property(nonatomic) unsigned long long totalNumberOfFolders; // @synthesize totalNumberOfFolders=_totalNumberOfFolders;
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
- (void)setNumberOfFoldersPerPages:(unsigned long long *)arg1 count:(unsigned int)arg2;
- (unsigned long long)numberOfFoldersPerPageAtIndex:(unsigned int)arg1;
- (void)addNumberOfFoldersPerPage:(unsigned long long)arg1;
- (void)clearNumberOfFoldersPerPages;
@property(readonly, nonatomic) unsigned long long *numberOfFoldersPerPages;
@property(readonly, nonatomic) unsigned int numberOfFoldersPerPagesCount;
@property(nonatomic) _Bool hasNumberOfFoldersInDock;
@property(nonatomic) _Bool hasTotalNumberOfIconsInDock;
@property(nonatomic) _Bool hasNumberOfPagesInRootFolder;
@property(nonatomic) _Bool hasTotalNumberOfFolders;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
