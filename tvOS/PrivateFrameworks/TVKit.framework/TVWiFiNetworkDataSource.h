//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class NSArray, NSOperationQueue, NSString, TVSWiFiNetwork, TVSWiFiNetworkConnectionOperation, UITableView;

@interface TVWiFiNetworkDataSource : NSObject <UITableViewDataSource>
{
    NSOperationQueue *_connectionQueue;
    unsigned long long _groupingStyle;
    _Bool _performingScan;
    _Bool _performingDirectedScan;
    UITableView *_tableView;
    Class _cellClass;
    TVSWiFiNetwork *_currentNetwork;
    id <TVSWiFiNetworkConnectionOperationDelegate> _connectionDelegate;
    CDUnknownBlockType _scanCompletionHandler;
    TVSWiFiNetwork *_associatingNetwork;
    TVSWiFiNetworkConnectionOperation *_connectionOperation;
    NSArray *_networks;
}

@property(copy, nonatomic) NSArray *networks; // @synthesize networks=_networks;
@property(retain, nonatomic) TVSWiFiNetworkConnectionOperation *connectionOperation; // @synthesize connectionOperation=_connectionOperation;
@property(retain, nonatomic) TVSWiFiNetwork *associatingNetwork; // @synthesize associatingNetwork=_associatingNetwork;
@property(nonatomic) _Bool performingDirectedScan; // @synthesize performingDirectedScan=_performingDirectedScan;
@property(copy, nonatomic) CDUnknownBlockType scanCompletionHandler; // @synthesize scanCompletionHandler=_scanCompletionHandler;
@property(nonatomic) _Bool performingScan; // @synthesize performingScan=_performingScan;
@property(nonatomic) __weak id <TVSWiFiNetworkConnectionOperationDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(retain, nonatomic) TVSWiFiNetwork *currentNetwork; // @synthesize currentNetwork=_currentNetwork;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)_changesFromUpdatedNetworks;
- (id)_connectionQueue;
- (void)_dispatchConnectionOperation:(id)arg1;
- (long long)_indexForSection:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scanWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)connectToNetworkWithName:(id)arg1;
- (void)connectToNetwork:(id)arg1;
- (id)networkAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 groupingStyle:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
