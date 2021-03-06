//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLPreheatItemSource-Protocol.h>

@class NSMutableIndexSet, NSString, PLImageTable;
@protocol OS_dispatch_queue;

@interface PLImageTablePreheater : NSObject <PLPreheatItemSource>
{
    NSMutableIndexSet *_indexesForPreheating;
    NSObject<OS_dispatch_queue> *_indexIsolationQueue;
    NSObject<OS_dispatch_queue> *_preheatQueue;
    PLImageTable *_imageTable;
}

@property(retain, nonatomic) PLImageTable *imageTable; // @synthesize imageTable=_imageTable;
- (void)preheatImageDataAtIndexes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 options:(unsigned int)arg4;
- (void)_preheatEntryAtIndex:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_preheatEntriesAtIndexes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_flushAndReturnIndexesForPreheating;
- (void)dealloc;
- (id)initWithImageTable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

