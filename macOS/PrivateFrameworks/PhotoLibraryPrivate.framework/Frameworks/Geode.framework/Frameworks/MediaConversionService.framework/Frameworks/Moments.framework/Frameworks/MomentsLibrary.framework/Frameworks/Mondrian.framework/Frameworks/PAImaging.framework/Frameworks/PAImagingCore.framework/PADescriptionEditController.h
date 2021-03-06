//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUUID, PFTraceBuffer;
@protocol DGInputSizePromise, OS_dispatch_queue;

@interface PADescriptionEditController : NSObject
{
    NSMutableArray *_operations;
    struct PFAsyncDispatchMulticaster *_multicaster;
    NSObject<OS_dispatch_queue> *_operationQueue;
    long long _orientation;
    long long _pipelineVersion;
    struct PFIntSize_st _inputSize;
    id <DGInputSizePromise> _verifiedInputSize;
    long long _editSource;
    unsigned long long _interactiveOperationIndex;
    NSUUID *_interactiveOperationUUID;
    BOOL _interactiveChangeWasAborted;
    PFTraceBuffer *_trace;
}

@property(readonly, nonatomic) long long editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic) id <DGInputSizePromise> verifiedInputSize; // @synthesize verifiedInputSize=_verifiedInputSize;
@property(readonly, nonatomic) struct PFIntSize_st inputSize; // @synthesize inputSize=_inputSize;
- (void).cxx_destruct;
- (void)removeReceiver:(struct NSObject *)arg1;
- (void)addWeakReceiver:(struct NSObject *)arg1;
- (void)addReceiver:(struct NSObject *)arg1;
- (void)notifyVideoComplementVisibilityChanged:(BOOL)arg1;
- (void)_abortInteractiveChange;
- (void)_abortInteractiveChangeIfNeeded;
- (void)_endInteractiveForOperationUUID:(id)arg1;
- (void)endInteractiveForOperationUUID:(id)arg1;
- (void)_beginInteractiveForOperationUUID:(id)arg1;
- (void)beginInteractiveForOperationUUID:(id)arg1;
- (id)interactiveOperationUUID;
- (unsigned long long)interactiveOperationIndex;
- (BOOL)isInteractive;
- (void)_addPresetAdjustmentStack:(id)arg1 mode:(unsigned long long)arg2;
- (void)addPresetAdjustmentStack:(id)arg1 mode:(unsigned long long)arg2;
- (void)_addOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)addOperationWithIdentifier:(id)arg1;
- (unsigned long long)insertIndexForOperationIdentifier:(id)arg1;
- (unsigned long long)_insertIndexForOperationIdentifier:(id)arg1;
- (id)_rawDecodeOperation;
- (BOOL)_canAddRAWReduceNoiseOperation;
- (BOOL)canAddOperationWithIdentifier:(id)arg1;
- (void)_insertOperation:(id)arg1 afterOperationWithUUID:(id)arg2;
- (void)insertOperation:(id)arg1 afterOperationWithUUID:(id)arg2;
- (void)_insertOperation:(id)arg1 beforeOperationWithUUID:(id)arg2;
- (void)insertOperation:(id)arg1 beforeOperationWithUUID:(id)arg2;
- (void)_ensureInitializedRawAwareOperation:(id)arg1;
- (void)_insertOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendOperation:(id)arg1;
- (void)_removeOperationWithUUID:(id)arg1;
- (void)removeOperationWithUUID:(id)arg1;
- (void)removeOperationAtIndex:(unsigned long long)arg1;
- (void)_removeOperationAtIndex:(unsigned long long)arg1;
- (void)_setOperation:(id)arg1 atIndex:(unsigned long long)arg2 invalidMasterRect:(struct CGRect)arg3;
- (void)_setOperationWithUUID:(id)arg1 withOperation:(id)arg2 invalidMasterRect:(struct CGRect)arg3;
- (void)replaceOperationWithUUID:(id)arg1 withOperation:(id)arg2 invalidMasterRect:(struct CGRect)arg3;
- (void)_replaceOperationAtIndex:(unsigned long long)arg1 withOperation:(id)arg2;
- (void)_replaceOperationWithUUID:(id)arg1 withDifferentOperation:(id)arg2;
- (void)replaceOperationWithUUID:(id)arg1 withOperation:(id)arg2;
- (id)_newOperationWithIdentifier:(id)arg1;
- (unsigned long long)_indexOfFirstOperationWithIdentifier:(id)arg1 createIfNeeded:(CDUnknownBlockType)arg2;
- (id)_firstOperationWithIdentifier:(id)arg1 createIfNeeded:(CDUnknownBlockType)arg2;
- (id)firstOperationUUIDWithIdentifier:(id)arg1 createIfNeeded:(CDUnknownBlockType)arg2;
- (unsigned long long)_indexOfFirstOperationWithIdentifier:(id)arg1;
- (id)_firstOperationWithIdentifier:(id)arg1;
- (id)firstOperationUUIDWithIdentifier:(id)arg1;
- (id)operationEditControllerForOperationWithUUID:(id)arg1;
- (unsigned long long)_indexOfOperationWithUUID:(id)arg1;
- (unsigned long long)countOfOperationsWithIdentifier:(id)arg1;
- (id)operationIdentifierWithUUID:(id)arg1;
- (BOOL)_hasOperationWithUUID:(id)arg1;
- (BOOL)hasOperationWithUUID:(id)arg1;
- (id)_operationWithUUID:(id)arg1;
- (id)operationWithUUID:(id)arg1;
- (id)operations;
- (id)operationAtIndex:(unsigned long long)arg1;
- (unsigned long long)operationCount;
- (void)_resetRenderDescription:(id)arg1;
- (void)resetRenderDescription:(id)arg1;
- (void)_setRenderDescription:(id)arg1;
- (void)setRenderDescription:(id)arg1;
- (id)renderDescription;
- (id)_renderDescription;
- (void)_setPipelineVersion:(long long)arg1;
@property long long pipelineVersion;
- (void)_setOrientation:(long long)arg1;
@property long long orientation;
- (void)applyOrientation:(long long)arg1;
- (id)description;
- (id)initWithRenderDescription:(id)arg1;
- (id)initWithOperations:(id)arg1 inputSize:(struct PFIntSize_st)arg2 verifiedInputSize:(id)arg3 orientation:(long long)arg4 editSource:(long long)arg5 pipelineVersion:(long long)arg6;

@end

