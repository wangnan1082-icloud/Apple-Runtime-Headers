//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVServices/__TVExtensionWireProtocol-Protocol.h>

@class BKSProcessAssertion, LSApplicationProxy, LSPlugInKitProxy, NSArray, NSLock, NSXPCConnection;

@interface TVExtension : NSObject <__TVExtensionWireProtocol>
{
    int __style;
    id __principalObject;
    NSArray *__protocols;
    LSApplicationProxy *__appProxy;
    LSPlugInKitProxy *__pluginProxy;
    NSLock *__lock;
    NSXPCConnection *__connection;
    BKSProcessAssertion *__procAssertion;
}

+ (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
+ (_Bool)appHasBinaryExtension:(id)arg1;
+ (id)extensionForContentIdentifier:(id)arg1;
+ (id)topShelfProviderExtensionForAppIdentifier:(id)arg1;
+ (id)bestExtensionWithAppIdentifier:(id)arg1 protocol:(id)arg2;
+ (id)allInstalledExtensionsOfType:(id)arg1 forAppIdentifier:(id)arg2;
+ (id)extensionWithPluginProxy:(id)arg1 appProxy:(id)arg2 isLegacy:(_Bool)arg3 protocol:(id)arg4;
+ (id)serviceExtension;
+ (void)setPrincipalObjectClass:(Class)arg1;
+ (void)initialize;
+ (void)load;
@property(retain) BKSProcessAssertion *_procAssertion; // @synthesize _procAssertion=__procAssertion;
@property(retain) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property(retain) NSLock *_lock; // @synthesize _lock=__lock;
@property(retain) LSPlugInKitProxy *_pluginProxy; // @synthesize _pluginProxy=__pluginProxy;
@property(retain) LSApplicationProxy *_appProxy; // @synthesize _appProxy=__appProxy;
@property int _style; // @synthesize _style=__style;
@property(copy) NSArray *_protocols; // @synthesize _protocols=__protocols;
@property(retain) id _principalObject; // @synthesize _principalObject=__principalObject;
- (void).cxx_destruct;
- (void)_xpc_topShelf_reportItemPlayed:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reportItemPlayed:(id)arg1;
- (void)_xpc_topShelf_reportItemSelected:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reportItemSelected:(id)arg1;
- (void)_xpc_topShelf_fetchContentItemsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchTopShelfInfoWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_xpc_checkAdoptedProtocolsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)fetchSupportedProtocolsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)shutdown;
- (id)containingApplicationProxy;
- (id)applicationIdentifier;
- (id)identifier;
- (_Bool)supportsPublicProtocol:(id)arg1;
- (id)description;
- (void)dealloc;

@end

