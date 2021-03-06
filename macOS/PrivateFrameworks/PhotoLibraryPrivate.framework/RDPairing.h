//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RDDatabase;

@interface RDPairing : NSObject
{
    RDDatabase *_database;
}

- (void).cxx_destruct;
- (void)unpairMasterList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processPairingList:(id)arg1 duplicateDetection:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithLibrary:(id)arg1;
- (id)init;
- (void)serviceProcessUnpairingMasterList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processPairingMap:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)upgradeMasterMediaGroupId:(id)arg1 force:(BOOL)arg2;
- (void)serviceProcessPairingList:(id)arg1 duplicateDetection:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)unpairingFilterForModelIdList:(id)arg1;
- (void)upgradePairWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)pairingFilterForModelIdList:(id)arg1;
- (id)potentialParingList:(id)arg1;

@end

