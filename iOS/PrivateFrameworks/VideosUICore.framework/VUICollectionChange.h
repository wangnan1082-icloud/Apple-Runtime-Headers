//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, VUICollectionChangeSet;

@interface VUICollectionChange : NSObject
{
    unsigned long long _changeKind;
    NSIndexSet *_sourceIndexes;
    NSIndexSet *_destinationIndexes;
    VUICollectionChangeSet *_updateChangeSet;
}

@property(retain, nonatomic) VUICollectionChangeSet *updateChangeSet; // @synthesize updateChangeSet=_updateChangeSet;
@property(readonly, copy, nonatomic) NSIndexSet *destinationIndexes; // @synthesize destinationIndexes=_destinationIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *sourceIndexes; // @synthesize sourceIndexes=_sourceIndexes;
@property(readonly, nonatomic) unsigned long long changeKind; // @synthesize changeKind=_changeKind;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3;

@end
