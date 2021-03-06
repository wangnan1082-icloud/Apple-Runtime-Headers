//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorGizmo/BLTSectionInfoStoreObserver-Protocol.h>
#import <BulletinDistributorGizmo/BLTSettingsServiceServerExportedInterface-Protocol.h>
#import <BulletinDistributorGizmo/NSXPCListenerDelegate-Protocol.h>

@class BLTMuteSync, BLTSectionIdentifierMapper, BLTSectionInfoStore, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSXPCListener;

@interface BLTSettingsServiceServer : NSObject <NSXPCListenerDelegate, BLTSettingsServiceServerExportedInterface, BLTSectionInfoStoreObserver>
{
    struct _opaque_pthread_mutex_t _connectionsLock;
    _Bool _addedSectionInfoStoreObserver;
    BLTSectionInfoStore *_sectionInfoStore;
    BLTMuteSync *_muteSync;
    NSMutableDictionary *_allowsNotificationsSectionIDsClients;
    NSMutableSet *_clientConnections;
    NSMutableSet *_muteObserverConnections;
    NSSet *_mutedForTodaySectionIdentifiers;
    NSMutableSet *_appInfoObserverConnections;
    NSXPCListener *_listener;
    BLTSectionIdentifierMapper *_sectionIdentifierMapper;
}

@property(retain, nonatomic) BLTSectionIdentifierMapper *sectionIdentifierMapper; // @synthesize sectionIdentifierMapper=_sectionIdentifierMapper;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSMutableSet *appInfoObserverConnections; // @synthesize appInfoObserverConnections=_appInfoObserverConnections;
@property(retain, nonatomic) NSSet *mutedForTodaySectionIdentifiers; // @synthesize mutedForTodaySectionIdentifiers=_mutedForTodaySectionIdentifiers;
@property(retain, nonatomic) NSMutableSet *muteObserverConnections; // @synthesize muteObserverConnections=_muteObserverConnections;
@property(retain, nonatomic) NSMutableSet *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain, nonatomic) NSMutableDictionary *allowsNotificationsSectionIDsClients; // @synthesize allowsNotificationsSectionIDsClients=_allowsNotificationsSectionIDsClients;
@property(nonatomic) __weak BLTMuteSync *muteSync; // @synthesize muteSync=_muteSync;
@property(nonatomic) __weak BLTSectionInfoStore *sectionInfoStore; // @synthesize sectionInfoStore=_sectionInfoStore;
- (void).cxx_destruct;
- (void)applicationInfoForBundleID:(id)arg1 iconSize:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeApplicationInfoObserver;
- (void)_removeApplicationInfoObserver:(id)arg1;
- (void)addApplicationInfoObserver;
- (void)removeMuteNotificationsObserver;
- (void)_removeMuteNotificationsObserver:(id)arg1;
- (void)addMuteNotificationsObserver;
- (void)_handleMuteForTodaySectionsChanged:(id)arg1;
- (void)sectionInfoStoreUpdated:(id)arg1 section:(id)arg2;
- (void)removeAllowsNotificationsObserverForSectionIDs:(id)arg1;
- (void)addAllowsNotificationsObserverForSectionIDs:(id)arg1;
- (void)_removeSectionInfoStoreObserver;
- (void)_addSectionInfoStoreObserver;
- (void)_removeConnectionFromAllowsNotificationsSectionIDsClients:(id)arg1 sectionIDs:(id)arg2;
- (void)_removeConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)initWithMapper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

