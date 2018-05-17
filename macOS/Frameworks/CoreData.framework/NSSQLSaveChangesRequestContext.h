//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSFaultHandler, NSMutableDictionary, NSSQLModel, NSSQLSavePlan, NSSaveChangesRequest, NSSet;

__attribute__((visibility("hidden")))
@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext
{
    NSDictionary *_metadataToWrite;
    NSSQLSavePlan *_savePlan;
    NSFaultHandler *_faultHandler;
    NSSet *_objectIDsToPruneTrigger;
    NSMutableDictionary *_originalCachedRows;
    NSMutableDictionary *_updateMasksForHistoryTracking;
}

@property(readonly, nonatomic) NSMutableDictionary *originalCachedRows; // @synthesize originalCachedRows=_originalCachedRows;
@property(readonly, nonatomic) NSFaultHandler *faultHandler; // @synthesize faultHandler=_faultHandler;
@property(readonly, nonatomic) NSSQLSavePlan *savePlan; // @synthesize savePlan=_savePlan;
@property(readonly, nonatomic) NSDictionary *metadataToWrite; // @synthesize metadataToWrite=_metadataToWrite;
- (id)dataMaskForKey:(id)arg1;
- (void)addDataMask:(id)arg1 forEntityKey:(id)arg2;
- (void)setOriginalRow:(id)arg1 forObjectID:(id)arg2;
- (id)originalRowForObjectID:(id)arg1;
- (void)executeRequestCore:(id *)arg1;
- (void)executeEpilogue;
- (void)executePrologue;
- (BOOL)isWritingRequest;
- (id)rowCache;
@property(readonly, nonatomic) NSSaveChangesRequest *request;
@property(readonly, nonatomic) NSSQLModel *model;
- (BOOL)hasChangesForWriting;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end
