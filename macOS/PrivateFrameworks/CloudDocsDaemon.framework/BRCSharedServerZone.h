//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCServerZone.h>

@class BRCSharedClientZone, NSString;

@interface BRCSharedServerZone : BRCServerZone
{
    NSString *_ownerName;
}

- (void).cxx_destruct;
- (BOOL)allocateRanks;
- (BOOL)_propagateFolderDeletesToTheirChildren;
- (long long)_propagateDeleteToChildrenOfItemID:(id)arg1;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;
- (id)ownerName;
@property(readonly, nonatomic) BRCSharedClientZone *clientZone;
- (id)asSharedZone;
@property(readonly, nonatomic) BOOL isPrivateZone;
@property(readonly, nonatomic) BOOL isSharedZone;

@end

