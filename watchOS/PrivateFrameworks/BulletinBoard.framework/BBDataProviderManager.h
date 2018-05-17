//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBDataProviderStoreDelegate.h"

@class BBLocalDataProviderStore, BBRemoteDataProviderConnectionResolver, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface BBDataProviderManager : NSObject <BBDataProviderStoreDelegate>
{
    id <BBDataProviderManagerDelegate> _delegate;
    BBLocalDataProviderStore *_localDataProviderStore;
    BBRemoteDataProviderConnectionResolver *_remoteDataProviderResolver;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _loadQueueSuspended;
    NSObject<OS_dispatch_queue> *_loadDataProviderQueue;
    NSMutableDictionary *_parentFactoriesBySectionID;
}

- (void).cxx_destruct;
- (id)_configureSectionInfo:(id)arg1 forDataProvider:(id)arg2;
- (id)_configureDataProvider:(id)arg1 performMigration:(_Bool)arg2;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (id)_queue_getSectionInfoForSectionID:(id)arg1;
- (id)_queue_dataProviderForUniversalSectionID:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (id)parentSectionDataProviderFactoryForSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;
- (id)localSectionIdentifierFromDismissalSectionIdentifer:(id)arg1;
- (void)reloadIdentityForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)rebuildSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)noteSettingsChanged:(id)arg1 forSectionID:(id)arg2;
- (void)loadAllDataProvidersAndPerformMigration:(_Bool)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
